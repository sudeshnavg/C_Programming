#include <stdio.h>

int main()
{
    int a;
    int* ptr;
    
    ptr = &a;
    scanf("%d", ptr);
    printf("%d", *ptr);
    
}

/*
int main()
{
    int a=10;
    int* ptr=&a;
    
    printf("%d\n",*ptr);
    scanf("%d",ptr);
    printf("%d",a);
}
*/
