#include<stdio.h>

void bubble_sort(int A[], int n)
{
    int i, j, temp, flag;

    for(i=0; i<n-1; i++){
        flag = 0;
        for(j=0; j<n-1-i; j++){
            if(A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
        break;
    }
}

int main()
{
    int ara[] = {16, 14, 5, 6, 8};

    int n = sizeof(ara)/sizeof(ara[0]);

    bubble_sort(ara, n);

    for(int i=0; i<n; i++){
        printf("%d ", ara[i]);
    }
    return 0;
}
