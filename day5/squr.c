#include<stdio.h>
#include<math.h>
int main(){
    int inputnumber=0,sqrt1=0;
    printf("enter a number: \n");
    scanf("%d",&inputnumber);
    sqrt1=sqrt(inputnumber);
    printf("square root of %d is: %d",inputnumber,sqrt1);
    return 0;
}