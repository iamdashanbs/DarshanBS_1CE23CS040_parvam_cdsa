#include<stdio.h>
int main() {
    unsigned int num,val=0 ,sum=0;
    printf("enter the number:");
    scanf("%u",&num);
    while(num>0)
    {
        val=num%100;
        sum+=val;
        num/=100;
    }
    printf("sum of digits is :%u",sum);
    return 0;
}