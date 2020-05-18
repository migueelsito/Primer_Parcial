/*
 ============================================================================
 Name        : Parcial1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cliente.h"
#include "prestamo.h"
#define tam 50

int main(void)
{
	setbuf(stdout,NULL);

	int opcion;
	int idCliente = 0;
	eCliente listaClientes[tam];
	ePrestamo listaPrestamos[tam];


	initCliente(listaClientes, tam);
	initPrestamo(listaPrestamos, tam);



	while(opcion != 11)
	{
		utn_getInt("\n **** MENU ****\n"
				"1- Alta cliente \n"
				"2- Modificar cliente \n"
				"3- Baja cliente \n"
				"4- Prestamo \n"
				"5- Saldar prestamo \n"
				"6- Reanudar prestamo \n"
				"7- Imprimir clientes \n"
				"8- Imprimir prestamo \n"
				"9- Informar clientes \n"
				"10- Informar prestamo \n"
				"11- Salir \n"
				" Elija una opción: ","\nError\n",1,sizeof(int),1,11,3,&opcion);

		switch(opcion)
		{
			case 1:
				if(altaClientes(listaClientes,tam,&idCliente))
					{
						idCliente++;
					}
				break;
			case 2:
					modificarClientes(listaClientes,tam);
				break;
			case 3:
				bajaCliente(listaClientes, tam);
				break;
			case 4:
				   altaPrestamo(listaPrestamos,tam);
				break;
			case 5:

				break;
			case 6:

				break;
			case 7:

				break;
			case 8:
				break;
			case 9:

				break;
			case 10:

				break;
			case 11:
				break;
			}
		}

	return 0;
}
