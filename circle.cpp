/*********************
* Name: Carter Atnip
* Programming III: Data structures
* logic for Circle class
**********************/

#include "circle.h"

/*********************
* Name: Circle (default Constructor)
* Parameters: None
* Returns: None
* If an instance of this class is created w/o setting radius, radius defaults to 0
**********************/
Circle::Circle() {
    setRadius(MIN);
}

/*********************
* Name: Circle (Constructor)
* Parameters: float
* Returns: None
* sets radius object to value passed
**********************/
Circle::Circle(float radius) {
    setRadius(radius);
}

// default destructor
Circle::~Circle() = default;

// Getters

/*********************
* Name: getRadius
* Parameters: None
* Returns: float
* returns the value of the object radius
**********************/
float Circle::getRadius() const {
    return radius;
}

/*********************
* Name: getDiameter
* Parameters: None
* Returns: float
* returns the diameter of a circle from its radius (2 * r)
**********************/
float Circle::getDiameter() const {
    return radius * 2;
}

/*********************
* Name: getCircumference
* Parameters: None
* Returns: float
* returns the circumference of a circle from its radius (2PI * r)
**********************/
float Circle::getCircumference() const {
    return 2 * PI * radius;
}

/*********************
* Name: getArea
* Parameters: None
* Returns: float
* returns the area of a circle from its radius (r^2 * PI)
**********************/
float Circle::getArea() const {
    return radius * radius * PI;
}

// Setters

/*********************
* Name: setRadius
* Parameters: r (float)
* Returns: None
* Sets radius to the value of r and ensures it is a positive number
**********************/
void Circle::setRadius(float r) {
    if (r > MIN) {
        radius = r;
    } else {
        radius = MIN;
    }
}