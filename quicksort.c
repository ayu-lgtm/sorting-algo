#include<stdio.h>
#include<stdlib.h>

void swap(int a[], int left, int right)
{
    int temp;
    temp = a[left];
    a[left] = a[right];
    a[right] = temp;
}
int partition(int a[], int low, int high)
{
    int left, right;
    int pivot_item;
    left = low;
    pivot_item = a[low];
    right = high;
    while (left < right)
    {
        while (a[left] <= pivot_item)
            left++;
        while (a[right] > pivot_item)
            right--;
        if (left < right)
            swap(a, left, right);
    }
    a[low] = a[right];
    a[right] = pivot_item;
    return right;
}

void quicksort(int a[], int low, int high)
{
    int pivot;
    if (high > low)
    {
        pivot = partition(a, low, high);
        quicksort(a, low, pivot - 1);
        quicksort(a, pivot + 1, high);
    }
}
void printarray(int a[], int);
int main()
{
    int a[50], i, n;
    printf("\nEnter no. of elements: ");
    scanf("%d", &n);
    printf("\nEnter the elements: \n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nUnsorted elements: \n");
    printarray(a, n);
    quicksort(a, 0, n - 1);
    printf("\nSorted elements: \n");
    printarray(a, n);
    return 0;
}


void printarray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf(" %d ", a[i]);
    printf("\n");
}
