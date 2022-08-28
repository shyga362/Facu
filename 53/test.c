#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i = 0;
    char a[10] = {"hello","world","!"};
    for(i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
