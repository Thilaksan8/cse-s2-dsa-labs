#include<iostream>
using namespace std;
int main(){
    int arr[5]={5,45,3,2,1};
    for(int i=0;i<4;i++){
        int min=arr[i];
        for(int j=i+1;j<5;j++){
            if(min>arr[j]){
                arr[i]=arr[j];
                arr[j]=min;
                min=arr[i];
            }
        }
    }for(int i:arr){cout<<i<<"   ";}
    return 0;
}