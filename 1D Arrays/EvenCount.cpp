#include<iostream>
using namespace std;

int main(){
    int arr[50], n;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter the elements of an array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count++;
        }
    }

    cout<<count;

    return 0;
}