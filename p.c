#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int value = x / 1000;
    if (value % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}