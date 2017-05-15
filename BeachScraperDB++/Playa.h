/*
 * Playa.h
 *
 *  Created on: 14 may. 2017
 *      Author: leyre
 *
 */

#ifndef PLAYA_H_
#define PLAYA_H_
#include <string.h>
#include <iostream>
using namespace std;
class Playa {
	friend istream& operator>>(istream &entrada, Playa &p);
private:
	char *codigo;
	char *nombre;
	char *localizacion;
	char *provincia;
	char *pais;
	char *coordenadas;
public:
	Playa();
	Playa(const Playa &p);
	Playa(char *c, char *n, char *l, char *pro, char *pa, char *coor);
	char *getCodigo();
	char *getNombre();
	char *getLocalizacion();
	char *getProvincia();
	char *getPais();
	char *getCoordenadas();
	void setCodigo(char *c);
	void setNombre(char *n);
	void setLocalizacion(char *l);
	void setProvincia(char *pro);
	void setPais(char *pa);
	void setCoordenadas(char *coor);
	virtual ~Playa();
};

#endif /* PLAYA_H_ */
