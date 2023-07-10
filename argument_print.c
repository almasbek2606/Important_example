#include<stdio.h>

int main(int argc, char* argv[])
{
    int iLoop;
 
    printf("\nTotal number of arguments : %d",argc);
    printf("\nArguments are :\n");
 
    for(iLoop=0;iLoop < argc; iLoop++)
    {
        printf("%s\t",argv[iLoop]);
    }
    
    printf("\n");
    
    return 0;
}