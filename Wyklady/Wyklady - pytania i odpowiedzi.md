# Egzamin SOP:

## Przykładowe pytania i odpowiedzi:

1. **Jaka jest różnica między ścieżką relatywną, a absolutną? Podaj także przykład.**

   Różnica między ścieżką relatywną a absolutną polega na tym, że ścieżka relatywna jest odniesieniem do bieżącego folderu, podczas gdy ścieżka absolutna podaje pełną ścieżkę od korzenia. 

   Przykład:
   - Ścieżka relatywna: `../folder/plik.txt`
   - Ścieżka absolutna: `C:/folder/plik.txt`

2. **Do czego służy licznik otwarć pliku?**

   Licznik otwarć pliku służy do śledzenia liczby otwarć danego pliku przez różne procesy. Pozwala kontrolować dostęp do pliku, zwłaszcza w przypadku, gdy wiele procesów próbuje uzyskać do niego dostęp równocześnie.

3. **Jaki typ plików jest bezpośrednio obsługiwany przez praktycznie każdy system operacyjny?**

   Pliki tekstowe (plain text) są bezpośrednio obsługiwane przez praktycznie każdy system operacyjny.

4. **Co to jest biblioteka współdzielona?**

   Biblioteka współdzielona to forma biblioteki programistycznej, która może być używana przez wiele programów jednocześnie. Jest ładowana do pamięci operacyjnej tylko raz, a procesy korzystają z niej poprzez odwołania.

5. **Z jakiego powodu stosuje się biblioteki współdzielone?**

   Stosuje się biblioteki współdzielone w celu oszczędności pamięci i uniknięcia redundancji w systemie. Pozwala to na wielokrotne wykorzystanie funkcji i kodu przez różne programy, co przyczynia się do efektywności i modularności oprogramowania.

6. **Wymień jakie znasz metody komunikacji międzyprocesowej.**

   - Potoki (pipes)
   - Kolejki komunikatów (message queues)
   - Semafory
   - Pamięć współdzielona (shared memory)
   - Gniazda (sockets)
   - Sygnały (signals)

7. **Co to jest pamięć współdzielona (shared memory)?**

   Pamięć współdzielona (shared memory) to obszar pamięci, który może być odczytywany i zapisywany przez różne procesy. Umożliwia szybką wymianę danych między procesami, ponieważ nie wymaga kopiowania danych między nimi.

8. **Co to jest PID?**

   PID (Process ID) to unikalny identyfikator przypisany do każdego procesu w systemie operacyjnym. Pozwala na jednoznaczne rozróżnienie procesów i zarządzanie nimi.

9. **Co to jest PPID

   PPID (Parent Process ID) to identyfikator procesu, który jest rodzicem danego procesu. Jest to ID procesu, który utworzył lub stworzył dany proces.

10. **Do czego służą sygnały?**

    Sygnały służą do komunikacji między procesami lub między systemem operacyjnym a procesem. Wykorzystuje się je do powiadamiania procesów o różnych zdarzeniach, takich jak zakończenie procesu, przerwanie, błąd czy inna informacja.


11. **Jak wygląda schemat producent - konsument?**

    Schemat producent - konsument jest jednym z klasycznych problemów synchronizacji w systemach operacyjnych. Producent produkuje dane i umieszcza je w buforze, a konsument pobiera te dane z bufora. Ważne jest, aby producent i konsument działały synchronicznie, aby uniknąć sytuacji wyścigu.

12. **Wyjaśnij (na jakimś przykładzie) sytuację wyścigu.**

    Sytuacja wyścigu występuje, gdy dwa lub więcej wątków lub procesów równocześnie próbują uzyskać dostęp do współdzielonych zasobów lub sekcji krytycznej. Przykładem może być kilka wątków, które równocześnie próbują zapisywać do tego samego pliku, co prowadzi do nieprzewidywalnych wyników lub uszkodzenia danych.

13. **W jaki sposób rozwiązuje się problem sytuacji wyścigu?**

    Problem sytuacji wyścigu można rozwiązać za pomocą mechanizmów synchronizacji, takich jak semafory, mutexy lub monitory. Te mechanizmy pozwalają na synchronizację dostępu do współdzielonych zasobów, tak aby tylko jeden wątek lub proces mógł ich używać w danym momencie.

14. **Do czego służy sekcja krytyczna?**

    Sekcja krytyczna to część kodu, która wymaga ekskluzywnego dostępu do współdzielonych zasobów. Jest to obszar, w którym zmienne lub dane mogą być modyfikowane przez jeden wątek lub proces w danym momencie. Sekcje krytyczne są chronione przy użyciu mechanizmów synchronizacji, takich jak mutexy, aby zapewnić bezpieczny dostęp do zasobów.

15. **W jaki sposób można zrealizować sekcję mutex?**

    Sekcję mutex można zrealizować za pomocą obiektu mutex, który pełni rolę flagi lub blokady. Wątek lub proces, który chce wejść do sekcji krytycznej, najpierw próbuje zablokować mutex. Jeśli mutex jest już zablokowany przez inny wątek lub proces, to czeka, aż zostanie odblokowany. Po zakończeniu sekcji krytycznej, mutex zostaje odblokowany, umożliwiając innym wątkom lub procesom wejście.

