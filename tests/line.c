#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "../quadratic_equation.h"

int main(int argc, char const *argv[])
{
    
    double_t first_answer;
    double_t second_answer;
    


    quadratic_equation_solver((double_t) 0, (double_t) -3, (double_t) 7, &first_answer, &second_answer);

    printf("%f %f\n", first_answer, second_answer);
    return 0;
}