#include<stdio.h>

int partition(int A[], int lb, int ub)
{
    int pivot, start, end, temp;

    pivot = A[lb];
    start = lb;
    end = ub;

    while(start<end)
    {
        while(A[start]<=pivot)
            start++;

        while(A[end]> pivot)
            end--;

        if(start<end){
            temp = A[start];
            A[start] = A[end];
            A[end] = temp;
        }
    }
    temp = A[lb];
    A[lb] = A[end];
    A[end] = temp;

    return end;
}

void quick_sort(int A[], int lb, int ub)
{
    if(lb<ub)
    {
        int loc = partition(A, lb, ub);
        quick_sort(A, lb, loc-1);
        quick_sort(A, loc+1, ub);
    }
}

int main()
{
    int A[] = {7, 6, 10, 5, 9, 2, 1, 15, 7};

    int n = sizeof(A)/sizeof(A[0]);

    quick_sort(A, 0, n-1);

    for(int i=0; i<n; i++){
        printf("%d ", A[i]);
    }

    return 0;
}
