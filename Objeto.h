//
// Created by hgallegos on 18/08/2022.
//

#ifndef INC_20222_RAYTRACING_OBJETO_H
#define INC_20222_RAYTRACING_OBJETO_H
#include "vector.h"
#include "Rayo.h"
#include "Luz.h"

class Objeto {
public:
    vec3 color;
    Luz *luz;
    Objeto(){
        luz = nullptr;
        kd = ks = kr = n = idr = 0;
    }
    // kr constante de refleccion
    float kd, ks, kr, n, idr; // indice de refraccion
    void set(vec3 _color, float _kd, float _ks=0, float _n=0, float _idr=0, float _kr=0) {
        color = _color; kd = _kd; ks = _ks; n = _n; idr = _idr; kr = _kr;
    }
    virtual bool interseccion(Rayo &rayo, float &t, vec3 &normal) = 0;
    virtual vec3 getColor(Rayo &rayo) { return color; }
};

class Esfera : public Objeto {
public:
    vec3 cen;
    float radio;
    Esfera(vec3 _cen, float _radio) {
        cen = _cen;
        radio = _radio;
    }
    bool interseccion(Rayo &rayo, float &t, vec3 &normal);
    vec3 getColor(Rayo &rayo);
};

class Plano : public Objeto {
public:
    vec3 normal;
    float d;
    Plano(vec3 _normal, float _d) { normal = _normal; d=_d;}
    bool interseccion(Rayo &rayo, float &t, vec3 &normal);
};

class Cilindro: public Objeto {
public:
    vec3 pa, pb;
    float ra;
    Cilindro(vec3 _pa, vec3 _pb, float _ra) {
        pa = _pa; pb = _pb; ra = _ra;
    }
    bool interseccion(Rayo &rayo, float &t, vec3 &normal);
};
#endif //INC_20222_RAYTRACING_OBJETO_H
