//8. Write a program to compute the sum of all elements in an array using pointers.


#include<stdio.h>
int main()
{
    int a[100],i,x,sum=0,*p;
    printf("enter the size of an array:\n");
    scanf("%d",&x);
    p=a;
    printf("enter %d numbers:\n",x);


    for(i=0;i<x;i++)
    scanf("%d",(p+i));


    for(i=0;i<x;i++)
    {
        sum=sum+*(p+i);
    }
    printf("sum of the array is %d",sum);


}
