#include <stdio.h> // v-24

int main(void)
{
    const int HEIGHT = 5;
    int razmer = HEIGHT * 2 - 1;
//Переменная i указывает строчку, а j символ в ней. Если i чётная, то j рисует плюсы и минусы. Если i нечётная, то j рисует только минусы.
    for (int i = 0; i < razmer; i++)
    {
        for (int j = 0; j < razmer; j++)
        {
            int index = (i % 2) * 2 + (j % 2);
            printf("%c", "+-- "[index]);
        }
        printf("\n");
    }
    return 0;
}
