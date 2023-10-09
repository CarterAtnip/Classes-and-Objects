/*********************
* Name: Carter Atnip
* Programming III: Data structures
* logic for Sphere class
**********************/

#include "sphere.h"

/*********************
* Name: Sphere (default constructor)
* Parameters: None
* Returns: None
* if no value is passed calls setRadius function and defaults radius to 0
**********************/
Sphere::Sphere() {
    setRadius(MIN);
}

/*********************
* Name: Sphere (constructor)
* Parameters: r (float)
* Returns: None
* calls setRadius function and sets radius to the value of r
**********************/
Sphere::Sphere(float r) {
    setRadius(r);
}

// Destructor
Sphere::~Sphere() = default;

/*********************
* Name: getSurfaceArea
* Parameters: None
* Returns: float
* returns the surface area of a sphere (4PIr^2)
**********************/
float Sphere::getSurfaceArea() {
    return getArea() * 4;
}

/*********************
* Name: getVolume
* Parameters: None
* Returns: float
* returns the volume of a sphere (4/3*PIr^3)
**********************/
float Sphere::getVolume() {
    return (getSurfaceArea() * radius) / 3;
}