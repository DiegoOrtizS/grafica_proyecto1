//
// Created by hgallegos on 24/08/2022.
//

#ifndef INC_20222_RAYTRACING_MUNDO_H
#define INC_20222_RAYTRACING_MUNDO_H

#include <vector>
#include "Objeto.h"
#include "Luz.h"
#include "Camara.h"

using namespace std;
class Mundo {
public:
    vector<Objeto*> objetos;
    vector<Luz*> luces;
    vector<Esfera*> esferas;
    Camara camara;

    void Escenario1();
    void Escenario2();
    void Escenario3();
    void Escenario4();
};
#endif //INC_20222_RAYTRACING_MUNDO_H
