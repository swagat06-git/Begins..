#include <iostream>
using namespace std;
int main() {
    int size;
    cout<<"Enter the size of the Array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<=size-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=size-1;i++){
        for(int j=1;j<=size-1;j++){
            if(arr[j-1]>arr[j]){
                arr[j]=arr[j]+arr[j-1];
                arr[j-1]=arr[j]-arr[j-1];
                arr[j]=arr[j]-arr[j-1];
            }
        }
    }
    for(int i=0;i<=size-1;i++){
        cout<<arr[i]<<" ";
    }
}  
