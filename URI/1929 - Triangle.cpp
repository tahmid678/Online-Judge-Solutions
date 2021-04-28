#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(a>b&&a>c&&a>d){
        if((b+c>d&&b+d>c&&c+d>b)||(b+c>a||b+d>a||c+d>a)){
            cout<<"S"<<endl;
            return 0;
        }
    }
    else if(b>a&&b>c&&b>d){
        if((a+c>d&&a+d>c&&c+d>a)||(a+c>b||a+d>b||c+d>b)){
            cout<<"S"<<endl;
            return 0;
        }
    }
    else if(c>a&&c>b&&c>d){
        if((a+b>d&&a+d>b&&b+d>a)||(a+b>c||a+d>c||b+d>c)){
            cout<<"S"<<endl;
            return 0;
        }
    }
    else{
        if((a+b>c&&a+c>b&&b+c>a)||(a+b>d||a+c>d||b+c>d)){
            cout<<"S"<<endl;
            return 0;
        }
    }

    cout<<"N"<<endl;
    return 0;
}
