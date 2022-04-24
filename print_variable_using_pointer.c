#include <stdio.h>

int main()
{
    int a;
    int* ptr;
    
    ptr = &a;
    scanf("%d", ptr);
    printf("%d", *ptr);
    
}
