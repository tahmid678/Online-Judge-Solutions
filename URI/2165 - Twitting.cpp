#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char tweet[500];

    cin.getline(tweet,500);

    if(strlen(tweet)<=140)
        cout<<"TWEET"<<endl;
    else
        cout<<"MUTE"<<endl;

    return 0;
}
