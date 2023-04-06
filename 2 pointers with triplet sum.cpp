#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a,b,n;
    cin>>n;
     int ar[n+2];
     for(i=0;i<n;i++)cin>>ar[i];
    for(i=0;i<n;i++)
    {
        unordered_set<int>s;
        for(j=i+1;j<n;j++)
        {
            int x=-(ar[i]+ar[j]);
            if(s.find(x)!=s.end()){
                cout<<x<<"( "<<ar[i]<<","<<ar[j]<<")"<<endl;
            }
            else s.insert(ar[j]);
        }
    }

}
