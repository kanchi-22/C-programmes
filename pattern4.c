#include<stdio.h>
int main(){
    int num;
    printf("How many lines of pattern do you want?\n");
    scanf("%d",&num);
    for(int i = 1 ; i <=num ; i++){
        for(int j = 1 ; j <= i ; j++){
            if(j == 1){
                continue;
            }
            printf("  ");
        }
        
        printf("\n");
    }
    return 0;
}