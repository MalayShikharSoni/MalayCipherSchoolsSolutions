#include<iostream>
using namespace std;

void findTarget(int arr[], int n, int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    findTarget(arr,n,target);
}

