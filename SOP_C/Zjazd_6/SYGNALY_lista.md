## Lista sygnałów w systemie Linux

Polecenie:
```shell
kill -l > lista_sygnalow.txt
```
wykonuje następujące czynności:

`kill -l` jest to polecenie w systemie Linux, które wyświetla listę wszystkich dostępnych sygnałów. Bez żadnych argumentów wywołania, polecenie kill -l wyświetla listę sygnałów w formie numerycznej i alfanumerycznej.

>: Jest to operator przekierowania wyjścia. W tym przypadku operator > przekierowuje wynik polecenia kill -l (czyli listę sygnałów) i przekierowuje go do pliku o nazwie "lista_sygnalow.txt".

W rezultacie po wykonaniu tego polecenia, zostanie utworzony plik "lista_sygnalow.txt", który zawiera listę wszystkich dostępnych sygnałów w systemie, zapisanych w formie numerycznej i alfanumerycznej.

| Numer sygnału | Nazwa         | Opis                                      | Domyślna akcja wykonana                                    |
| ------------- | ------------- | ----------------------------------------- | --------------------------------------------------------- |
| 1             | SIGHUP        | Hangup - zamknięcie terminala             | Domyślnie nie wykonuje żadnej akcji                        |
| 2             | SIGINT        | Przerwanie (CTRL+C)                       | Domyślnie przerywa działanie procesu                       |
| 3             | SIGQUIT       | Zakończenie z poziomem 3 (CTRL+\)         | Domyślnie generuje plik zrzutu pamięci                     |
| 4             | SIGILL        | Błędna instrukcja                          | Domyślnie generuje plik zrzutu pamięci                     |
| 5             | SIGTRAP       | Przełącznik pułapki (np. debugger)         | Domyślnie generuje plik zrzutu pamięci                     |
| 6             | SIGABRT       | Sygnał abortu                              | Domyślnie generuje plik zrzutu pamięci                     |
| 7             | SIGBUS        | Błąd magistrali                            | Domyślnie generuje plik zrzutu pamięci                     |
| 8             | SIGFPE        | Błąd zmiennoprzecinkowy                    | Domyślnie generuje plik zrzutu pamięci                     |
| 9             | SIGKILL       | Bezwarunkowe zakończenie                    | Natychmiastowe zakończenie procesu                         |
| 10            | SIGUSR1       | Sygnał użytkownika 1                       | Domyślnie nie wykonuje żadnej akcji                        |
| 11            | SIGSEGV       | Błąd segmentacji                           | Domyślnie generuje plik zrzutu pamięci                     |
| 12            | SIGUSR2       | Sygnał użytkownika 2                       | Domyślnie nie wykonuje żadnej akcji                        |
| 13            | SIGPIPE       | Zapis do zerwanego potoku                  | Domyślnie powoduje zakończenie procesu                     |
| 14            | SIGALRM       | Sygnał alarmu                              | Domyślnie nie wykonuje żadnej akcji                        |
| 15            | SIGTERM       | Zakończenie                                | Domyślnie zakańcza działanie procesu                       |
| 16            | SIGSTKFLT     | Sygnał stosu zmiennego                      | Domyślnie nie wykonuje żadnej akcji                        |
| 17            | SIGCHLD       | Zmiana statusu potomka                     | Domyślnie nie wykonuje żadnej akcji                        |
| 18            | SIGCONT       | Kontynuacja                                | Domyślnie kontynuuje zatrzymany proces                     |
| 19            | SIGSTOP       | Zatrzymanie                                | Domyślnie zatrzymuje proces                                |
| 20            | SIGTSTP       | Zatrzymanie (CTRL+Z)                       | Domyślnie zatrzymuje proces                                |
| 21            | SIGTTIN       | Wejście tła                                | Domyślnie zatrzymuje proces                                |
| 22            | SIGTTOU       | Wyjście tła                                | Domyślnie zatrzymuje proces                                |
| 23            | SIGURG        | Dane pilne                                | Domyślnie nie wykonuje żadnej akcji                        |
| 24            | SIGXCPU       | Przekroczony limit czasu CPU              | Domyślnie generuje plik zrzutu pamięci                     |
| 25            | SIGXFSZ       | Przekroczony limit rozmiaru pliku         | Domyślnie generuje plik zrzutu pamięci                     |
| 26            | SIGVTALRM     | Wirtualny sygnał alarmu                    | Domyślnie nie wykonuje żadnej akcji                        |
| 27            | SIGPROF       | Profilowanie                               | Domyślnie nie wykonuje żadnej akcji                        |
| 28            | SIGWINCH      | Zmiana rozmiaru okna                       | Domyślnie nie wykonuje żadnej akcji                        |
| 29            | SIGIO         | I/O gotowe                                | Domyślnie nie wykonuje żadnej akcji                        |
| 30            | SIGPWR        | Sygnał zasilania                           | Domyślnie nie wykonuje żadnej akcji                        |
| 31            | SIGSYS        | Błędne wywołanie systemowe                 | Domyślnie generuje plik zrzutu pamięci                     |
| 34            | SIGRTMIN      | Pierwszy sygnał czasu rzeczywistego        | Domyślnie nie wykonuje żadnej akcji                        |
| 35            | SIGRTMIN+1    | Drugi sygnał czasu rzeczywistego           | Domyślnie nie wykonuje żadnej akcji                        |
| 36            | SIGRTMIN+2    | Trzeci sygnał czasu rzeczywistego          | Domyślnie nie wykonuje żadnej akcji                        |
| 37            | SIGRTMIN+3    | Czwarty sygnał czasu rzeczywistego         | Domyślnie nie wykonuje żadnej akcji                        |
| 38            | SIGRTMIN+4    | Piąty sygnał czasu rzeczywistego           | Domyślnie nie wykonuje żadnej akcji                        |
| 39            | SIGRTMIN+5    | Szósty sygnał czasu rzeczywistego          | Domyślnie nie wykonuje żadnej akcji                        |
| 40            | SIGRTMIN+6    | Siódmy sygnał czasu rzeczywistego          | Domyślnie nie wykonuje żadnej akcji                        |
| 41            | SIGRTMIN+7    | Ósmy sygnał czasu rzeczywistego            | Domyślnie nie wykonuje żadnej akcji                        |
| 42            | SIGRTMIN+8    | Dziewiąty sygnał czasu rzeczywistego        | Domyślnie nie wykonuje żadnej akcji                        |
| 43            | SIGRTMIN+9    | Dziesiąty sygnał czasu rzeczywistego        | Domyślnie nie wykonuje żadnej akcji                        |
| 44            | SIGRTMIN+10   | Jedenasty sygnał czasu rzeczywistego       | Domyślnie nie wykonuje żadnej akcji                        |
| 45            | SIGRTMIN+11   | Dwunasty sygnał czasu rzeczywistego        | Domyślnie nie wykonuje żadnej akcji                        |
| 46            | SIGRTMIN+12   | Trzynasty sygnał czasu rzeczywistego       | Domyślnie nie wykonuje żadnej akcji                        |
| 47            | SIGRTMIN+13   | Czternasty sygnał czasu rzeczywistego      | Domyślnie nie wykonuje żadnej akcji                        |
| 48            | SIGRTMIN+14   | Piętnasty sygnał czasu rzeczywistego       | Domyślnie nie wykonuje żadnej akcji                        |
| 49            | SIGRTMIN+15   | Szesnasty sygnał czasu rzeczywistego       | Domyślnie nie wykonuje żadnej akcji                        |
| 50            | SIGRTMAX-14   | Czterdziesty drugi sygnał czasu rzeczywistego | Domyślnie nie wykonuje żadnej akcji                     |
| 51            | SIGRTMAX-13   | Czterdziesty trzeci sygnał czasu rzeczywistego | Domyślnie nie wykonuje żadnej akcji                     |
| 52            | SIGRTMAX-12   | Czterdziesty czwarty sygnał czasu rzeczywistego | Domyślnie nie wykonuje żadnej akcji                     |
| 53            | SIGRTMAX-11   | Czterdziesty piąty sygnał czasu rzeczywistego  | Domyślnie nie wykonuje żadnej akcji                     |
| 54            | SIGRTMAX-10   | Czterdziesty szósty sygnał czasu rzeczywistego | Domyślnie nie wykonuje żadnej akcji                     |
| 55            | SIGRTMAX-9    | Czterdziesty siódmy sygnał czasu rzeczywistego | Domyślnie nie wykonuje żadnej akcji                     |
| 56            | SIGRTMAX-8    | Czterdziesty ósmy sygnał czasu rzeczywistego   | Domyślnie nie wykonuje żadnej akcji                     |
| 57            | SIGRTMAX-7    | Czterdziesty dziewiąty sygnał czasu rzeczywistego | Domyślnie nie wykonuje żadnej akcji                     |
| 58            | SIGRTMAX-6    | Pięćdziesiąty sygnał czasu rzeczywistego      | Domyślnie nie wykonuje żadnej akcji                        |
| 59            | SIGRTMAX-5    | Pięćdziesiąty pierwszy sygnał czasu rzeczywistego | Domyślnie nie wykonuje żadnej akcji                     |
| 60            | SIGRTMAX-4    | Pięćdziesiąty drugi sygnał czasu rzeczywistego | Domyślnie nie wykonuje żadnej akcji                     |
| 61            | SIGRTMAX-3    | Pięćdziesiąty trzeci sygnał czasu rzeczywistego | Domyślnie nie wykonuje żadnej akcji                     |
| 62            | SIGRTMAX-2    | Pięćdziesiąty czwarty sygnał czasu rzeczywistego | Domyślnie nie wykonuje żadnej akcji                     |
| 63            | SIGRTMAX-1    | Pięćdziesiąty piąty sygnał czasu rzeczywistego | Domyślnie nie wykonuje żadnej akcji                     |
| 64            | SIGRTMAX      | Ostatni sygnał czasu rzeczywistego           | Domyślnie nie wykonuje żadnej akcji                        |
