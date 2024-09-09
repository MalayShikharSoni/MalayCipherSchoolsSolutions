#include<iostream>
using namespace std;

string concatenateStrings(string str1, string str2){
    
    string str3=str1+str2;
    return str3;

}
int main(){
    string str1,str2;
    cout<<"Enter string 1 : ";
    getline(cin,str1);
    cout<<"Enter string 2 : ";
    getline(cin,str2);
    cout<<"Occurance is: "<<concatenateStrings(str1,str2);
}