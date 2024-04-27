#include <stdio.h>
#include <math.h>

//Date:27.04.2024
//Author:Can Çetin
//Purpose:This code calculates the derivative of the sum of three functions with respect to x, y, and z.
// f(x, y, z) = x^2 + y^3 + z^4
// df/dx = 2x
// df/dy = 3y^2
// df/dz = 4z^3

int main() {

    double x = 2.0;
    double y = 3.0;
    double z = 4.0;

    double f = pow(x, 2) + pow(y, 3) + pow(z, 4);

    double dfdx = 2 * x;
    double dfdy = 3 * pow(y, 2);
    double dfdz = 4 * pow(z, 3);

    printf("f = %f\n", f);

    printf("df/dx = %f\n df/dy = %f\n df/dz = %f\n ", dfdx, dfdy, dfdz);
    
    return 0;
}