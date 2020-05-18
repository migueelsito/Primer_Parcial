/*
 * prestamo.c
 *
 *  Created on: 17 may. 2020
 *      Author: JUNMI
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cliente.h"
#include "prestamo.h"

int initPrestamo(ePrestamo *lista, int tam)
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


int altaPrestamo(ePrestamo *lista, int tam, int idP, int idC)
{
	int todoOk = 0;
	int indice;
	int importe;
	int cantidadCuotas;

		printf("**** Alta prestamo ****\n\n");

		indice  = buscarLibre(lista, tam);

		if(indice == -1)
		{
			printf("Ya no se pueden agregar más prestamos\n");
			system("pause");
		}
		else
		{
			printf("Ingrese ID del cliente: \n");


			printf("Ingrese importe: \n");
			scanf("%d",&importe);

			printf("Ingrese cantidad de cuotas: \n");
			scanf("%d",&cantidadCuotas);

			todoOk = 1;
		}

		return todoOk;
}