16. **Co to jest mutex?**

    Mutex (MUTual EXclusion) to mechanizm synchronizacji służący do zapewnienia, że tylko jeden wątek lub proces może jednocześnie uzyskać dostęp do sekcji krytycznej. Działa jak blokada, która może być zakładana i zdejmowana przez wą

tki lub procesy.

17. **Co to jest semafor?**

    Semafor to abstrakcyjny obiekt synchronizacji używany do kontrolowania dostępu do współdzielonych zasobów przez wiele wątków lub procesów. Semafor utrzymuje liczbę dostępnych zasobów i umożliwia oczekiwanie na dostęp lub zwolnienie zasobów.

18. **Do czego może służyć semafor?**

    Semafor może służyć do rozwiązania problemów synchronizacyjnych, takich jak kontrola dostępu do sekcji krytycznej, rozpoznawanie zdarzeń, zarządzanie ograniczeniami zasobów, synchronizacja producenta-konsumenta itp.

19. **Co to jest sytuacja zagłodzenia (w kontekście systemów operacyjnych)?**

    Sytuacja zagłodzenia występuje, gdy wątek lub proces nie jest w stanie zakończyć swojego działania, ponieważ jest zablokowany przez inne wątki lub procesy, które nie zwalniają wymaganych zasobów. W rezultacie wątek lub proces jest zatrzymywany na nieskończonym czasie, a system nie może kontynuować swojego działania.

20. **Co to jest zakleszczenie? Podaj przykład.**

    Zakleszczenie (deadlock) to sytuacja, w której dwa lub więcej wątków lub procesów wzajemnie blokują się nawzajem, oczekując na zasoby, które są zajęte przez inne wątki lub procesy. Przykładem może być sytuacja, w której wątek A trzyma zasób X i czeka na zasób Y, który jest zajęty przez wątek B, podczas gdy wątek B czeka na zasób X, który jest zajęty przez wątek A.

21. **Opisz jak wygląda problem jedzących filozofów?**

    Problem jedzących filozofów jest klasycznym problemem synchronizacji, w którym pięciu filozofów siedzi wokół okrągłego stołu i mają po jednym widełkowym miejscu między sobą. Na środku stołu znajduje się talerz z makaronem. Każdy filozof ma dwie czynności - jeść i myśleć. Filozofowie mogą podnosić tylko jeden widelec naraz, nie mogą rozmawiać ani współpracować. Problem polega na zaprojektowaniu strategii, która zapobiegnie zakleszczeniu i zagłodzeniu filozofów, umożliwiając im jedzenie w harmonii.

22. **Opisz co się stanie, jeśli w problemie jedzących filozofów każdy filozof zechce jeść i podniesie najpierw * prawą pałeczkę?**

    Jeśli każdy filozof zechce jeść i podniesie najpierw prawą pałeczkę, to wszyscy filozofowie będą trzymać prawą pałeczkę i czekać na podniesienie lewej pałeczki przez swojego sąsiada. To prowadzi do sytuacji zakleszczenia, ponieważ żaden z filozofów nie będzie w stanie podnieść lewej pałeczki, a jednocześnie będą blokować swoje prawe pałeczki dla innych.

23. **Opisz co się stanie, jeśli w problemie jedzących filozofów każdy filozof zechce jeść i podniesie najpierw * lewą pałeczkę?**

    Jeśli każdy filozof zechce jeść i podniesie najpierw lewą pałeczkę, to żaden z filozofów nie będzie w stanie podnieść drugiej pałeczki, ponieważ każda para pałeczek będzie zajęta. To prowadzi do sytuacji zagłodzenia, gdzie żaden z filozofów nie może rozpocząć jedzenia, chociaż mają dostępne jedzenie.

24. **Co trzeba zrobić, aby zablokować wyłączenie programu konsolowego w momencie wciśnięcia Ctrl+C?**

    Aby zablokować wyłączenie programu konsolowego w momencie wciśnięcia Ctrl+C, można zarejestrować obsługę sygnału SIGINT (przechwycenie sygnału przerwania) i zatrzymać jego domyślne działanie. W języku C można użyć funkcji `signal` lub `sigaction` do zarejestrowania obsługi sygnału SIGINT i zaimplementowania odpowiedniego kodu obsługi.

25. **Do czego można wykorzystać obsługę sygnałów?**

    Obsługa sygnałów może być wykorzystana do reagowania na różne zdarzenia systemowe lub użytkownika, takie jak przerwanie programu, otrzymanie sygnału od innego procesu, błąd odczytu/zapisu, koniec czasu oczekiwania itp. Obsługa sygnałów umożliwia programowi reagowanie na te sytuacje i podejmowanie odpowiednich działań.

