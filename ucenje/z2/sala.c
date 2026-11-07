#include <stdio.h>
#include "sala.h"

void popuniSalu(int sala[][SALA_SJEDISTA], int redovi)
{

  for (int i = 0; i < redovi; i++)
  {
    for (int j = 0; j < SALA_SJEDISTA; j++)
    {
      sala[i][j] = 0;
    }
  }
}

void prikaziSalu(int sala[][SALA_SJEDISTA], int redovi)
{
  int slobodno = 0;
  printf("Ovako izgleda vaša sala trenutno.\n \n");
  for (int i = 0; i < redovi; i++)
  {

    for (int j = 0; j < SALA_SJEDISTA; j++)
    {
      if (sala[i][j] == 0)
      {
        slobodno = slobodno + 1;
        printf("|̣_|\t");
      }
      else if (sala[i][j] == 1)
      {
        printf("|X|\t");
      }
    }
    printf("\n");
  }
  if (slobodno == 0)
  {
    printf("Nemate više slobodnih mjesta.\n");
  }
  else if (slobodno > 0)
  {
    printf("Dostupno je još sjedišta.\n");
  }
}

int rezervisiMjesto(int sala[][SALA_SJEDISTA], int red, int kolona)
{
  if (sala[red][kolona] == 0)
  {
    sala[red][kolona] = 1;
    return 1;
  }
  return 0;
}

int provjeriSlobodnaMjesta(int sala[][SALA_SJEDISTA], int redovi)
{
  int slobodno = 0;
  for (int i = 0; i < redovi; i++)
  {
    for (int j = 0; j < SALA_SJEDISTA; j++)
    {
      if (sala[i][j] == 0)
        slobodno = slobodno + 1;
    }
  }
  return slobodno;
}