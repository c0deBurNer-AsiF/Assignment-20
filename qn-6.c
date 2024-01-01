//6.. Write a program to calculate the length of the string using a pointer


#include<stdio.h>
int main()
{
    char str[100];
    int i;
    printf("enter a word or sentences:\n");

    gets(str);

    char *p;
    p=str;

    for(i=0;*(p+i);i++);

    printf("Length of this string is: %d",i);

}
