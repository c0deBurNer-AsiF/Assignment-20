/*7. Write a program to count the number of vowels and consonants in a string using a
pointer.*/

#include<stdio.h>
int main()
{
    int i,j,v=0,c=0;
    char k[11]={"aeiouAEIOU"};
    char a[100],*p,*q;

    printf("enter a words or sentences:\n");
    gets(a);

    p=a;
    q=k;


    for(i=0; *(p+i); i++)
    {
       for(j=0; *(q+j);j++)
       {
           if(*(p+i)==*(q+j))
           {
            v++;
            break;
           }


       }
       if(*(p+i)!=*(q+j) && *(p+i)!=' ')
       c++;
    }
    printf("vowels are %d\n",v);
    printf("consonants are %d",c);
}
