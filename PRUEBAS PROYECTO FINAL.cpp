#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

struct trabajadores
{
	int claves;
	float salarios;
	char nombre[20];
	char apellido_p[20];
	char apellido_m[20];
};

struct trabajadores datos[10];

main(){
	setlocale(LC_ALL,"");
	int opcion;
	do{
	printf("PROYECTO FINAL \n");		//menu de opciones
	printf("Elija una opción: \n");
	printf("1. Mostrar todos los contactos \n");
	printf("2. Buscar registro \n");
	printf("3. Orden de registros \n");
	printf("4. Ingresar nuevos registros \n");
	printf("5. Eliminar registro \n");
	printf("6. Modificar clave, nombre o salario \n");
	printf("7. Salir del programa \n");
	scanf("%d", &opcion);
	while((opcion<1) or (opcion>7)){
		printf("Opción incorrecta, intente de nuevo...\n");
		scanf("&d",&opcion);
	}
	
	switch(opcion){
		case 1:
		
		break;
		case 2:
		
		break;
		case 4:
			
		break;
		case 5:
		
		break;
		case 6:
			
		break;
		case 7:
			printf("Saliendo del programa... \n");
		break;
	}
	
	system("cls");
	}while(opcion!=7);

	
}
