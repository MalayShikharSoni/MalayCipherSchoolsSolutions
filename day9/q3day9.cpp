#include<iostream>
using namespace std;

int main(){
    int var=5;
    int* ptr=&var;
    int** pptr=&ptr;

    cout<<var<<" "<<*ptr<<" "<<**pptr;
}