#include<stdio.h>
int main(){
    scanf("%d",&inputnumber);
    sqrt1=sqrt(inputnumber);
    printf("square root of %d is : %d \n",inputNumber,sqrt1);

    if((square*sqrt1) == inputnumber){
        printf("perfect square");
    }
    else{
        printf("not a perfect square");
    }
    return 0;
}