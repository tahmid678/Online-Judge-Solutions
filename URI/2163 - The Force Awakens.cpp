#include<iostream>
using namespace std;

int main(){
    int n,m,i,j;
    cin>>n>>m;
    int terrain[n+1][m+1];

    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            cin>>terrain[i][j];
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            if(terrain[i][j]==42&&i-1>=0&&i+1<n&&j-1>=0&&j+1<m)
                if(terrain[i-1][j]==7&&terrain[i+1][j]==7&&terrain[i][j-1]==7&&terrain[i][j+1]==7
            &&terrain[i-1][j-1]==7&&terrain[i-1][j+1]==7&&terrain[i+1][j-1]==7&&terrain[i+1][j+1]==7){
                cout<<i+1<<" "<<j+1<<endl;
                return 0;
            }
    }

    cout<<0<<" "<<0<<endl;

    return 0;
}
