#include<iostream>
#include<algorithm>
using namespace std;

#define n 3
#define m 3

void transpose(int arr[n][n]){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
}

void rotate90(int arr[n][n]){
    transpose(arr);
    for(int i=0; i<n; i++){
        int low=0, high=n-1;
        while(low<high){
            swap(arr[low][i], arr[high][i]);
            low++;
            high--;
        }
    }
}

int main(){

    int arr[n][m];
    for(int i=0; i<n; i++){
        cout<<"Enter the row:"<<i+1<<endl;
        for(int j=0; j<m; j++){
            cout<<"Enter element: ";
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    rotate90(arr);
    cout<<endl<<"* * * * * 90 degree Rotated Matrix * * * * *"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}