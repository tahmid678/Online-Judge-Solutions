#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t, n;
    cin>>t;
    while(t--){
        cin>>n;
        long long a[n], result = 0;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int i = 0;
        while(i<n-1){
            for(int j=i+1; j<n; j++){
                result+=a[i]*a[j];
            }
            i++;
        }
        cout<<result<<endl;
    }

    return 0;
}
