#include<iostream>
#include<algorithm>
using namespace std;
#define R 3
#define C 3

void printBoundaryElements(int arr[R][C]){
    if(R==1){
        for(int i=0; i<C; i++){
            cout<<arr[R-1][i]<<" ";
        }
    }
    if(C==1){
        for(int i=0; i<R; i++){
            cout<<arr[i][C-1]<<" ";
        }
    }
    for(int i=0; i<C; i++){
        cout<<arr[0][i]<<" ";
    }
    for(int i=1; i<R; i++){
        cout<<arr[i][C-1]<<" ";
    }
    for(int i=C-2; i>=0; i--){
        cout<<arr[R-1][i]<<" ";
    }
    for(int i=R-2; i>=1; i--){
        cout<<arr[i][0]<<" ";
    }
}

int main(){
    int arr[R][C];
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            cout<<"Enter the element: ";
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    printBoundaryElements(arr);
}