#include<iostream>
using namespace std;

int main(){
    int arr[50];
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    cout<<"Sum of array is: "<<sum;

    return 0;
}