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
void insertion_sort(int p[],int q)
{
    int key, j;
    for (int i =2; i <= q; i++)
    {
        key=p[i];
        j=i-1;
        while(j>=1 && p[j]>key){
                p[j+1]=p[j];
                j=j-1;
            }
        p[j+1]=key;
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
    int l;
    printf("\n");
    printf("for insertion_sort...\n");
    insertion_sort(a,n);
    return 0;
}
