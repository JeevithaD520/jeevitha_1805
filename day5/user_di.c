#include<stdio.h>
int main(){
    int inputNumber=0,countNumber=0,digit;
    printf("enter a number:  ");
    scanf("%d",&inputNumber);

    while(inputNumber!=0){
        digit=inputNumber%10;
        countNumber = (countNumber+1)+digit;
        inputNumber=inputNumber/10;
    }
    printf("The reverse of a number is : %d",countNumber);
    return 0;
}