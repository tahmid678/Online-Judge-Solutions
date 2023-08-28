#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int i=0, a=0, c=0, g=0, t=0;
    int max=0;
    char s1[4]={'A', 'C', 'G', 'T'};
    string s2;
    cin>>s2;

    while(i<s2.size()){
        if(s2[i]==s1[0]){
            a++;
            if(max<a){
                max=a;
            }
            c=0, g=0, t=0;
        }
        else if(s2[i]==s1[1]){
            c++;
            if(max<c){
                max=c;
            }
            a=0, g=0, t=0;
        }
        else if(s2[i]==s1[2]){
            g++;
            if(max<g){
                max=g;
            }
            a=0, c=0, t=0;
        }
        else{
            t++;
            if(max<t){
                max=t;
            }
            a=0, c=0, g=0;
        }

        i++;
    }

    cout<<max;

    return 0;
}
