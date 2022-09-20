#include <stdio.h>

bottles(int T) {
    for (int i = 0; i < T; i++)
    {
        int N, X, K;
        scanf("%d %d %d", &N, &X, &K);
        if (K/X < N)
        {
            printf("%d\n", K/X);
        }
        else {
            printf("%d\n", N);
        }
    }
}


int main()
{
    int T;
    scanf("%d", &T);
    bottles(T);    
    return 0;
}