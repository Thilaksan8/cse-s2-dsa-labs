#include<iostream>
using namespace std;
int main(){
    
    int arr[6]={6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    cout<<"before sort : ";
    for(int i:arr){
        cout<<i<<" ";
    }
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(temp<arr[j] && j>=0){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
    cout<<endl<<"after sorted: ";
    for(int i :arr){
        cout<<i<<" ";
    }
}