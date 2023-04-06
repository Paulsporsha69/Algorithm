#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a,b,n;
    cin>>n;
     int ar[n+2];
     for(i=0;i<n;i++)cin>>ar[i];
     sort(ar,ar+n);
     int x;
     cin>>x;
    for(i=0;i<n;i++)


    {
            int j=i+1,k=n-1;

           while(j<k){ int sum=(ar[i]+ar[j]+ar[k]);
            if(sum==x){
                cout<<ar[i]<<","<<ar[j]<<","<<ar[k]<<endl;
            }

        if(sum>x)k--;
        else j++; }}
    }



