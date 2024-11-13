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
    int element;
    cout<<"Enter the number you want to search for: ";
    cin>>element;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==element){
                cout<<"Row and the Column of the number you searched for is: ("<<i<<","<<j<<")";
            }
        }
    }

    return 0;
}