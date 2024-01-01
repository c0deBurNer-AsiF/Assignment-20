//5. Write a program to find the maximum number between two numbers using a pointer


#include<stdio.h>
int main()
{
    int num1, num2, *p,*q;
    p=&num1;
    q=&num2;
    printf("enter two numbers:\n");
    scanf("%d%d",p,q);

    *p>*q?printf("maximum number is %d",*p):printf("maximum number is %d",*q);

}


//with function---

/*#include<stdio.h>
void maximumnum(int *, int *);
int main()
{
    int num1, num2;
    maximumnum(&num1,&num2);
}
void maximumnum(int *p,int *q)
{
    printf("enter two numbers:\n");
    scanf("%d%d",p,q);

    *p>*q?printf("maximum number is %d",*p):printf("maximum number is %d",*q);
}*/