26. **Na czym polega ,,problem czytelników i pisarzy''?**

    Problem czytelników i pisarzy dotyczy synchronizacji dostępu do współdzielonych danych przez procesy czytające (czytelników) i procesy zapisujące (pisarzy). W problemie tym można mieć wiele procesów czytających jednocześnie, ale tylko jeden proces piszący może mieć dostęp do danych. Wzajemne wykluczanie pisarzy zapewnia, że podczas pisania dane nie są jednocześnie odczytywane przez inne procesy.

27. **Jak rozumiesz pojęcia pamięci wirtualnej?**

    Pamięć wirtualna to technika zarządzania pamięcią, która umożliwia programom korzystanie z większej ilości pamięci, niż jest dostępne fizycznie w systemie. Wykorzystuje połączenie pamięci fizycznej komputera i pamięci dyskowej w celu tworzenia wirtualnego adresu pamięci, który jest mapowany na rzeczywiste miejsce w pamięci fizycznej lub na dysku.

28. **Do czego służy pamięć wirtualna?**

    Pamięć wirtualna służy do zapewnienia większej przestrzeni adresowej dla programów niż dostępna pamięć fizyczna w systemie. Pozwala programom na korzystanie z większych rozmiarów danych i łatwiejsze zarządzanie pamięcią. Pamięć wirtualna umożliwia również efektywne korzystanie z pamięci fizycznej poprzez wykorzystanie technik takich jak stronicowanie i wymiana stron.

29. **Jakie mechanizmy sprzętowe i programowe umożliwiają obsługę pamięci wirtualnej?**

    Obsługa pamięci wirtualnej wymaga zarówno wsparcia sprzętowego, jak i programowego. Mechanizmy sprzętowe obejmują tablice stron, które mapują adresy wirtualne na adresy fizyczne, oraz mechanizmy tłumaczenia adresów. Mechanizmy programowe obejmują algorytmy stronicowania, obsługę błędów stronicowania, zarządzanie pamięcią podręczną i wymianę stron.

30. **Co to jest stronicowanie na żądanie?**

    Stronicowanie na żądanie (demand paging) to technika zarządzania pamięcią wirtualną, w której strony pamięci są pobierane do pamięci fizycznej tylko wtedy, gdy są rzeczywiście potrzebne. Strony są ładowane do pamięci na żądanie, gdy program odwołuje się do danej strony, a nie wcześniej.

31. **Jak można zrealizować stronicowanie na żądanie?**

    Stronicowanie na żądanie można zrealizować poprzez użycie mechanizmów sprzętowych i programowych. Mechanizmy sprzętowe obejmują tablice stron, które mapują adresy wirtualne na adresy fizyczne, oraz wskaźniki stron. Mechanizmy programowe obejmują obsługę błędów stronicowania, które są generowane, gdy program odwołuje się do niezaładowanej strony, oraz mechanizmy ładowania i usuwania stron w zależności od bieżących potrzeb.

32. **Na czym polega kopiowanie przy zapisie?**

    Kopiowanie przy zapisie (copy-on-write) to technika optymalizacji używana w pamięci wirtualnej, w której współdzielone strony pamięci nie są kopiowane od razu podczas operacji zapisu. Zamiast tego, podczas operacji zapisu, tworzona jest kopia strony tylko wtedy, gdy występuje konflikt z innym procesem lub wątkiem, który chce modyfikować tę samą stronę. Dzięki temu można zaoszczędzić zasoby i czas kopiowania stron, gdy nie jest to konieczne.

33. **Co się stanie, jeśli system będzie wykonywał zbyt wiele wymagających dużo pamięci procesów? Jak się nazywa zjawisko, które wtedy się pojawi?**

    Jeśli system będzie wykonywał zbyt wiele procesów wymagających dużo pamięci, może dojść do wyczerpania dostępnej pamięci fizycznej i konieczności korzystania z pamięci wirtualnej oraz wymiany stron. W takiej sytuacji system może zacząć działać znacznie wolniej, gdyż wymiana stron wymaga przesyłania danych między pamięcią fizyczną a dyskiem twardym. Zjawisko to nazywane jest fragmentacją pamięci lub fragmentacją wirtualną.

34. **Czy kolejka nazwana FIFO (reprezentowana przez plik w systemie plików) będzie działała na zdalnym systemie plików?**

    Kolejka nazwana FIFO (First-In-First-Out), reprezentowana przez plik w systemie plików, może działać na zdalnym systemie plików pod warunkiem, że system plików na zdalnym serwerze obsługuje tę funkcjonalność. Mechanizmy kolejki FIFO muszą być obsługiwane przez zarówno lokalny jak i zdalny system plików.

35. **Kiedy może następować wiązanie adresów?**

    Wiązanie adresów (address binding) może nastąpić na różnych etapach w cyklu życia programu. Są to:
    
    - Wiązanie statyczne: Adresy są przydzielane do lokacji pamięci podczas kompilacji lub ładowania programu. Adresy te są znane przed uruchomieniem programu.
    
    - Wiązanie dynamiczne: Adresy są przydzielane do lokacji pamięci w czasie wykonania programu, gdy określone warunki są spełnione. Wiązanie dynamiczne może być realizowane przez system operacyjny lub podczas ładowania dynamicznego bibliotek.
    
    - Wiązanie czasowe: Adresy są przypisywane do lokacji pamięci podczas uruchamiania programu i pozostają niezmienne przez cały czas jego działania.

