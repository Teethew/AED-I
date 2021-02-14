#include <stdio.h>
#include <math.h>

int bhaskara(double, double, double, double*, double*);

int main() {
    double a, b, c, x1, x2;
    scanf("%lf %lf %lf", &a, &b, &c);
    int varCount = bhaskara(a, b, c, &x1, &x2);

    switch(varCount) {
        case 0:
            printf("nao ha raiz real\n");
            break;
        case 1:
            printf("%.4lf\n", x1);
            break;
        case 2:
            printf("%.4lf %.4lf\n", x1, x2);
            break;
    }

    return 0;
}

int bhaskara(double a, double b, double c, double* x1, double* x2) {
    int delta = b*b - 4*a*c;
    if(delta < 0) {
        return 0;
    } else {
        *x1 = (sqrt(delta) - b)/(2*a);
        *x2 = (0 - sqrt(delta) -b)/(2*a);

        if(*x1 == *x2) return 1;
        else return 2;
    }
}