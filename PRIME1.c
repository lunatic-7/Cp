#include <stdio.h>

#define ll long long

int pri(int n)
{
  
    if (n == 1 || n == 0)
    {
        return 0;
    }
    
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int m, n;
        scanf("%d %d", &m, &n);

        for (int i = m; i <= n; i++)
        {
            if (pri(i))
            {
                printf("%d\n", i);
            }
        }
        printf("\n");
    }
    
    return 0;
}