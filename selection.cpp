#include<iostream>
using namespace std;
int main(){
    int i,j,num,temp,min,p;
    int arr[10];
    cout<<"enter number of elements: \n";
    cin>>num;
    cout<<"\n enter elements \n";
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    for(int i=0;i<num-1;j++){
        min=arr[i];
        p=i;
        for(int j=i+1;j<num;j++){
            if(min>arr[j]){
            min=arr[j];
            p=j;
        }
        temp=arr[i];
        arr[i]=arr[p];
        arr[p]=temp;
    }
}

    for(int i: arr){cout<<i<<"   ";}
    return 0;
}