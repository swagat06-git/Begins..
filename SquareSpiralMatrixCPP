#include <iostream>
using namespace std;
int main() {
    int size;
    cout<<"Enter the size of the Array for Spiral Matrix: ";
    cin>>size;
    int arr[size][size];
    int cmin=0,rmin=0,cmax=size-1,rmax=size-1;
    int k=1;
    while(k<=size*size){
        for(int i=cmin;i<=cmax;i++){
            arr[rmin][i]=k;
            k++;
        }
        rmin++;
        for(int i=rmin;i<=rmax;i++){
            arr[i][cmax]=k;
            k++;
        }
        cmax--;
        for(int i=cmax;i>=cmin;i--){
            arr[rmax][i]=k;
            k++;
        }
        rmax--;
        for(int i=rmax;i>=rmin;i--){
            arr[i][cmin]=k;
            k++;
        }
        cmin++;
    }
    for(int i=0;i<=size-1;i++){
        for(int j=0;j<=size-1;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}
