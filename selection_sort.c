#include<stdio.h>

void selection_sort(int A[], int n)
{
    int i, j, min_index, temp;

    for(i=0; i<n-1; i++){
        min_index = i;
        for(j=i+1; j<n; j++){
            if(A[j] < A[min_index]){
                min_index = j;
            }
        }
        if(min_index != i){
            temp = A[i];
            A[i] = A[min_index];
            A[min_index] = temp;
        }
    }
}

int main()
{
    int A[] = {7, 4, 10, 8, 3, 1};

    int n = sizeof(A)/sizeof(A[0]);

    selection_sort(A, n);

    for(int i=0; i<n; i++){
        printf("%d ", A[i]);
    }
    return 0;
}
