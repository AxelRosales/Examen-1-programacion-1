#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char nombre[20], apellido[20], cedula[15], opcion;
	int tipomr=0, vidrio=1, papelocarton=2, plastico=3, materialorganico=4, cantidadvidrio=0, cantidadpapelcarton=0, cantidadplastico=0, cantidadmaterialorganico=0;
	int cantvidrio=0, cantpapelcarton=0, cantplastico=0, cantmaterialor=0, opcion2=0,puntaje=0, canjear=0, si=1, no=2, itemdolar=1, itemdescuento=2, itemsorteo=3, item=0;
	int cantitemdolar=0, cantitemdescuento=0, cantitemsorteo=0;
	
	printf("************ Bienvenido al sistema de gestion de reciclaje ************");
	printf("\n");
	printf("Ingrese su nombre: ");
	scanf("%s", &nombre);
	printf("Ingrese su apellido: ");
	scanf("%s", &apellido);
	printf("Ingrese su cedula: ");
	scanf("%s", &cedula);
	do{
		printf("\n Elija el tipo de material reciclado: ");
	    printf("\n 1- Vidrio \n 2- Papel o carton \n 3- Plastico \n 4- Material Organico \n: ");
	    scanf("%i", &tipomr);
	    
		if (tipomr==1) {
		printf("Ingrese la cantidad de Vidrio reciclado: ");
		scanf("%i", &cantidadvidrio);
		puntaje=cantidadvidrio+puntaje;
		cantvidrio=cantidadvidrio+cantvidrio;
		
    	}else if (tipomr==2) {
		printf("Ingrese la cantidad de Papel o carton reciclado: ");
		scanf("%i", &cantidadpapelcarton);
		puntaje=cantidadpapelcarton+puntaje;
		cantpapelcarton=cantpapelcarton+cantidadpapelcarton;
		
    	}else if (tipomr==3) {
		printf("Ingrese la cantidad de Plastico reciclado: ");
		scanf("%i", &cantidadplastico);
		puntaje=cantidadplastico+puntaje;
		cantplastico=cantplastico+cantidadplastico;
		
    	}else if (tipomr==4) {
		printf("Ingrese la cantidad de Material Organico reciclado: ");
		scanf("%i", &cantidadmaterialorganico);
		puntaje=cantidadmaterialorganico+puntaje;
		cantmaterialor=cantmaterialor+cantidadmaterialorganico;
		}
		printf("\n");
    	printf("\nSu puntaje es %i:", puntaje);
		printf("\n Desea Registrar otro material reciclado?, s/n:");
		scanf(" %c", &opcion);
   	}while (opcion=='s');
	
	printf("\n");
	printf("\nSu puntaje es %i:", puntaje);
	printf("\n Desea canjear sus puntos por algun item?");
	printf("\n 1- Si \n 2- No \n");
	scanf("%i", &canjear);
	if (canjear==1) {
	
		do{
			printf("\n**** Items (*Cada item le rebajara un punto*) ****");
			printf("\n 1- Un Dolar \n 2- Un descuento de Un Dolar en las tiendas seleccionadas en nuestra pagina web \n 3- Un punto para tener mas posibilidades en nuestros sorteos \n");
			scanf("%i", &item);
			if (item==1) {
				printf("\n *Canjeaste el item de Un dolar*");
				puntaje=puntaje-1;
				cantitemdolar=cantitemdolar+1;
				
			}else if (item==2) {
				printf("\n *Canjeaste el item de Un descuento de Un dolar en nuestras tiendas seleccionadas*");
				puntaje=puntaje-1;
				cantitemdescuento=cantitemdescuento+1;
				
			}else if (item==3) {
				printf("\n *Canjeaste el item de Un punto para mas posibilidades en nuestros sorteos*");
				puntaje=puntaje-1;
				cantitemsorteo=cantitemsorteo+1;
			}
			printf("\n Desea canjear otro item?:");
			printf("\n 1- Si \n 2- No \n");
			scanf("%i", &opcion2);
		}while (opcion2==1);
 	}
	system("cls");
	printf("\n **** Estadisticas sobre del usuario ****");
	printf("\n Nombre del usuario %s:", nombre);
	printf("\n Apellido del usuario %s:", apellido);
	printf("\n Cedula del usuario %s:", cedula);
	printf("\n Cantidad de vidrio reciclado %i:", cantvidrio);
	printf("\n Cantidad de Papel o carton reciclado %i:", cantpapelcarton);
	printf("\n Cantidad de Plastico reciclado %i:", cantplastico);
	printf("\n Cantidad de Material organico reciclado %i:", cantmaterialor);
	printf("\n Cuantos items de Un dolar canjeados %i:", cantitemdolar);
	printf("\n Cuantos items de Un descuento de Un dolar en nuestras tiendas seleccionadas %i:", cantitemdescuento);
	printf("\n Cuantos items de Un punto para tener mas posibilidades en nuestros sorteos %i:", cantitemsorteo);
	printf("\n Cantidad de puntos restantes del usuario %i:", puntaje);
	printf("************ Muchas gracias por usar este sistema, que tenga un buen dia ************");
	return 0;
}
