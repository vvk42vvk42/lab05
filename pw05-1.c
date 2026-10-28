#include <stdio.h>
#include <math.h> // -lm в gcc

int main(void)
{
    float x;
    int iter = 1;
    
    for (x = 0.0f; x <= 5.0f; x += 1.0f) // тк тут вещественные они постоянно округляются и что то теряется
    {
        float y = logf(x + 1.0f);
        printf("%d %.4f %.4f\n", iter, x, y);
        iter++;
    }
    
    return 0;
}
