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

    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    cout<<max;

    return 0;
}