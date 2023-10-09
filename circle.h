/*********************
* Name: Carter Atnip
* Programming III: Data structures
* header for circle.cpp, sets classes methods and objects if they havent been set already. Does nothing otherwise
**********************/

#ifndef CLASSES_CIRCLE_H
#define CLASSES_CIRCLE_H

#define MIN 0
#define PI 3.1415926

/*********************
* Class: Circle
* Objects: radius (float)
* Purpose: calculating the various elements of a circle from the radius
**********************/
class Circle {

public:
    Circle(); // default constructor
    explicit Circle(float); // overloaded constructor with one float param

    ~Circle(); // destructor

    // Getters
    float getRadius() const;
    float getDiameter() const;
    float getCircumference() const;
    float getArea() const;

    // Setters
    void setRadius(float);

protected:
    float radius;

};


#endif //CLASSES_CIRCLE_H
