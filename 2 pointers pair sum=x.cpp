#include<bits/stdc++.h>
using namespace std;

int main()
{

    int l,r,i,j,n;
    cin>>n;
    int ar[n+2];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int x;
    cin>>x;
    int a,b;
    sort(ar,ar+n);

    while(i<j)
    {
        int sum=ar[i]+ar[j];
        if(sum==x)
        {
            a=ar[i];
            b=ar[j];
        }
        if(sum>x)j--;
else i++;    }
cout<<a<<"  "<<b<<endl;
cout<<sum<<endl;
}
