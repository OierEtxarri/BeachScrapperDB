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
	char* tamanioOlas;
	char *periodoOlas;
public:
	Oceano();
	Oceano(const Oceano &o);
	Oceano(char *c, char *ta, char *temp, char *vv, char *dv, char *to, char *po);
	char *getCodigo();
	char *getTiempoActual();
	char *getTemperatura();
	char *getVelocidadViento();
	char *getDieccionViento();
	char *getTamanioOlas();
	char *getPeriodoOlas();
	void setCodigo(char *c);
	void setTiempoActual(char *ta);
	void setTemperatura(char *temp);
	void setVelocidadViento(char *vv);
	void setDireccionViento(char *dv);
	void setTamanioOlas(char *to);
	void setPeriodoOlas(char *po);
	virtual ~Oceano();
};

#endif /* OCEANO_H_ */
