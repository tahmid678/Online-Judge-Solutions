#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        char s1[n], s2[m];
        cin>>s1;
        cin>>s2;

        int moves = INT_MAX;
        for(int i=0; i<=n-m; i++)
        {
            int temp = 0;
            for(int j=0; j<m; j++)
            {
                if(s2[j]>s1[i+j])
                {
                    int t1 = s2[j]-s1[i+j];
                    if(t1>5)
                    {
                        temp+=10-t1;
                    }
                    else
                    {
                        temp+=t1;
                    }
                }
                else if(s2[j]<s1[i+j])
                {
                    int t1 = s1[i+j]-s2[j];
                    if(t1>5)
                    {
                        temp+=10-t1;
                    }
                    else
                    {
                        temp+=t1;
                    }
                }
                else
                {
                    temp+=0;
                }
            }
            if(temp<moves)
            {
                moves=temp;
            }
        }
        cout<<moves<<endl;
    }
    return 0;
}
