#ifndef SALA_H
#define SALA_H

#define SALA_REDOVI 3
#define SALA_SJEDISTA 3

void popuniSalu(int sala[][SALA_SJEDISTA],int redovi);

void prikaziSalu(int sala[][SALA_SJEDISTA], int redovi);

int provjeriSlobodnaMjesta(int sala[][SALA_SJEDISTA], int redovi);


 int rezervisiMjesto(int sala[][SALA_SJEDISTA],int red, int kolona);

#endif