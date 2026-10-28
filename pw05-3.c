#include <stdio.h> // v-30

int main(void)
{
    int n;
    double sum = 0.0; // надо строго 0.0 тк через инт он будет обрезать до целых, будем много неточностей 

    while (scanf("%d", &n) == 1 && n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            double chis = (double)(i * i);
            double znam = 1.0;
            for (int j = 1; j <= i; j++)
            {
                znam *= 2.0;
            }
            double itog = chis / znam;
            sum += itog;
        }
        printf("SUM: %.6f\n", sum);
    }
    return 0;
}
