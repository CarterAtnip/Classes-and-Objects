/*********************
* Name: Carter Atnip
* Programming III: Data structures
* logic for displaySphere and displayBox functions
**********************/

#include "functions.h"


/*********************
* Name: displayCircle
* Parameters: myCircle (Circle ptr)
* Returns: None
* Prints the circle's radius, diameter, circumference and area to console
**********************/
void displayCircle(Circle* myCircle) {

    std::cout << "Circle Dimensions" << std::endl;
    std::cout << "Radius: " << myCircle -> getRadius() << std::endl;
    std::cout << "Diameter: " << myCircle -> getDiameter() << std::endl;
    std::cout << "Circumference: " << myCircle -> getCircumference() << std::endl;
    std::cout << "Area: " << myCircle -> getArea() << std::endl;
    std::cout << std::endl;

}

/*********************
* Name: displaySphere
* Parameters: mySphere (Sphere ptr)
* Returns: None
* Prints the sphere's radius, diameter, circumference, surface area, and volume to console
**********************/
void displaySphere(Sphere* mySphere) {

    std::cout << "Sphere Dimensions" << std::endl;
    std::cout << "Radius: " << mySphere -> getRadius() << std::endl;
    std::cout << "Diameter: " << mySphere -> getDiameter() << std::endl;
    std::cout << "Circumference: " << mySphere -> getCircumference() << std::endl;
    std::cout << "Surface Area: " << mySphere -> getSurfaceArea() << std::endl;
    std::cout << "Volume: " << mySphere -> getVolume() << std::endl;
    std::cout << std::endl;

}