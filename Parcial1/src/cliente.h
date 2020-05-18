/*
 * cliente.h
 *
 *  Created on: 17 may. 2020
 *      Author: JUNMI
 */

#ifndef CLIENTE_H_
#define CLIENTE_H_
#include <string.h>
#include "cliente.h"

typedef struct
{
	char nombre[20];
	char apellido[20];
	int cuil;
	int id;
	int isEmpty;
}eCliente;

//---------------------------

int initCliente(eCliente *lista, int cantidad);

int altaCliente(eCliente *lista, int tam, int id);
int buscarLibre(eCliente *lista, int tam);
eCliente newCliente(int id, char nombre[], char apellido[], int cuil);

int modificarCliente (eCliente lista[], int tam);
int buscarCliente(int idCliente, eCliente lista[], int tam);

int bajaCliente(eCliente lista[], int tam);





#endif /* CLIENTE_H_ */
