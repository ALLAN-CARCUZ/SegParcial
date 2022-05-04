// mysql_c++.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Alumno.h"
using namespace std;

int main(){
    Alumno c = Alumno();
    c.leer();
    system("pause");
    return 0;
}

