#include<stdio.h>
int main(){
    int num;
    printf("How many lines of pattern do you want?\n");
    scanf("%d",&num);
    for(int i = 1; i <= num ; i++){
        for(int j = num - i ; j >= 1; j-- ){
            printf("  ");
        }
        for(int k = i ; k >= 1 ;k--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}