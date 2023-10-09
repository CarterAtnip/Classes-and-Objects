/*********************
* Name: Carter Atnip
* Programming III: Data structures
* header for sphere.cpp, sets class methods and objects and sets Sphere to inherit attributes from Circle
**********************/

#ifndef CLASSES_SPHERE_H
#define CLASSES_SPHERE_H
#include "circle.h"


/*********************
* Class: Sphere
* Objects: radius (float)
* Inheritance: Child class of Circle class, inherits public attributes
* Purpose: calculating the various elements of a sphere from its radius
**********************/
class Sphere : public Circle {
public:
    Sphere(); // default constructor
    explicit Sphere(float); // overloaded constructor with one float param

    ~Sphere(); // destructor

    // Getters
    float getSurfaceArea();
    float getVolume();
};


#endif //CLASSES_SPHERE_H
