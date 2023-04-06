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
i=0;j=n-1;
int diff=INT_MAX;

    while(i<j)
    {
        int sum=ar[i]+ar[j];

        if(abs(sum-x)<diff)
        {
            a=i;
            b=j;
            diff=abs(sum-x);
        }

        if(sum>x)j--;
else i++;    }
cout<<ar[a]<<"  "<<ar[b]<<"    "<<ar[a]+ar[b]<<endl;

}
