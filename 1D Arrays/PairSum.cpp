#include<iostream>
using namespace std;

int main(){
    int arr[50], n, value;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter the elements of an array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value: ";
    cin>>value;

    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==value){
                count++;
            }
        }
    }

    cout<<count;

    return 0;
}