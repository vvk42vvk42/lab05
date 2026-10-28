#include <stdio.h> // v-10
#include <math.h>

double calc(double a, double b) // у дабл 8 байт вместо 4, как у float
{ // return закрывает функцию calc(возращает в main) и отдает наружу посчитанный результат
    return exp(a) + log(b); // они работают только с высокой точностью поэтому дабл
}

int main(void)
{
    double a, b;

    while (scanf("%lf %lf", &a, &b) == 2)
    {
        double res = calc(a, b);
        printf("%.4f \n", res);
    }
    return 0;
}
