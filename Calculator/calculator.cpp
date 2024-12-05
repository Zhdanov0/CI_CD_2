#include "calculator.h"
#include <cmath>


double Operations::add(double a, double b) { return a + b; }
double Operations::subtract(double a, double b) { return a - b; }
double Operations::multiply(double a, double b) { return a * b; }
double Operations::divide(double a, double b) { return (b != 0) ? a / b : 0; }
double Operations::power(double a, int b) {

    if (b == 0) {
        return 1;
    }

    if (b < 0) {
        a = 1 / b;
        b = -b;
    }

    double res = 1;
    while (b > 0) {
        if (b & 1) {
            res *= a;
        }
        a *= a;
        b >>= 1;
    }

    return res;
}


