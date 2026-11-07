# C vježbe

Starter projekat za učenje C programskog jezika, podešen da radi kao Code::Blocks:
napišeš kod → **F9** → program se kompajlira i pokrene.

## Prečice (rade u svakom folderu)

| Prečica | Šta radi |
| --- | --- |
| **F9** | Kompajlira i pokrene aktivni `.c` fajl |
| **F8** | Samo kompajlira (build), bez pokretanja |
| **F5** | Debug — breakpoint-i, korak po korak (CodeLLDB) |
| **▶ Run** (zeleno dugme lijevo u status baru) | isto kao F9 |

Kompajler je `clang` (dolazi sa Xcode Command Line Tools), flagovi:
`-Wall -Wextra -std=c11 -g`.

## Više fajlova i podfoldera — automatski

Ne moraš ništa podešavati ni dodavati u build. Ako napišeš:

```
projekat/
  main.c                 # ima main()
  funkcije/
    funkcije.c           # nema main()  -> linka se automatski
    funkcije.h           # -> -I funkcije/ (include radi iz svakog foldera)
  utils/
    ispis.c              # nema main()  -> linka se automatski
```

F9 na `main.c` kompajlira **sva tri** `.c` fajla zajedno, bez obzira u kojim su
podfolderima.

**Granica projekta:** ide se prema gore dok u folderu postoji **tačno jedan**
`main()`. Čim folder sadrži više nezavisnih programa, tu je granica — zato
`ucenje/z1`, `ucenje/z2` i `Vjezbe3` ostaju odvojeni i ne miješaju se.

Ako je otvoren pomoćni fajl (npr. `funkcije.c` bez main-a), F9 i dalje nađe
`main.c` u istom folderu ili iznad njega.

## Iz terminala

```sh
cbuild ucenje/z1/z1.c          # sam nađe sve fajlove i kompajlira
cbuild ucenje/z1/z1.c --run    # kompajlira i pokrene
cbuild main.c --root .         # eksplicitno korijen projekta
```

`cbuild` je instaliran u `~/bin/cbuild` (univerzalna skripta, radi u bilo kojem
folderu). Lokalni `build.sh` je samo obloga oko nje, pa `make`-oliki pozivi i
VS Code taskovi rade isto.

Makefile u rootu i dalje traži `main.c`:

```sh
make        # kompajlira program
make run    # kompajlira i pokrene
make clean  # obriše izvršni fajl
```

## Struktura

```
build.sh          # obloga -> cbuild
.vscode/          # tasks.json, launch.json, c_cpp_properties.json
ucenje/z1/        # z1.c + alati.c (više fajlova)
ucenje/z2/        # main.c + sala.c + sala.h
Vjezbe3/
vjezbeParcijala/
```

## Napomena o autocomplete-u

U globalnim VS Code podešavanjima autocomplete je **namjerno isključen**
(`C_Cpp.autocomplete`, `editor.quickSuggestions`, `parameterHints`) — zbog
vježbanja za ispit bez kompajlera. Prebacivanje: **Cmd + Alt + T**.
