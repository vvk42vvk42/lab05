#include <stdio.h> // v-6

int main(void)
{
    double arr[8]; // arr - название путь, а i - шаги, начинаем с нуля, то есть стоим на месте
    int i;
    
    for (i = 0; i < 8; i++)
    {
        arr[i] = 1.0 + i * 2.0;
    }

    for (i = 0; i < 8; i++)
    {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
    
    for (i = 7; i >= 0; i--)
    {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
    return 0;
}
