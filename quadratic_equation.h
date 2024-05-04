#ifndef QUADRATIC_EQUATION_H
#define QUADRATIC_EQUATION_H

#include <stdint.h>

/**
 * 
 *
 * Решает квадратное уравнение ax^2 + bx + c = 0 и записывает корни в указанные переменные.
 * 
 * @param a Коэффициент a.
 * @param b Коэффициент b.
 * @param c Коэффициент c.
 * @param answer1 Указатель на переменную для записи первого корня.
 * @param answer2 Указатель на переменную для записи второго корня.
 * 
 * @return Возвращает статус решения
 * 
 */


typedef enum {
    ZERO_SOLUTION      = 0,
    ONE_SOLUTION       = 1,
    TWO_SOLUTION       = 2,
    INFINITY_SOLUTIONS = 3,
    ERROR              = 4,
} status_quadratic_equation_t;

status_quadratic_equation_t quadratic_equation_solver(const double_t a,const double_t b,const double_t c, double_t* const answer1, double_t* const answer2);

#endif