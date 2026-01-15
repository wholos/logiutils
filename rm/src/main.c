#include<stdio.h>
#include<string.h>
#include<unistd.h>
int main(int argc,char *argv[]){
    if(argc < 2){
        printf("rm: use --help\n");
        return 0;
    }
    if(strcmp(argv[1],"--help")==0){
        printf("rm: \n");
        printf("use rm <file> for remove file\n");
        return 0;
    }
    if(unlink(argv[1])==-1){
        perror("rm");
        return 1;
    }
    return 0;
}