36. **Co to jest adres bezwzględny?**

    Adres bezwzględny (absolute address) to konkretne miejsce w pamięci, wskazujące na określoną komórkę pamięci. Jest to stały adres, który nie zależy od aktualnego kontekstu programu. Adres bezwzględny jest używany w kontekście wiązania statycznego, gdzie konkretne adresy są znane przed uruchomieniem programu.

37. **Co to jest adres względny?

 Co on tworzy?**

    Adres względny (relative address) jest adresem, który jest odwołaniem do danej komórki pamięci w stosunku do określonego punktu odniesienia, na przykład rejestru bazowego. Adres względny nie wskazuje bezpośrednio na konkretną komórkę pamięci, ale określa przesunięcie (offset) od punktu odniesienia. Przesunięcie to tworzy adres efektywny, który jest wynikiem dodania przesunięcia do wartości rejestru bazowego.

38. **Jaka jednostka w komputerze służy do tłumaczenia adresów logicznych na fizyczne?**

    Jednostka w komputerze, która służy do tłumaczenia adresów logicznych na fizyczne, to jednostka zarządzania pamięcią (MMU - Memory Management Unit). MMU jest odpowiedzialna za przekształcanie adresów logicznych generowanych przez programy na odpowiednie adresy fizyczne w pamięci.

39. **W jakich sytuacjach program uruchomiony w systemie operacyjnym korzysta z adresów fizycznych?**

    Program uruchomiony w systemie operacyjnym korzysta z adresów fizycznych w sytuacji, gdy korzysta z mechanizmów bezpośredniego dostępu do sprzętu (DMA - Direct Memory Access), gdzie wymagane są konkretne adresy fizyczne do transferu danych między urządzeniami a pamięcią. W większości innych przypadków programy korzystają z adresów logicznych, a tłumaczenie na adresy fizyczne jest wykonywane przez jednostkę zarządzania pamięcią (MMU).

40. **Jakie znasz dwa tryby działania procesora (w kontekście uprawnień i systemów operacyjnych)?**

    Dwa tryby działania procesora, które występują w kontekście uprawnień i systemów operacyjnych, to:
    
    - Tryb użytkownika (user mode): W trybie użytkownika programy działają z ograniczonymi uprawnieniami i nie mają bezpośredniego dostępu do ochronionych zasobów systemowych. Chroni to system operacyjny przed nieuprawnionym dostępem i zapewnia izolację między programami.
    
    - Tryb systemu (kernel mode): W trybie systemu programy mają pełne uprawnienia i dostęp do wszystkich zasobów systemowych. Tryb systemu jest zarezerwowany dla jądra systemu operacyjnego i wybranych uprzywilejowanych operacji, takich jak zarządzanie sprzętem, zarządzanie pamięcią i obsługa przerwań.

41. **Czy proces w trybie użytkownika może zażądać dostępu do dowolnego adresu pamięci?**

    Proces w trybie użytkownika nie może zażądać dostępu do dowolnego adresu pamięci. Procesy w trybie użytkownika mają ograniczone uprawnienia i dostęp tylko do swojej przestrzeni adresowej. Nie mają bezpośredniego dostępu do ochronionych obszarów pamięci systemowej ani do pamięci innych procesów.

42. **Czy proces w trybie systemu może zażądać dostępu do dowolnego adresu pamięci?**

    Proces w trybie systemu ma pełne uprawnienia i dostęp do całej pamięci systemowej. Procesy w trybie systemu mogą zażądać dostępu do dowolnego adresu pamięci, zarówno do swojej przestrzeni adresowej, jak i do pamięci innych procesów. Jednak procesy w trybie systemu powinny działać odpowiedzialnie i ostrożnie, aby nie naruszać integralności i bezpieczeństwa systemu.

43. **Co to jest stronicowanie?**

    Stronicowanie (paging) jest techniką zarządzania pamięcią w systemach operacyjnych. Polega ona na podziale pamięci fizycznej i logicznej na równe części zwane stronami. Programy działające w przestrzeni adresowej składającej się z logicznych stron nie muszą być umieszczone w pamięci fizycznej w całości. Stronicowanie umożliwia odłożenie nieaktywnych stron na dysk i przywrócenie ich do pamięci fizycznej tylko wtedy, gdy są potrzebne. Dzięki temu można efektywnie zarządzać pamięcią i obsłużyć większą liczbę procesów niż dostępna pamięć fizyczna by na to pozwalała.

44. **Co to jest segmentacja?**

    Segmentacja (segmentation) to technika zarządzania pamięcią, w której przestrzeń adresowa programu jest podzielona na segmenty o różnych rozmiarach. Każdy segment zawiera logicznie powiązane części programu, takie jak kod, dane, stos itp. Segmentacja umożliwia elastyczne przydzielanie pamięci dla programów, gdyż segmenty mogą rosnąć i zmniejszać swoje rozmiary w trakcie działania programu. Odpowiedzialność za tłumaczenie adresów logicznych na fizyczne spoczywa na jednostce zarządzania pamięcią (MMU).

