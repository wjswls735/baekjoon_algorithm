#include <stdio.h>

int main()
{
    int count;
    int num[10];
    int tp;
    int temp[10];
    scanf("%d", &count);
    for(int i=0; i< count; i++){
        scanf("%d", &tp);
        temp[i]=tp;
    }

    num[0]=1;
    num[1]=2;
    num[2]=4;
    for(int i =3; i<10; i++){
        num[i]=num[i-3]+num[i-2]+num[i-1];
    }
    
    for (int i=0; i<count; i++)
    {
        printf("%d\n", num[temp[i]-1]);
    }
    return 0;
}

