#include<iostream>
#include<algorithm>
using namespace std;
int partion(int A[],int lb,int ub){
    int pivot=A[lb];
    int start=lb;
    int end=ub;
    while(start<end){
        while(A[start]<=pivot){
            start++;
        }while(A[end]>pivot){
            end--;
        }if(start<end){
            swap(A[start],A[end]);
        }
    }swap(A[lb],A[end]);
    return end;
}
void quicksort(int A[],int lb,int ub){
    if(lb<ub){
        int loc=partion(A,lb,ub);
        quicksort(A,lb,loc-1);
        quicksort(A,loc+1,ub);
    }
}
int main(){
    int A[8]={8,7,6,5,4,3,2,1};
    int lb=0;
    int ub=7;
    quicksort(A,lb,ub);
    for(int i:A){
        cout<<i<<"  ";
    }
    return 0;
}