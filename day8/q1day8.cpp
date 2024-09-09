#include<iostream>
using namespace std;

int stringLength(string str){
    int count=0;
    for(char c : str){
        count++;
    }

    return count;
}
int main(){
    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    cout<<"Length is: "<<stringLength(str);
}