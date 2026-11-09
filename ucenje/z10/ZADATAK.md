# z10 — Matrica 3 × 4 (zbir redova)

Korisnik unese matricu cijelih brojeva dimenzija 3 × 4 (`#define R 3`, `#define K 4`).

Program:
1. ispiše matricu
2. ispiše zbir svakog reda
3. ispiše koji red ima najveći zbir (broj reda kako ga korisnik broji, od 1)

Funkcije (svaka jedan posao):
- `unos`: učitava matricu
- `ispis`: ispisuje matricu
- `zbirReda`: vraća zbir jednog reda
- funkcija koja vraća red sa najvećim zbirom (koristi `zbirReda`)

Pravila:
- matrica se prosljeđuje kao `int m[][K]`
- funkcije su u posebnim fajlovima (`fun.h` / `fun.c`), a `main` je u `main.c`
