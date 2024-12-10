#include<stdio.h>
int main(){
    int intputNumber=0;
    printf("Enter a number: \n");
    scanf("%d",&intputNumber);
    int i=0;
    do{
        printf("%d\n",i);
        i++;
    }while(i<=intputNumber);
    return 0;
}