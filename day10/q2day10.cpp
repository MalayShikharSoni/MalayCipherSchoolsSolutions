#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;

bool isPalindrome(const string str){
    string str2;

    for(char c : str){
        if(isalnum(c)){
            str2+=tolower(c);
        }
    }

    int low=0;
    int high=str2.length()-1;

    while(low<high){
        if(str2[low]!=str2[high]){
            return false;
        }
        low++;
        high--;
    }
    return true;
}

int main(){
    string str;

    getline(cin,str);

    cout<<isPalindrome(str);
}