45. **Do czego służy rejestr graniczny?**

    Rejestr graniczny (limit register) to rejestr w procesorze, który zawiera informację o maksymalnym dozwolonym adresie pamięci dla danego procesu lub segmentu. Rejestr graniczny służy do ochrony przed dostępem do nieuprawnionych obszarów pamięci. Przy każdej próbie dostępu do pamięci, jednostka zarządzania pamięcią sprawdza, czy adres znajduje się w zakresie określonym przez rejestr graniczny, i podejmuje odpowiednie działania, np. zgłasza błąd w przypadku naruszenia ochrony.

46. **Jaka jest różnica między tablicą statyczną a dynamiczną (w kontekście języka C)?**

    W kontekście języka C, różnica między tablicą statyczną a dynamiczną to:

    - Tablica statyczna: Tablica statyczna jest tworzona w momencie kompilacji i ma stały rozmiar, który musi być określony w czasie kompilacji. Rozmiar tablicy statycznej nie może być zmieniany w trakcie działania programu. Pamięć dla tablicy statycznej jest przydzielana podczas uruchomienia programu i zwalniana automatycznie po zakończeniu. Tablice statyczne są alokowane na stosie lub w sekcji danych statycznych.

    - Tablica dynamiczna: Tablica dynamiczna jest tworzona w czasie działania programu (w czasie wykonania) i jej rozmiar może być zmieniany w trakcie działania programu. Alokacja pamięci dla tablicy dynamicznej odbywa się za pomocą funkcji takich jak `malloc()` lub `calloc()`, a zwalnianie pamięci wykonuje się przy użyciu funkcji `free()`. Tablice dynamiczne są alokowane na stercie (heap).

47. **Do czego służy program make?**

    Program make jest narzędziem służącym do automatyzacji procesu kompilacji programów. Przy użyciu pliku konfiguracyjnego (Makefile), który zawiera informacje o zależnościach i regułach budowy programu, program make automatycznie sprawdza, które pliki źródłowe zostały zmienione i generuje odpowiednie polecenia kompilacji i linkowania. Dzięki temu, program make umożliwia efektywne budowanie programów i zapewnienie spójności w zależnościach między plikami źródłowymi.

48. **Jak się ma program do procesu?**

    Program to zestaw instrukcji i danych, które mogą być wykonywane przez procesor. Proces to działający egzemplarz programu. Program staje się procesem, gdy zostanie załadowany i uruchomiony przez system operacyjny. Proces obejmuje dodatkowo zasoby systemowe, takie jak przestrzeń adresowa, stos, rejestry, deskryptory plików itp. Program może mieć wiele procesów, które wykonują go niezależnie od siebie.

49. **Co się składa na proces?**

    Proces składa się z następujących elementów:

    - Przestrzeń adresowa: Każdy proces ma swoją własną przestrzeń adresową, która zawiera instrukcje programu, dane, stos i stertę. Przestrzeń adresowa określa zakres dostępnych adresów, które proces może używać.

    - Stan procesu: Stan procesu obejmuje informacje o aktualnym stanie wykonania procesu, takie jak licznik rozkazów, rejestry, wskaźnik stosu, flagi, priorytet itp.

    - Zasoby systemowe: Proces ma przydzielone zasoby systemowe, takie jak deskryptory plików, pamięć, czas procesora, urządzenia wejścia-wyjścia, identyfikatory użytkowników itp.

    - Informacje o zarządzaniu procesem: Informacje o zarządzaniu procesem obejmują identyfikator procesu (PID), identyfikator rodzica, grupę procesów, uprawnienia, informacje o kontekście itp.

    - Stos: Stos procesu jest używany do przechowywania lokalnych zmiennych, argumentów funkcji, adresów powrotu itp.

    - Sterta: Sterta (heap) jest obszarem pamięci dynamicznie przydzielanym podczas działania programu. Służy do przechowywania danych alokowanych dynamicznie, takich jak struktury danych, tablice dynamiczne itp.

50. **Przez jakie stany przechodzi proces?**

    Proces przechodzi przez różne stany podczas swojego cyklu życia. Typowe stany procesu to:

    - Gotowy (Ready): Proces jest gotowy do wykonania, czeka na przydział czasu procesora.

    - Wykonywany (Running): Proces jest obecnie wykonywany przez procesor.

    - Oczekujący (Waiting): Proces czeka na zdarzenie lub zasób, na przykład oczekuje na dane z urządzenia wejścia-wyjścia lub zakończenie operacji dyskowej.

    - Zawieszony (Suspended): Proces został zawieszony, tzn. tymczasowo zatrzymany, zwykle przez decyzję użytkownika lub systemu.

    - Zakończony (Terminated): Proces zakończył swoje wykonanie i został usunięty z listy procesów aktywnych.

