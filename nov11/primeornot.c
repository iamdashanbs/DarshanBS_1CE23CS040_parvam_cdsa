#include <stdio.h>
int main() {
    int n,i,flag=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=2;i<n/2;++i) {
        if(n%i==0) 
            flag=1;
            break;
    }
    if(flag==0)
       printf("Given number is a prime number");
        
     else 
        printf("Not Prime number:%d\n",n);
        
        
    
    return 0;
}