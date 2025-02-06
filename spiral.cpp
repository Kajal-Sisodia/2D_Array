#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter number of rows: ";
    cin>>n;
    cout<<"Enter number of columns: ";
    cin>>m;

    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<"Enter the element: ";
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<"Matrix"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    //Spiral Print

    cout<<"* * * * * Spiral print * * * * *"<<endl;
    int top=0, left=0, right=m-1, bottom=n-1;
    while(top<=bottom && left<=right){
        int i,j;
        for(i=left; i<=right; i++){
            cout<<arr[top][i]<<" ";

        }
        top++;
        for(i=top; i<=bottom; i++){
            cout<<arr[i][right]<<" ";
        }
        right--;
        if(top<=bottom){
            for(i=right; i>=left; i--){
                cout<<arr[bottom][i]<<" ";
            }
            bottom--;
        }
        if(left<=right){
            for(i=bottom; i>=top; i--){
                cout<<arr[i][left]<<" ";
            }
            left++;
        }
    }
    return 0;
}

