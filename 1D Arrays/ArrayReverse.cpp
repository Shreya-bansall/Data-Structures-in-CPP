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

    int s=0, e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}