/*
Aufgabe		primzahl.c
Autor		Florian Bopp
Datum		

Kurzbeschreibung: Nachbereitung zu Vorlesung 6.

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
//functions
void primzahl(int n) {

	for (int i = 2; i <= n; i++)
	{
		for (int j = 2; j <= n; j ++)
		{
			if (i == j && )
			{
				printf("%d\n", j);
			}
		}
	}
}


// Main function
int main(void) {
	int n;

	printf("Bitte eine Zahl eingeben: ");
	scanf("%d", &n);
	printf("\n");
	primzahl(n);

	return 0;
}