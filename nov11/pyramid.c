// Online C++ compiler to run C++ program online
#include <stdio.h>

int main()
{int i,j;
int n;
printf("enter the number:\n");
scanf("%d",&n);
for( i=1;i<=n;i++) 
{
    for(j=1;j<=(n-i)*2;j++)
    {
        printf(" ");
    }
    for( j=1;j<=i;j++)
    {if(i!=j)
     printf("%d ",j);
    
    else
    printf("%d",j);
        
    }
    for(j=i-1;j>=1;j--)
    {
        printf(" %d",j);
    }
 printf("\n");
 }
}