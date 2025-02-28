#include<iostream>
using namespace std;

void merge(int A[], int L, int mid, int R) {
    int sorted[9];
    int i = L, j = mid + 1, k = L;

    while (i <= mid && j <= R) {
        if (A[i] <= A[j]) {
            sorted[k] = A[i];
            i++;
        } else {
            sorted[k] = A[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        sorted[k] = A[i];
        i++;
        k++;
    }

    while (j <= R) {
        sorted[k] = A[j];
        j++;
        k++;
    }

    for (int i = L; i <= R; i++) {
        A[i] = sorted[i];
    }
}

void mergesort(int A[], int L, int R) {
    if (L < R) {
        int mid = (L + R) / 2;
        mergesort(A, L, mid);
        mergesort(A, mid + 1, R);
        merge(A, L, mid, R);
    }
}

int main() {
    int A[9] = {9,8,7,6,5,4,3,2,1};
    int L = 0;
    int R = 8;
    
    mergesort(A, L, R);

    for (int i = 0; i < 9; i++) {
        cout << A[i] << " ";
    }

   return 0;
}

