#include <stdio.h>

int main()
{
    int a = -10;
    int b = 3;
    
    int result;
    
    result = a%b;
    printf("result = %d\n", result);
    
    a = 10;
    b = -3;
    result = a%b;
    printf("result = %d\n", result);    

    a = -10;
    b = -3;
    result = a%b;
    printf("result = %d\n", result);    
    
    return 0;
}