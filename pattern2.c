#include<stdio.h>
int main(){
    int num;
    printf("How many lines of pattern do you want?\n");
    scanf("%d",&num);
    for(int i = 1 ; i <= 1; i++){
        for(int j = i ; j <= 1;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}