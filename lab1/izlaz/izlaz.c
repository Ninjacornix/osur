#include <stdio.h>

#include "izlaz.h"
#include "datoteka/datoteka.h"
#include "../postavke.h"

int spremi(char *rezultat, size_t velicina, int kamo)
{
	int status = 0;

	if ((kamo & ZASTAVICA(SPREMI_U_DATOTEKU)))
		status = spremi_u_datoteku(rezultat, velicina);
	
	if ((kamo & ZASTAVICA(ISPISI_NA_ZASLON)))
		printf("Projekt %s (autor %s)\n", PROJEKT, AUTOR);
		printf("Rezultat:\n%.*s", (int) velicina, rezultat);
		status = velicina;
		
	return status;
}