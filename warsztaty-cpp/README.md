# Warsztaty C++
## Po zajęciach 1 lutego 2020r.
* Zadania do rozwiązania [tutaj](https://www.dropbox.com/s/w0sxn0xt58m79wt/Zadania-2020-02-01.pdf?dl=0)
* Kod:
    * [smile.cpp](src/smile.cpp)
    * [white_square.cpp](src/white_square.cpp)
    * [black_square.cpp](src/black_square.cpp)
    * [squares.cpp](src/squares.cpp)
* Kolejny termin do ustalenia

## Przygotowanie

1. Jeżeli zamierzasz korzystać z laptopa w pracowni,
   przyjdź 10 minut wcześniej, aby upewnić się że na wybranym
   laptopie wszystko działa.
2. Jeżeli zamierzasz korzystać z własnego laptopa z systemem Windows:
    * zainstaluj sensowny edytor tekstu; polecam [Visual Studio Code](https://code.visualstudio.com/)
    * zainstaluj [VLC](https://www.videolan.org/vlc/index.pl.html)
    * zainstaluj Ubuntu 18.04 używając
      [Windows Subsystem for Linux](https://docs.microsoft.com/en-us/windows/wsl/install-win10)
    * wykonaj instrukcje z punktu poniżej
3. Jeżeli zamierzasz korzystać z własnego laptopa
   z systemem Linux (jako główny system, dual-boot albo przez
   Windows Subsystem for Linux):
    * zainstaluj kompilator:
        ```
        sudo apt install clang
        ```
    * zainstaluj `imagemagick` i `ffmpeg`; w Ubuntu można zrobić
      to przy użyciu:
        ```
        sudo apt update
        sudo apt install imagemagick ffmpeg
        ```
    * zainstaluj sensowny edytor tekstu; polecam [Visual Studio Code](https://code.visualstudio.com/)
4. Jeżeli zamierzasz korzystać z własnego laptopa z systemem macOS
    * zainstaluj kompilator:
      ```
      xcode-select --install
      ```
    * zainstaluj sensowny edytor tekstu; polecam [Visual Studio Code](https://code.visualstudio.com/)
    * zainstaluj [Homebrew](https://brew.sh/index_pl)
    * używając Homebrew, zainstaluj `imagemagick`, `ffmpeg` i `vlc`:
      ```
      brew install imagemagick ffmpeg vlc
      ```