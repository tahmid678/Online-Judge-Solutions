#include<iostream>
using namespace std;

int main()
{
    int t,n;
    int recipe[50];
    cin>>t;
    while(t--)
    {
        cin>>n;
        int min=1001;
        for(int i=0; i<n; i++)
        {
            cin>>recipe[i];
            if(recipe[i]<min)
                min=recipe[i];
        }
        int gcd = 0;
        while(min>=1)
        {
            bool isTrue=true;
            gcd=min;
            for(int i=0; i<n; i++)
            {
                if(recipe[i]%min!=0)
                {
                    isTrue=false;
                    break;
                }
            }
            if(isTrue)
                break;
            min--;
        }
        for(int i=0; i<n; i++)
        {
            cout<<recipe[i]/gcd<<" ";
        }
        cout<<endl;
    }

    return 0;
}
