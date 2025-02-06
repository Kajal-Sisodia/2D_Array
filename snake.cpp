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

    //spakePrint

    cout<<"* * * * * Snake Print * * * * *"<<endl;

    for(int i=0; i<n; i++){
        if(i%2 == 0){
            for(int j=0; j<m; j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=m-1; j>=0; j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
    return 0;


}