/*
 * cliente.c
 *
 *  Created on: 17 may. 2020
 *      Author: JUNMI
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cliente.h"
#include "prestamo.h"

int initCliente(eCliente *lista, int tam)
{
	int retorno = -1;
	int i;

	 if(lista!= NULL && tam>0)
	 {
		 for(i=0;i<tam;i++)
		 	{
		 		lista[i].isEmpty=1;
	        }
     }

	return retorno;
}




int altaCliente(eCliente *lista, int tam, int id)
{
	int todoOk = 0;
	int indice;
	char nombre[20];
	char apellido[20];
	int cuil;

		printf("**** Alta cliente ****\n\n");

		indice  = buscarLibre(lista, tam);

		if(indice == -1)
		{
			printf("Ya no se pueden agregar más clientes\n");
			system("pause");
		}
		else
		{
			printf("Ingrese nombre: \n");
			fflush(stdin);
			gets(nombre);

			printf("Ingrese apellido: \n");
			fflush(stdin);
			gets(nombre);

			printf("Ingrese CUIL: \n");
			scanf("%d",&cuil);

			lista[indice] = newCliente(id, nombre, apellido, cuil);

			todoOk = 1;
		}

		return todoOk;
}


int buscarLibre(eCliente *lista, int tam)
{
	int indice = -1;
	int i;

	for(i=0; i < tam; i++);
	{
		if(lista[i].isEmpty==1)
		{
			indice = i;
			break;
		}
	}

	return indice;
}

eCliente newCliente(int id, char nombre[], char apellido[], int cuil)
{
	eCliente nuevoCliente;
	nuevoCliente.id = id;
	strcpy(nuevoCliente.nombre, nombre);
	strcpy(nuevoCliente.apellido, apellido);
	nuevoCliente.cuil = cuil;
	nuevoCliente.isEmpty = 0;

	return nuevoCliente;
}



int modificarCliente (eCliente lista[], int tam)
	{
		int todoOk = 0;
		int indice;
		int idCliente;
		int opcion;
		char nombre[20];
		char apellido[20];
		int cuil;

		printf("**** Modificar cliente **** \n");
		printf("Ingrese ID del cliente que quiere modificar: \n");
		scanf("%d",&idCliente);

		indice = buscarCliente(idCliente, lista, tam);

		if(indice == -1)
		{
			printf("Ese ID no está registrado \n");
			system("pause");
		}else
		{
			printf("Elija una opción: \n");
			printf("1. Modificar nombre \n");
			printf("2. Modificar apellido \n");
			scanf("%d",&opcion);

			if(opcion==1)
			{
				printf("Ingrese nombre: \n");
				fflush(stdin);
				gets(nombre);



				todoOk = 1;
			}
			else if(opcion==2)
			{
				printf("Ingrese apellido: \n");
				fflush(stdin);
				gets(apellido);

				todoOk = 1;
			}
			else if(opcion==3)
			{
				printf("Ingrese CUIL: \n");
				scanf("%d",&cuil);
			}else
			{
				printf("Opción inválida \n");
			}

			system("pause");
		}


		return todoOk;
	}

int buscarCliente(int idCliente, eCliente lista[], int tam)
	{
		int indice = -1;

		for(int i=0;i<tam;i++)
		{
			if(lista[i].isEmpty == 0 && lista[i].id == idCliente)
			{
				indice = i;
				break;
			}
		}
		return indice;
	}

int bajaCliente(eCliente lista[], int tam)
	{
		int todoOk = 0;
		int indice;
		int id;
		char confirma;

		system("cls");
		printf("**** Baja cliente ****\n\n");

		printf("Ingrese el ID del cliente que quiere eliminar: \n");
		scanf("%d",&id);

		indice = buscarAlumno(id, lista, tam);

		if(indice == -1)
		{
			printf("Ese ID no está registrado\n");
			system("pause");
		}
		else
		{
			printf("Este ID existe. \n");
			printf("¿Confirma la baja?: \n");
			fflush(stdin);

			confirma=getche();

			if(confirma=='s')
			{
				lista[indice].isEmpty = 1;
				printf("\n Se ha eliminado al cliente \n");
				todoOk = 1;
			}
			else
			{
				printf("\n Se ha cancelado la baja\n");
			}
			system("pause");
		}

		return todoOk;

	}




