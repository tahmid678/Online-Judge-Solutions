#include<iostream>
using namespace std;

long long sheep=0,star[1000001],attack[1000001];


int main(){
    int n,p,i=0,q=0;
    cin>>n;

    p=n;
    while(n--){
        cin>>star[i];
        sheep+=star[i];
        attack[i]=0;
        i++;
    }

    i=0;
    while(i>=0&&i<p){
        if(star[i]%2==0&&star[i]>=0){
            if(attack[i]==0){
                attack[i]=1;
                q++;
            }
            if(star[i]>0){
                star[i]--;
                sheep--;
                i--;
            }
            else if(star[i]==0)
                i--;

        }
        else if(star[i]%2!=0&&star[i]>0){
            if(attack[i]==0){
                attack[i]=1;
                q++;
            }
            star[i]--;
            sheep--;
            i++;
        }

    }

    cout<<q<<" "<<sheep<<endl;

    return 0;
}

