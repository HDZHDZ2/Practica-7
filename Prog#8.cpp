#include<stdio.h>
#include<conio.h>
float a,b,c;
main()
{
	printf("Dame el primer numero: ");
	scanf("%f",&a);
	printf("Dame el segundo numero: ");
	scanf("%f",&b);
	printf("Dame el tercer numero: ");
	scanf("%f",&c);
	
	float R=a*b*c/3;
	printf("El promedio es: %.2f",R);
	getch();
}
