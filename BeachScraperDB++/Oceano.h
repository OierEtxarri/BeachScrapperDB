/*
 * Oceano.h
 *
 *  Created on: 14 may. 2017
 *      Author: leyre
 */

#ifndef OCEANO_H_
#define OCEANO_H_
#include <string.h>
#include <iostream>
#include "playa.h"
using namespace std;

class Oceano {
	friend istream& operator >> (istream &entrada, Oceano &o);
private:
	char *codigo; //codigo de la playa(herencia)
	char *tiempoActual;
	char *temperatura;
	char *velocidadViento;
	char *direccionViento;
	char *tamañoOlas;
	char *periodoOlas;
public:
	Oceano();
	Oceano(const Playa &p);
	Oceano(char *c, char *ta, char *temp, char *vv, char *dv, char *to, char *po);
	char getCodigo();
	char getTiempoActual();
	char getemperatura();
	char getVelocidadViento();
	char getDieccionViento();
	char getTamañoOlas();
	char PeriodoOlas();
	void setCodigo(char *c);
	void setTiempoActual(char *ta);
	void setTemperatura(char *temp);
	void setVelocidadViento(char *vv);
	void setDireccionViento(char *dv);
	void setTamañoOlas(char *to);
	void setPeriodoOlas(char *po);
	virtual ~Oceano();
};

#endif /* OCEANO_H_ */
