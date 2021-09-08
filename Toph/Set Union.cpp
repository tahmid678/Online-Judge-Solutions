#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> mySet;
    int n,m,num;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        cin>>num;
        mySet.insert(num);
    }
    for(int i=0; i<m; i++)
    {
        cin>>num;
        mySet.insert(num);
    }

    set<int>::iterator itr;
    itr=mySet.begin();
    cout<<*itr;
    for(itr++; itr!=mySet.end(); itr++)
    {
        cout<<" "<<*itr;
    }

    return 0;
}
