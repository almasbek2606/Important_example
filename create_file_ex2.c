#include< stdio.h >
int main()
{
 
    FILE *fp;   /* file pointer*/
    char fName[20];
    char ch;
 
    printf("\nEnter file name to create :");
    scanf("%s",fName);
 
    /*creating (open) a file*/
    fp=fopen(fName,"w");
    /*check file created or not*/
    if(fp==NULL)
    {
        printf("File does not created!!!");
        exit(0); /*exit from program*/
    }
 
    printf("File created successfully.");
    /*writting into file*/
    printf("\nEnter text to write (press < enter > to save & quit):\n");
    while( (ch=getchar())!='\n')
    {
        putc(ch,fp); /*write character into file*/
    }
 
    printf("\nData written successfully.");
    fclose(fp);
 
    /*again open file to read data*/
    fp=fopen(fName,"r");
    if(fp==NULL)
    {
        printf("\nCan't open file!!!");
        exit(0);
    }
 
    printf("\nContents of file is :\n");
    /*read text untill, end of file is not detected*/
    while( (ch=getc(fp))!=EOF )
    {
        printf("%c",ch); /*print character on screen*/
    }
 
    fclose(fp);
    return 0;
}