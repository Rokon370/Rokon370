#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 18; i = i + 1)
    {

        if (i == 15)
        {
            continue;
        }
        printf("%d ", i);
        printf("hello\n");
    }

    return 0;
}