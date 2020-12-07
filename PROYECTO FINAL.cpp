#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

/*Objetivo:
	Crear un menú con registros de trabajadores que incluya su nombre, clave y salario.
	Debemos de dar la opcion de mostrar contatos, buscarlos, ordenarlos alfabeticamente por nombre, 
	por clave o salario, insertar nuevos registros, eliminar un registro por clave o nombre, 
	modificar la clave, el nombre o el salario de algun trabajador.
	

*/

void gotoxy(int, int);
void mostrar(trabajadores);
void concatenar_nombre();

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
	system("cls");
	
	switch(opcion){
		case 1:
			mostrar();
		break;
		case 2:
		
		break;
		case 3:
			
		break;
		case 4:
			int opc=1, cnt=0;
			while(opc == 1){
			cnt = cnt + 1;
			fflush(stdin);
			printf("Ingrese su nombre completo: \n");
			gets(datos[cnt].nombre);
			fflush(stdin);
			printf("Ingrese su primer apellido: \n");
			gets(datos[cnt].apellido_p);
			fflush(stdin);
			printf("Ingrese su segundo apellido: \n");
			gets(datos[cnt].apellido_m);
			printf("Desea ingresar otro registro?\n1.Si\n2.No \n");
			scanf("%d", &opc);
			}
		break;
		case 7:
			printf("Finalizando programa...\n");
		break;
		
	
	}
	
	system("cls");
	}while(opcion!=7);
	
}

void mostrar(trabajadores d){
	printf("\n\nNOMBRE\t\t\t\tCLAVE\t\t\t\tSALARIO\n");
	getch();
	
}
