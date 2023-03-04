#include<stdio.h>
int main ()
{
int x;
printf("Enter the number :");
scanf("%d",&x);
for(int i = 0;i<=10;i++){
    printf("%d*%d=%d",x,i,x*i);
}


}