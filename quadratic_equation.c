#include <math.h>
#include <stdint.h>
#include "quadratic_equation.h"

status_quadratic_equation_t quadratic_equation_solver(const double_t a,const double_t b,const double_t c, double_t* const answer1, double_t* const answer2){
    if (a == 0 && b == 0 && c ==0){
        return INFINITY_SOLUTIONS;
    }else if (a == 0 && b == 0 && c !=0) 
        return ZERO_SOLUTION;
    else if(a == 0 && b!=0){
         *answer1 = -c / b;
         return ONE_SOLUTION;
    }


    double_t discriminant = b * b - 4 * a * c;


    if(discriminant < 0)
        return ZERO_SOLUTION;
    if (discriminant == 0){
        *answer1 = -b/(2*a);
        return ONE_SOLUTION;

    } else {
        *answer1 = (-b + sqrt(discriminant)) / (2 * a);
        *answer2 = (-b - sqrt(discriminant)) / (2 * a);
        return TWO_SOLUTION;
    }

}
