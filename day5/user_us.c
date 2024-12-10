#include<stdio.h>
int main(){
    int inputnumber=0;
    printf("Enter a number");
    scanf("%d",&inputnumber);
    if(inputnumber%2==0){
        printf("The given number is even");
    }
    else{
        printf("The given number is odd");
    }
    return 0;
}