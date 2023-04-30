# Dos2unix

Dos2unix to prosta, lekka i łatwa w użyciu aplikacja do konwersji plików z formatu DOS/Windows na format Unix/Linux i odwrotnie.

## Instalacja

### Linux

#### Ubuntu, Debian lub ich pochodne

Aby zainstalować Dos2unix na systemie Ubuntu, Debian lub ich pochodnych, wykonaj następujące kroki:

[1.] Otwórz terminal.

[2.] Zaktualizuj listę dostępnych pakietów z serwerów Ubuntu, wpisując następujące polecenie i naciskając Enter:
```
sudo apt-get update
```
[3.] Zainstaluj paczkę `dos2unix`, wpisując następujące polecenie i naciskając Enter:
```
sudo apt-get install dos2unix
```
[4.] Po wpisaniu hasła i naciśnięciu klawisza Enter, system pobierze i zainstaluje paczkę `dos2unix` wraz z jej zależnościami.

[5.] Aby sprawdzić, czy paczka została poprawnie zainstalowana, wpisz następujące polecenie i naciśnij Enter:
```
dos2unix --version
```
Jeśli system zwróci numer wersji `dos2unix`, oznacza to, że paczka została poprawnie zainstalowana.
```
dos2unix 7.4.2 (2021-01-31)
```

## Opis użycia Dos2unix

Aby przekonwertować plik z formatu DOS na format Unix, należy użyć polecenia `dos2unix`:
```
dos2unix nazwa_pliku
```
Gdzie `nazwa_pliku` to nazwa pliku, który chcesz przekonwertować.

przykład:
```
dos2unix zad1.sh
```
