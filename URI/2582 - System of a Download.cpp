#include<iostream>
using namespace std;

int main(){
    int c,x,y;
    cin>>c;

    while(c--){
        cin>>x>>y;

        switch(x+y){
            case 0: cout<<"PROXYCITY"<<endl;
                continue;
            case 1: cout<<"P.Y.N.G."<<endl;
                continue;
            case 2: cout<<"DNSUEY!"<<endl;
                continue;
            case 3: cout<<"SERVERS"<<endl;
                continue;
            case 4: cout<<"HOST!"<<endl;
                continue;
            case 5: cout<<"CRIPTONIZE"<<endl;
                continue;
            case 6: cout<<"OFFLINE DAY"<<endl;
                continue;
            case 7: cout<<"SALT"<<endl;
                continue;
            case 8: cout<<"ANSWER!"<<endl;
                continue;
            case 9: cout<<"RAR?"<<endl;
                continue;
            case 10: cout<<"WIFI ANTENNAS"<<endl;
                continue;
        }
    }

    return 0;
}
