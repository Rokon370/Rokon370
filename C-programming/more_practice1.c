#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a <= b && a <= c)
    {
        printf("the number is small:%d\n", a);
    }
    else if (b <= a && b <= c)
    {
        printf("The small number is :%d\n", b);
    }
    else
    {
        printf("The small number is :%d", c);
    }

    return 0;
}
