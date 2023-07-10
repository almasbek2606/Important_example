#include <stdio.h>
#include <string.h>


int my_strlen(char* txt){
    int j = 0;
    for(int i = 0; txt[i] != '\0';  i++){
        j++;
    }
    return j;
}
int main(){
    char* str = "programming";
    int d = my_strlen(str);
    printf("%d\n", d);

    return 0;
}
