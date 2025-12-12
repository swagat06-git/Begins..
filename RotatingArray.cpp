#include <iostream>
using namespace std;
int rev(int brr[],int size,int x,int y);
int main() {
    int s;
    cout<<"Enter the size of the Array: ";
    cin>>s;
    int arr[s];
    for(int i=0;i<=s-1;i++){
        cin>>arr[i];
    }
    int rot;
    cout<<"Enter the number of Rotations of the Array: ";
    cin>>rot;
    rev(arr,s,0,s-1-rot);
    rev(arr,s,0,s-1);
    rev(arr,s,0,rot-1);
    for(int i=0;i<=s-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
int rev(int brr[],int size,int x,int y){
    for(int i=x,j=y;i<j;i++,j--){
        brr[i]=brr[i]+brr[j];
        brr[j]=brr[i]-brr[j];
        brr[i]=brr[i]-brr[j];    
    }
    return 0;
}
