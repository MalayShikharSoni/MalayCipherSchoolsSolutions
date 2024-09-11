#include<iostream>
using namespace std;

int main(){
    int var;
    cout<<"Enter value: ";
    cin>>var;

    int* ptr=&var;

    cout<<"Variable itself: "<<var<<endl;
    cout<<"Value using pointer: "<<*ptr;
}