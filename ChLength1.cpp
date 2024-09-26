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

int main(){
    char name[100];
    //cin>>name;
    cin.getline(name,100); //when i/p with spaces
    int val=FindLength(name,100);
    cout<<"The Length is: "<<val<<endl; 
    cout<<"Length using utility is: "<<strlen(name); //urility function
}