51. **Co może zawierać blok kontrolny procesu?**

    Blok kontrolny procesu (PCB - Process Control Block) zawiera informacje związane z danym procesem. Może zawierać m.in.:

    - Identyfikator procesu (PID) - unikalny identyfikator przypisany do procesu.
    - Stan procesu - informacja o aktualnym stanie procesu (gotowy, wykonywany, oczekujący itp.).
    - Stan rejestru - wartości rejestrów procesora związane z danym procesem.
    - Licznik rozkazów - wskazuje na adres rozkazu, który będzie następny wykonany przez procesor dla danego procesu.
    - Informacje o zarządzaniu pamięcią - takie jak przestrzeń adresowa, informacje o stronach lub segmentach.
    - Informacje o zarządzaniu zasobami - takie jak informacje o otwartych plikach, deskryptory, ustawienia ochrony itp.
    - Priorytet procesu - wartość określająca priorytet wykonania procesu w stosunku do innych procesów.
    - Kolejka procesów - informacje o przynależności do kolejek planisty, w których proces może się znajdować.
    - Informacje o kontekście - informacje o kontekście procesu, które są potrzebne do przełączania kontekstu między procesami.

52. **Jak się ma termin ,,obliczenia równoległe'' do ,,obliczeń współbieżnych''?**

    Termin "obliczenia równoległe" odnosi się do sytuacji, w której zadania są wykonywane jednocześnie przez wiele procesorów lub rdzeni procesorów. Obliczenia równoległe polegają na podzieleniu zadania na mniejsze części, które mogą być wykonywane równolegle, z wykorzystaniem równoległości sprzętowej.

    Z kolei termin "obliczenia współbieżne" odnosi się do sytuacji, w której zadania są wykonywane równocześnie, ale niekoniecznie w tym samym czasie na wielu procesorach lub rdzeniach. Obliczenia współbieżne dotyczą równoczesnego wykonywania wielu zadań, często w ramach jednego procesora, z wykorzystaniem mechanizmów takich jak wątki czy procesy.

    Oba terminy dotyczą efektywnego wykorzystania zasobów obliczeniowych w celu przyspieszenia przetwarzania i zwiększenia wydajności.

53. **Na czym polega przełączanie kontekstu?**

    Przełączanie kontekstu (context switching) to proces zmiany kontekstu wykonania między różnymi procesami lub wątkami w systemie operacyjnym. Polega na zapisaniu aktualnego stanu procesu (takiego jak zawartość rejestrów, licznik rozkazów itp.) i przywróceniu stanu innego procesu lub wątku, który ma być wykonany.

    Przełączanie kontekstu jest niezbędne, aby system operacyjny mógł zapewnić wielozadaniowość, czyli zdolność do wykonywania wielu procesów lub wątków "jednocześnie" na jednym procesorze. Przełączanie kontekstu jest wykonywane przez planistę (scheduler), który decyduje, który proces lub wątek powinien być wykonany w danym czasie.

    Proces przełączania kontekstu może być kosztowny pod względem czasu wykonania, dlatego optymalizacje w tej dziedzinie są istotne dla wydajności systemu.

54. **Czym zajmuje się planista (scheduler)?**

    Planista (scheduler) jest odpowiedzialny za zarządzanie kolejnością i przydziałem zasobów procesom lub wątkom w systemie operacyjnym. Jego głównym zadaniem jest decydowanie, który proces lub wątek powinien być wykonany w danym czasie i przez jaki okres czasu. Planista może stosować różne algorytmy planowania, takie jak FCFS (First-Come, First-Served), SJF (Shortest Job Next), Round Robin, itp., aby efektywnie zarządzać zasobami systemu i optymalizować wydajność.

55. **Co to znaczy ,,wyekspediowanie procesu'' (process dispatch)?**

    Wyekspediowanie procesu (process dispatch) odnosi się do faktycznego uruchomienia procesu przez system operacyjny. Kiedy proces zostaje wybrany przez planistę do wykonania, następuje wyekspediowanie, czyli przekazanie sterowania procesorowi w celu wykonania instrukcji zawartych w procesie. Proces może być uruchomiony od zera lub wznowiony z poprzedniego stanu, w zależności od jego stanu i kontekstu.

56. **Jaki mechanizm sprzętowy pozwala na przełączanie kontekstu?**

    Mechanizm sprzętowy, który pozwala na przełączanie kontekstu, to przerwanie (interrupt). Przerwanie jest sygnałem generowanym przez sprzęt lub oprogramowanie, informującym system operacyjny o wystąpieniu pewnego zdarzenia, które wymaga natychmiastowej uwagi. Przerwanie powoduje przekazanie kontroli do odpowiedniej obsługi przerwania (interrupt handler), która może zająć się zdarzeniem, zapisać aktualny stan procesu i przełączyć kontekst na inny proces.

57. **Co to znaczy ,,proces ograniczony przez wejście-wyjście''?**

    Proces ograniczony przez wejście-wyjście (I/O-bound process) to proces, którego działanie jest ograniczone przez operacje wejścia-wyjścia, takie jak odczyt lub zapis danych do urządzeń zewnętrznych, dysków twardych, sieci itp. Takie procesy spędzają większość czasu oczekując na zakończenie operacji I/O i nie są intensywnie obciążające dla procesora. Przykłady procesów ograniczonych przez wejście-wyjście to programy komunikacyjne, przeglądarki internetowe, itp.

