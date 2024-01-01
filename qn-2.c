//2. Write a function to swap strings of two char arrays of calling functions.


#include<stdio.h>
void swap(char *, char *);
int main()
{
    char a[100],b[100];
    swap(a,b);

}
void swap(char *p, char *q)
{
    char m[100],*t;
    t=m;
    int i;
    printf("enter two names or words:\n");
    gets(p);
    gets(q);

    for(i=0;*(p+i) || *(q+i); i++)
    {
        *(t+i)=*(p+i);
        *(p+i)=*(q+i);
        *(q+i)=*(t+i);
    }

    printf("%s\n",p);

    printf("%s",q);
}


//printf in main function---


/*#include<stdio.h>
void swap(char *, char *);
int main()
{
    char a[100],b[100];
    swap(a,b);
    printf("%s\n",a);
    printf("%s",b);

}
void swap(char *p, char *q)
{
    char m[100],*t;
    t=m;
    int i;
    printf("enter two names or words:\n");
    gets(p);
    gets(q);

    for(i=0;*(p+i) || *(q+i); i++)
    {
        *(t+i)=*(p+i);
        *(p+i)=*(q+i);
        *(q+i)=*(t+i);
    }
}*/
