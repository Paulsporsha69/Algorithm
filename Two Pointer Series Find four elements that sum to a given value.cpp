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
        for(j=i+1;j<n;j++)


    {
            int l=j+1,k=n-1;

           while(l<k){ int sum=(ar[i]+ar[j]+ar[k]+ar[l]);
            if(sum==x){
                cout<<ar[i]<<","<<ar[j]<<","<<ar[k]<<","<<ar[l]<<endl;
            }

        if(sum>x)k--;
        else l++; }}
    }




