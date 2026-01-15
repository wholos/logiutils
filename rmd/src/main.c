#include<stdio.h>
#include<string.h>
#include<unistd.h>
int main(int argc, char *argv[]){
    if(argc < 2){
        printf("use rmd --help\n");
        return 0;
    }
    if(strcmp(argv[1],"--help")==0){
        printf("rmd: \n");
        printf("use rmd <dir>\n");
        return 0;
    }
    if(rmdir(argv[1])==-1){
        perror("rmd");
    }
    return 0;
}