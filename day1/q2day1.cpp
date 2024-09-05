#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int g1,g2,g3,g4,g5;
    cout<<"Enter Grade 1: ";
    cin>>g1;

    cout<<"Enter Grade 2: ";
    cin>>g2;

    cout<<"Enter Grade 3: ";
    cin>>g3;

    cout<<"Enter Grade 4: ";
    cin>>g4;

    cout<<"Enter Grade 5: ";
    cin>>g5;

    cout<<"Average grade is: ";
    cout<<fixed<<setprecision(2)<<(float)(g1+g2+g3+g4+g5)/5.0;
}