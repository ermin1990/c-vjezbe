# C vježbe

Starter projekat za učenje C programskog jezika.

## Kako pokrenuti

Iz terminala, u ovom folderu:

```sh
make        # kompajlira program
make run    # kompajlira i pokrene
make clean  # obriše izvršni fajl
```

Ili ručno bez Makefile-a:

```sh
clang -Wall -Wextra -std=c11 main.c -o program
./program
```

## Iz VS Code

- **Cmd + Shift + B** — build (kompajlira)
- **Ctrl + F5** — pokreni
- Panel **Run and Debug** → "Debug (lldb)" za debugovanje korak po korak

## Preporučeni VS Code dodaci

- **C/C++** (Microsoft) — intellisense, debug
- **CodeLLDB** (Vadim Chugunov) — LLDB debugger na macOS-u

## Struktura

- `main.c` — tvoj kod
- `Makefile` — recept za kompajliranje
- `.vscode/` — podešavanja editora
