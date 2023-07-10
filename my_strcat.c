#include <stdio.h>
#include <string.h>

void m_strcat(char *str1, char* str2)
{
     int length, j;

  // store length of s1 in the length variable
  length = 0;
  while (str1[length] != '\0') {
    ++length;
  }

  // concatenate s2 to s1
  for (j = 0; str2[j] != '\0'; ++j, ++length) {
    str1[length] = str2[j];
  }

  // terminating the s1 string
  str1[length] = '\0';

  
}
int main(){
    
    char text[50] = "alm", text2[] = "as";
    m_strcat(text, text2);
    puts(text);
    

    return 0;
}
