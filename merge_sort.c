#include<stdio.h>

void merge(int A[], int lb, int mid, int ub)
{
    int i=lb, j=mid+1, k=lb;
    int B[ub+1];

    /*for(int a=0; a<=ub; a++){
        B[a] = 0;
    }*/

    while(i<=mid && j<=ub){
        if(A[i]<=A[j]){
            B[k]=A[i];
            i++;
            k++;
        }
        else{
            B[k]=A[j];
            j++;
            k++;
        }
    }
    if(i>mid){
        while(j<=ub){
            B[k]=A[j];
            j++;
            k++;
        }
    }
    else{
        while(i<=mid){
            B[k]=A[i];
            i++;
            k++;
        }
    }
    for(int x=lb; x<=ub; x++){
        A[x]=B[x];
    }
}

void merge_sort(int A[], int lb, int ub)
{
    if(lb<ub){
        int mid = (lb+ub)/2;
        merge_sort(A, lb, mid);
        merge_sort(A, mid+1, ub);
        merge(A, lb, mid, ub);
    }
}


int main()
{
    int A[] = {15, 5, 24, 8, 1, 3, 16, 10, 20};

    int n = sizeof(A)/sizeof(A[0]);

    merge_sort(A, 0, n-1);

    for(int i=0; i<n; i++){
        printf("%d ", A[i]);
    }
    return 0;
}
