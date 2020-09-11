#include<stdio.h>

int find_max(int A[], int n)
{
   int max, i=0;

   max = A[i];

   for(i=1; i<n; i++){
    if(max < A[i])
        max = A[i];
   }
   return max;
}
void countSort(int A[], int n, int k)
{
    int B[n];

    int count[k+1];

    for(int j=0; j<k+1; j++){
        count[j] =0;
    }

    int i;

    for(i= 0; i<n; i++)
        count[A[i]]++;

    for(i=1; i<=k; i++)
        count[i] = count[i]+count[i-1];

    for(i=n-1; i>=0; i--)
        B[--count[A[i]]] = A[i];

    for(i=0; i<n; i++)
        A[i] = B[i];

}

int main()
{
    int A[] = {2,1,1,0,2,5,4,0,2,8,7,7,9,2,0,1,9};

    int n = sizeof(A)/sizeof(A[0]);

    int k = find_max(A, n);

    countSort(A, n, k);

    for(int i=0; i<n; i++)
        printf("%d ", A[i]);

    return 0;
}
