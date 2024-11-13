#include<iostream>
using namespace std;

int main(){
    int arr[100][100], n, m, arr1[100][100], x, y, sum[100][100];
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

    cout<<"Enter number of rows: ";
    cin>>x;
    cout<<"Enter number of columns: ";
    cin>>y;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>arr1[i][j];
        }
    }

    // Addition
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            sum[i][j]=arr[i][j]+arr1[i][j];
        }
    }    

    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<sum[i][j]<<" ";
        }
    }


    return 0;
}