#include <stdio.h>
#include <string.h> 

int chnum(char* destination, char rev)
{
    int count = 0;

     for (int i = 0; destination[i] != '\0'; ++i) {
        if (rev == destination[i])
            ++count;
    }
    return count;
}


int main()
{
    char connect[1000];
    char ch;
    printf("Please write some \n");
    scanf("%s", &connect);
    printf("Please write some ch \n");
    scanf("%c", &ch);
    int j =  chnum(connect, ch);

    printf("Num of strings: %c = %d\n", ch, j);

    return 0;
}