#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int n;
    cout<<"Enter the size of matrix: ";
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"Enter element: ";
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;

    }

    //transpose
    cout<<"* * * * *  Transposed Matrix * * * * * "<<endl;;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }
    
    return 0;
    
}