//Replace with empty space wherever @ is present
#include<iostream>
#include<string.h> // this is not required
using namespace std;

void Replace(char ch[], int n){
    int i=0;
    while(ch[i]!='\0'){
        if(ch[i]=='@'){
            ch[i]=' ';
        }
        i++;
    }
}

int main(){
    char ch[100];
    cin.getline(ch,100);
    cout<<"Before: "<<ch<<endl;
    Replace(ch,100);
    cout<<"After: "<<ch<<endl; 


}