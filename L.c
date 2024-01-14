#include<stdio.h>
int main(void){
    int x=5;
    for(int i=1;i<=x;i++){
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}