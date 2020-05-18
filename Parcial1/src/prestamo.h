/*
 * prestamo.h
 *
 *  Created on: 17 may. 2020
 *      Author: JUNMI
 */

#ifndef PRESTAMO_H_
#define PRESTAMO_H_
#include <string.h>
#include "cliente.h"

typedef struct
{
	int idCliente;
	int importe;
	int cantidadCuotas;
	int idPrestamo;
	int isEmpty;
}ePrestamo;


int initPrestamo(ePrestamo *lista, int cantidad);
altaPrestamo(listaPrestamos,tam);

int altaPrestamo(ePrestamo *lista, int tam, int idP, int idC);




#endif /* PRESTAMO_H_ */
