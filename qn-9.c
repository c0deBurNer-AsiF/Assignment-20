//9. Write a program to print the elements of an array in reverse order.

#include<stdio.h>
int main()
{
    int a[100],n,i,*p;
    printf("enter the size of an array:\n");
    scanf("%d",&n);

    printf("enter %d numbers:\n",n);

    p=a;
    for(i=0;i<n;i++)
        scanf("%d",(p+i));

    for(i=n-1;i>=0;i--)
            printf("%d ",*(p+i));


}
