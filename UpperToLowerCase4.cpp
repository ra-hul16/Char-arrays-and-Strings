#include<iostream>
#include<string.h>
using namespace std;

void UpperToLower(char ch[], int n){
    int i=0;
    while(ch[i]!='\0'){
        if(ch[i]>='A' && ch[i]<='Z'){
            ch[i]=ch[i]-'A'+'a';
        }
        i++;
    }
}

int main(){
    char ch[100];
    cin.getline(ch,100);
    cout<<"Before: "<<ch<<endl;
    UpperToLower(ch,100);
    cout<<"After: "<<ch<<endl;
}