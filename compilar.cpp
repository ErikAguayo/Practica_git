#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main (){


struct personaje
{
char nombre[20];
char tipo[20];
char fuerza[20];
char salud[20];
} per[100];


	int i,n,mayor = 0,pos;
	

printf("Digite los datos de los personajes ");

for(i=0;i<5;i++)
{


fflush(stdin);
printf("%i. Digite su nombre: ",i+1);
gets(per[i].nombre);

fflush(stdin);
printf("%i. Digite su tipo: ",i+1);
gets(per[i].tipo);

fflush(stdin);
printf("%i. Digite su fuerza: ",i+1);
scanf("%i",&per[i].fuerza);

fflush(stdin);
printf("%i. Digite su salud: ",i+1);
scanf("%i",&per[i].salud);
printf("\n");
printf("\n ************************************** \n");
}

	

return 0;
}

