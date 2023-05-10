#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    pid_t mojpid, x;
    mojpid = getpid(); // uzyskanie identyfikatora procesu macierzystego
    printf("[%u]: Uruchamiam ls -l -a\n", mojpid);
    x = fork(); // utworzenie procesu potomnego

    if (x == 0) // kod dla procesu potomnego
    {
        if (execl("/bin/ls", "ls", "-l", "-a", NULL) == -1) // uruchomienie programu ls
        {
            printf("Uruchomienie ls nie powiodlo sie\n");
        }
    }
    else // kod dla procesu macierzystego
    {
        waitpid(x, NULL, 0); // czekanie na zakończenie procesu potomnego
        printf("[%u]: ls -l -a zakonczony\n", mojpid);
    }
    return 0;
}
