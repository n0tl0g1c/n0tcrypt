#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void encrypt();
void decrypt();
int main(){
    int in;
    printf("insert 1 for decrypt\ninsert 2 for decrypt\n> ");
    scanf("%d",&in);
    switch(in){
        case 2:encrypt();
    }

}

void encrypt(){
    srand(time(NULL));
    int i;
    char str[1000];
    printf("insert string:");
    scanf("%s",&str);
    int randk;
    randk = 1+rand()%26;
    for(i = 0; (i < 100 && str[i] != '\0'); i++){
        str[i] = str[i] + randk;
    }
}
void decrypt(){

}