#include<iostream>
using namespace std;

int main(){
    int n,e=0,m=0,l=0;
    string penguin;
    cin>>n;
    getchar();

    while(n--){
        getline(cin,penguin);
        if(penguin.compare("Emperor Penguin")==0)
            e++;
        else if(penguin.compare("Macaroni Penguin")==0)
            m++;
        else
            l++;
    }

    if(e>m&&e>l)
        cout<<"Emperor Penguin"<<endl;
    else if(m>l)
        cout<<"Macaroni Penguin"<<endl;
    else
        cout<<"Little Penguin"<<endl;

    return 0;
}
