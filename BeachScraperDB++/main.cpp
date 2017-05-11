/*
 * main.cpp
 *
 *  Created on: 11 may. 2017
 *      Author: iMac
 */

#include "sqlite3.h"
#include "database.h"
#include <string.h>
#include <iostream>
using namespace std;

int main(){

	database DB;
	DB.openDataBase();
	cout << "Funciona" << endl;
	DB.closeDataBase();
}

