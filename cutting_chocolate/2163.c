#include <stdio.h>

int main()
{
    int n, m, count;
    
    scanf("%d %d", &n, &m);

    count = ((m-1)+m*(n-1));
    printf("%d\n", count); 
    return 0;
}
