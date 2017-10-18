/*Programa Area del Circulo
	Hernández Hernández Alonso de Jesús*/
#include<stdio.h>
#include<conio.h>
double pi=3.1415;
float r,e;
main()
	{
		printf("Dame el valor del Radio: ");
		scanf("%f", &r);
		e=pi*r*r/2;
		printf("El area del circulo es: %.2f",e);
			getch();
	}

