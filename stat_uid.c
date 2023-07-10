#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>


int main(int argc, char* argv[]){
    struct stat file_stat;
    if(argc != 2){
        fprintf(stderr, "USE: %s <file>", argv[1]);
        return 1;
    }
    if(stat(argv[1], &file_stat)== -1){
        fprintf(stderr, "Cannot read file %s : %s\n", argv[1], strerror(errno));
        return errno;
    }
    printf("Inode: %lu\n", file_stat.st_ino);
    printf("File size: %zd\n", file_stat.st_size);
    printf("Links: %lu\n", file_stat.st_nlink);


    
    return 0;
}