58. **Co to znaczy ,,proces ograniczony przez procesor''?**

    Proces ograniczony przez procesor (CPU-bound process) to proces, którego działanie jest ograniczone przez moc obliczeniową procesora. Takie procesy wymagają dużej ilości czasu procesora do wykonania intensywnych obliczeń lub algorytmów. Procesy tego typu często zużywają dużą ilość zasobów procesora i mogą wpływać na wydajność systemu, szczególnie gdy są uruchamiane na jednym procesorze w środowisku wieloprocesorowym.

59. **Jakie są etapy prowadzące od kodu źródłowego w C do programu wykonywalnego?**

    Etapy prowadzące od kodu źródłowego w języku C do programu wykonywalnego to:

    1. Kompilacja: Kod źródłowy jest przekształcany przez kompilator w kod w postaci języka assemblera, zwany kodem obiektowym. Ten etap sprawdza składnię i semantykę kodu oraz tworzy pliki obiektowe (.o).

    2. Łączenie (linkowanie): W tym etapie pliki obiektowe i biblioteki są łączone przez łącznik (linker), tworząc pojedynczy plik wykonywalny. Linker rozwiązuje odwołania do symboli i adresów funkcji i zewnętrznych zasobów, takich jak funkcje biblioteczne.

    3. Generowanie kodu maszynowego: Na tym etapie plik wykonywalny jest generowany na podstawie połączonych plików obiektowych i bibliotek. Kod maszynowy jest tworzony, a program jest gotowy do wykonania.

60. **Co się dzieje w momencie linkowania (w kontekście kompilacji programu do kodu wykonywalnego)?**

    W momencie linkowania, w kontekście kompilacji programu do kodu wykonywalnego, pliki obiektowe i biblioteki są łączone przez łącznik (linker), tworząc pojedynczy plik wykonywalny lub bibliotekę. W tym procesie łącznik rozwiązuje odwołania do symboli i adresów funkcji oraz łączy różne moduły programu w całość. Linker łączy również zewnętrzne zasoby, takie jak funkcje biblioteczne, do programu. W rezultacie powstaje plik wykonywalny, który może być uruchamiany w systemie operacyjnym.

61. **Co to jest zmienna powłoki i do czego może służyć?**

    Zmienna powłoki (shell variable) to nazwane miejsce przechowywania danych w powłoce systemowej. Zmienne powłoki mogą być ustawiane, odczytywane i modyfikowane przez użytkownika lub skrypty powłoki. Służą one do przechowywania informacji, takich jak ścieżki dostępu, wartości konfiguracyjnych, argumenty przekazywane do skryptów, itp. Zmienne powłoki są również używane do kontroli zachowania i działania powłoki oraz do przekazywania danych między różnymi procesami powłoki.

62. **Co to jest powłoka systemu?**

    Powłoka systemu (system shell) to interaktywny program lub interfejs użytkownika, który umożliwia użytkownikowi komunikację z systemem operacyjnym. Powłoka systemu działa jako warstwa pośrednicząca między użytkownikiem a jądrem systemu operacyjnego, umożliwiając wprowadzanie poleceń, wykonywanie programów, zarządzanie plikami i innymi zasobami systemowymi. Powłoki systemu różnią się między sobą pod względem składni i funkcji, przykładami popularnych powłok są Bash, PowerShell, zsh, czy cmd.exe.

63. **Co to jest język skryptowy?**

    Język skryptowy (scripting language) to język programowania, który został zaprojektowany do pisania skryptów, czyli sekwencji poleceń lub instrukcji, które są wykonywane w sposób interpretowany lub JIT (just-in-time). Języki skryptowe są często używane do automatyzacji zadań, manipulacji danymi, szybkiego prototypowania i programowania w środowiskach skryptowych. Przykłady popularnych języków skryptowych to Python, Perl, Ruby, JavaScript, VBScript.

64. **Z czego się składa system komputerowy?**

    System komputerowy składa się z kilku kluczowych komponentów, które współpracują w celu umożliwienia działania komputera. Główne składniki systemu komputerowego to:

    - Procesor (CPU): Jest to jednostka centralna komputera, która wykonuje instrukcje programu i wykonuje obliczenia.

    - Pamięć: Składa się z pamięci RAM (Random Access Memory), która przechowuje dane i instrukcje w trakcie działania programów, oraz pamięci masowej, takiej jak dyski twarde czy nośniki SSD, które przechowują dane na stałe.

    - Urządzenia wejścia/wyjścia: Są to urządzenia, które umożliwiają interakcję z komputerem, takie jak klawiatura, mysz, monitor, drukarka, skaner, itp.

    - System oper

acyjny: Zarządza i kontroluje działanie komputera oraz dostarcza interfejs użytkownika, zarządzanie pamięcią, plikami, urządzeniami, siecią, itp.

    - Oprogramowanie aplikacyjne: To programy i aplikacje, które są uruchamiane na komputerze w celu wykonywania różnych zadań, takich jak przeglądarki internetowe, edytory tekstowe, narzędzia graficzne, gry, itp.

