//10. Write a program to print a string in reverse using a pointer

#include<stdio.h>
int main()
{
    char a[200],*p,j=0;
    printf("enter words or sentences:\n");
    p=a;
    gets(p);
    int i;
    for(i=0;*(p+i);i++)
        j++;

    for(i=j; i>=0 ;i--)
        printf("%c",*(p+i));



}
