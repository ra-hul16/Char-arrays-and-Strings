#include<iostream>
using namespace std;

int FindLength(char ch[], int n){
    int len=0;
    while(ch[len]!='\0'){
        len++;
    }
    return len;
}

bool CheckPalindrome(char ch[], int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        if(ch[i]==ch[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    char ch[100];
    cin.getline(ch,100);
    int len=FindLength(ch,100);
    bool val= CheckPalindrome(ch,len);
    if(val){
        cout<<"Valid"<<endl;
    }
    else{
        cout<<"Invalid";
    }
}