65. **Co to jest system operacyjny?**

    System operacyjny (operating system) to złożony program lub zbiór programów, które zarządzają zasobami komputera i umożliwiają użytkownikom korzystanie z komputera. System operacyjny zapewnia interfejs użytkownika, zarządza pamięcią, procesami, plikami, urządzeniami wejścia/wyjścia, siecią i innymi zasobami systemowymi. Jego rolą jest kontrola i koordynacja działania wszystkich komponentów systemu komputerowego oraz zapewnienie efektywnego wykorzystania zasobów.

66. **Z jakiego powodu system operacyjny jest przydatny? Co umożliwia?**

    System operacyjny jest niezbędny dla prawidłowego funkcjonowania komputera z kilku powodów:

    - Zarządzanie zasobami: System operacyjny zarządza pamięcią, procesorami, urządzeniami wejścia/wyjścia i innymi zasobami komputera, przydzielając je i kontrolując dostęp do nich przez różne procesy i aplikacje.

    - Zapewnienie interfejsu użytkownika: System operacyjny dostarcza interfejs użytkownika, który umożliwia interakcję między użytkownikiem a komputerem. Może to być interfejs wiersza poleceń lub graficzny interfejs użytkownika (GUI), który umożliwia uruchamianie programów, zarządzanie plikami i innymi zadaniami.

    - Wykonywanie i zarządzanie procesami: System operacyjny umożliwia tworzenie, uruchamianie i zarządzanie procesami, czyli działającymi programami. Kontroluje harmonogram procesów, alokuje zasoby i zapewnia, że programy działają w sposób bezpieczny i efektywny.

    - Zarządzanie pamięcią: System operacyjny alokuje i zarządza pamięcią komputera, przydzielając miejsce dla programów i danych. Monitoruje użycie pamięci i zapobiega konfliktom między różnymi procesami.

    - Zarządzanie plikami: System operacyjny umożliwia tworzenie, odczyt, zapis i usuwanie plików na dyskach twardych i innych nośnikach danych. Zapewnia strukturę katalogów, uprawnienia dostępu i mechanizmy organizacji danych.

67. **Do czego służy gniazdo sieciowe?**

    Gniazdo sieciowe (network socket) jest interfejsem programistycznym (API), który umożliwia komunikację między aplikacjami działającymi na różnych komputerach w sieci. Gniazdo sieciowe umożliwia aplikacjom wysyłanie i odbieranie danych przez sieć, używając różnych protokołów komunikacyjnych, takich jak TCP (Transmission Control Protocol) i UDP (User Datagram Protocol).

68. **Jakie znasz 2 podstawowe rodzaje gniazd w kontekście utrzymania połączenia?**

    W kontekście utrzymania połączenia, istnieją dwa podstawowe rodzaje gniazd:

    - Gniazdo strumieniowe (stream socket): Gniazdo strumieniowe zapewnia niezawodną i zorientowaną na połączenie komunikację między dwoma punktami końcowymi w sieci. Wykorzystuje protokół TCP, który gwarantuje dostarczenie danych w odpowiedniej kolejności i bez utraty. Jest to rodzaj gniazda, który jest często używany do transmisji danych, które wymagają niezawodności, takich jak strumienie audio/wideo, przesyłanie plików, itp.

    - Gniazdo datagramowe (datagram socket): Gniazdo datagramowe zapewnia komunikację w trybie datagramowym, w którym dane są przesyłane jako niezależne jednostki (datagramy) bez gwarancji dostarczenia lub utrzymania kolejności. Wykorzystuje protokół UDP, który jest bardziej odpowiedni do szybkich i niewymagających niezawodności transmisji, takich jak transmisja strumieniowa w czasie rzeczywistym, komunikacja klient-serwer, itp.

69. **Co należy wykonać, aby program nasłuchiwał na wybranym porcie w przypadku protokołu TCP/IP?**

    Aby program nasłuchiwał na wybranym porcie w przypadku protokołu TCP/IP, należy wykonać następujące kroki:

    1. Utworzyć gniazdo sieciowe dla protokołu TCP.
    2. Powiązać gniazdo z adresem IP i numerem portu, na którym program ma nasłuchiwać.
    3. Wywołać funkcję listen() na gnieździe, aby rozpocząć nasłuchiwanie na połączenia przychodzące.
    4. W pętli akceptować przychodzące połączenia na gnieździe przy użyciu funkcji accept().
    5. Dla każdego akceptowanego połączenia, utworzyć nowe gniazdo sieciowe do komunikacji z klientem.
    6. Przetwarzać dane przychodzące od klientów przy użyciu utworzonych gniazd.

70. **Czy komenda fork tworzy proces czy też wątek?**

    Komenda fork tworzy nowy proces. Fork jest systemowym wywołaniem używanym w systemach Unix-like, które tworzy identyczną kopię bieżącego procesu, w tym kodu programu, danych, zmiennych, obszarów pamięci itp. Nowo utworzony proces, nazywany procesem potomnym, dziedziczy wiele cech od procesu macierzystego, ale ma unikalne identyfikatory i odrębne przestrzenie pamięci.
