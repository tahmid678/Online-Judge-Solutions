#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int main(){
    int u=0, l=0;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]>=65 && s[i]<=90){
            u++;
        }
        else{
            l++;
        }
    }

    if(u>l){
        for(int i=0; i<s.size(); i++){
            cout<<(char)toupper(s[i]);
        }
    }
    else{
        for(int i=0; i<s.size(); i++){
            cout<<(char)tolower(s[i]);
        }
    }

    return 0;
}
