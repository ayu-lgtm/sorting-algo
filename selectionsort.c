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
void selection_sort(int p[],int q)
{
    int temp;
    for(int i=1;i<=q;i++)
    {
        for(int j=i+1;j<=q;j++)
        {
            if(p[i]>=p[j])
            {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
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
    printf("for Selection_Sort....\n");
    selection_sort(a,n);
}
