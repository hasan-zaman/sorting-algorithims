#include<stdio.h>

void shell_sort(int A[], int n)
{
    int gap, i, j, temp;

    for(gap=n/2; gap>=1; gap=gap/2){

        for(j=gap; j<n; j++){

            for(i=j-gap; i>=0; i=i-gap){

              if(A[i+gap]>A[i])
                    break;
              else{
                temp = A[i];
                A[i] = A[i+gap];
                A[i+gap] = temp;
              }
            }
        }
    }
}

int main()
{
    int A[]= {23, 29, 15, 19, 31, 7, 9, 5, 2};

    int n = sizeof(A)/sizeof(A[0]);

    shell_sort(A, n)
;
    for(int i=0; i<n; i++){
        printf("%d ", A[i]);
    }

    return 0;
}
