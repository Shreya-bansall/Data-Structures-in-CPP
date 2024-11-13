#include<iostream>
using namespace std;

int main(){
    int arr[100][100], n, m;
    cout<<"Enter number of rows: ";
    cin>>n;
    cout<<"Enter number of columns: ";
    cin>>m;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    // Principal Diagonal of Matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==j){
                cout<<arr[i][j]<<" ";
            }
        }
    }

    // Secondary Diagonal of Matrix
    int k=2;
    for(int i=0;i<n;i++){
        cout<<arr[i][k]<<" ";
        k--;   
    }

    return 0;
}