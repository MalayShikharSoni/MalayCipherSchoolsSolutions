#include<iostream>
using namespace std;

int countCharacter(string str, char c){
    int count=0;
    for(char cc : str){
        if(cc==c){
            count++;
        }
    }

    return count;
}
int main(){
    string str;
    char c;
    cout<<"Enter string: ";
    getline(cin,str);
    cout<<"Enter Character: ";
    cin>>c;
    cout<<"Occurance is: "<<countCharacter(str,c);
}