/*********************
* Name: Carter Atnip
* Programming III: Data structures
* determines the surface area, circumference, area, and diameter from the radius of circle/sphere
* and outputs it to console
**********************/
#include <stdlib.h>   /* srand, rand */
#include <time.h>     /* time */
#include <iostream>   /* cout, endl */
#include <string>     /* string */
#include "functions.h"



void rand_int(int min_num, int max_num, int &r_int) {
    if (min_num >= max_num) {
        r_int = 0;

    } else {
        r_int = (rand() % (max_num - min_num + 1)) + min_num;
        if(r_int % 2 == 0 && r_int*(-1) > min_num && r_int*(-1) < max_num) {r_int *= (-1);}
    }
}









int main(int argc, char** argv) {
    srand(time(NULL));
    int min;
    int max;
    int result;
    while (true) {
        min = rand() * (-1);
        max = rand();

        if (max > min) {
           rand_int(min,max,result);

            if(result < min) {
                break;
            }
        }
    }

    std::cout << min << std::endl;
    std::cout << max << std::endl;
    std::cout << "broken";
    return 0;
}