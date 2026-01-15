#include<stdio.h>
#include<string.h>
#include<sys/stat.h>
int main(int argc, char *argv[]){
    if(argc < 2){
        printf("use mkd --help\n");
        return 0;
    }
    if(strcmp(argv[1],"--help")==0){
        printf("mkd: \n");
        printf("use mkd <dir>\n");
        return 0;
    }
    if(mkdir(argv[1], 0755)==-1){
        perror("mkd");
    }
    return 0;
}