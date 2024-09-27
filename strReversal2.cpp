#include<iostream>
#include<string.h>
using namespace std;

int FindLength(char ch[], int n){
    int len=0;
    while(ch[len]!='\0'){
        len++;
    }
    return len;
}

void Reversal(char ch[], int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
    
}

int main(){
    char ch[100];
    //cin>>name;
    cin.getline(ch,100); //when i/p with spaces
    int len=FindLength(ch,100);
    cout<<"Before Reversal: "<<ch<<endl;
    Reversal(ch,len);
    cout<<"After Reversal: "<<ch<<endl; 
}