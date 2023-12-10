#include <stdio.h>


double power(double base, int exponent) {
    double result = 1.0;

    
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {
    double base, result;
    int exponent;

    
    printf("Enter base number: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);


    result = power(base, exponent);

    
    printf("%.2lf raised to the power of %d is: %.2lf\n", base, exponent, result);

    return 0;
}

