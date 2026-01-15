#include<stdio.h>
#include<string.h>
#include<unistd.h>
int main(int argc, char *argv[]){
    const char *usr=getlogin();
    if(usr==NULL){
        perror("whmi");
        return 0;
    }
    if(argc < 1 && strcmp(argv[1],"--help")==0){
        printf("whmi: \n");
        printf("use whmi for print username\n");
        return 0;
    }
    printf("%s\n",usr);
    return 0;
}