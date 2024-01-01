//3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]



#include<stdio.h>
void sort(int *,int);
int main()
{
    int n;
    int a[100];
    printf("enter the size of an array:\n");
    scanf("%d",&n);
    sort(a,n);

}
void sort(int *p, int size)
{
    int i,j,k;
    printf("enter %d numbers:\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",(p+i));
    }

    for(i=0;i<size;i++)
    {
        for(j=0+i; j<size ;j++)
        {
            if(*(p+i)>*(p+j))
            {
                k=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=k;
            }
        }
    }
    for(i=0;i<size;i++)
        printf("%d ",*(p+i));
}
