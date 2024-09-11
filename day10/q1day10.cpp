#include<iostream>
using namespace std;

int findMax(const int arr[], int size){
    int maxx=arr[0];

    for(int i=0;i<size;i++){
        if(arr[i]>maxx){
            maxx=arr[i];
        }
    }

    return maxx;
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<findMax(arr,size);
}