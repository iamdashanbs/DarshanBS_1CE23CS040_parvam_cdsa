#include<stdio.h>
int main(){
    int num;
    int fact =1;
    printf("Enter the number:");
    scanf("%d",&num);
    for(int i =1;i<=num;i++){
        fact *= i;
    }
    printf("factorial is %d",fact);
}