#include <stdio.h>
#include <stdlib.h>
void array(int p[],int q)
{
    printf("Enter the elements of array:");
    for(int i=1;i<=q;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("Given Array a[%d] :  ",q);
    printf("{");
    printf("%d,",p[1]);
    for(int i=2;i<q;i++)
    {
        printf("%d,",p[i]);
    }
    printf("%d",p[q]);
    printf("}");
}
void Bubble_sort(int p[],int q)
{
    int temp;
    for(int i=1;i<=q;i++)
    {
        for(int j=1;j<=q-i;j++)
        {
            if(p[j]>=p[j+1])
            {
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
    printf("{");
    printf("%d,",p[1]);
    for(int i=2;i<q;i++)
    {
        printf("%d,",p[i]);
    }
    printf("%d",p[q]);
    printf("}");
}
int main()
{
    int n;
    printf("Enter the size of array a[]:\n");
    scanf("%d",&n);
    int a[n];
    array(a,n);
    printf("\n");
    printf("for Bubble_sort....\n");
    Bubble_sort(a,n);
}
