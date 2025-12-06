#include<stdio.h>
int main(){
    int j,i;
    printf("Enter a mnumber: ");
    scanf("%d",&j);
    for(i = 1; i <= j; i++){
        if(j % i == 0){
            printf("Factors are: %d\n",i);
        }
    }


    return 0;
}