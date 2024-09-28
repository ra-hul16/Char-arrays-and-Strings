#include<iostream>
#include<string.h>
using namespace std;

void LowerToUpper(char ch[], int n){
    int i=0;
    while(ch[i]!='\0'){
        if(ch[i]>='a' && ch[i]<='z'){
            ch[i]=ch[i]-'a'+'A';
        }
        i++;
    }
}

int main(){
    char ch[100];
    cin.getline(ch,100);
    cout<<"Before: "<<ch<<endl;
    LowerToUpper(ch,100);
    cout<<"After: "<<ch<<endl;
}