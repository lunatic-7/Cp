#include <stdio.h>

int main()
{
    int T; 
    float A, B, C;
    float avg;

    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%f %f %f", &A, &B, &C);
        avg = (A+B)/2;

        if (avg > C)
        {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    
    return 0;
}