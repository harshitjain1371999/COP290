#ifndef CAR_H
#define CAR_H

#include "Tuple.h"
#include "Colors.h"
#include "graphics.h"
#include <GLFW/glfw3.h>
#include "Vehicle.h"
using namespace std;

class Car
{
public:
    static float length;
    static float width;
    static Tuple acceleration;
    static float maxSpeed;

    Tuple position;
    Tuple velocity;
    int lane;
    int n_lanes;
    vector<int> lane_index;


    Tuple color;
    float dstToLight = 1.5;

    Car();
    Car(Tuple pos);

    void draw();
    void print();
};

#endif