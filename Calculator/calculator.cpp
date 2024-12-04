#include "calculator.h"

int Operations::add(int a, int b) { return a + b; }
int Operations::subtract(int a, int b) { return a - b; }
int Operations::multiply(int a, int b) { return a * b; }
int Operations::divide(int a, int b) { return (b != 0) ? a / b : 0; }
