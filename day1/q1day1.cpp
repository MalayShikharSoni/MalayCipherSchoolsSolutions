#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1;
    string s2;
    cout<<"Enter first string: ";
    cin>>s1;
    cout<<"Enter second string: ";
    cin>>s2;

    string s3 = s1+s2;

    cout<<"Concatenated string is: "<<s3;
}