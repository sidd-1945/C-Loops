#include<stdio.h>
int main(){
    int i,j,even=0,odd=0;
    printf("Enter a number: ");
    scanf("%d",&j);
    for(i=0;i <= j; i++){
        if(i % 2 == 0){
            even = even + i;
        }else{
            odd = odd + i;
        }
    }
    printf("Sum of even numbers are: %d\n",even);
    printf("Sum of odd numbers are: %d",odd);

    return 0;
}