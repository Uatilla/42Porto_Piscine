#include <stdio.h>

int add(int x)
{
    static int sum = 0;
    sum += x;
    return (sum);
}
int main()
{
    printf("%d\n",add(5));
    printf("%d\n",add(5));
    printf("%d\n",add(5));
    return (0);
}