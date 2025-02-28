#include<iostream>
using namespace std;
int main(){
    int arr[5]={5,4,3,2,1};
    for(int i =0;i<4;i++){
        int flag=0;
        for(int j=0;j<5-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
            if(flag=0){break;}

        }    
    }for(int i: arr){
        cout<<i<<"    ";
    }
    return 0;
}