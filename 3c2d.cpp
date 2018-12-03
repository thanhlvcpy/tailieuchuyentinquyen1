#include <bits/stdc++.h>

using namespace std;
int a[10000],n,jp;
void find()
{
    for(int i=1;i<=n-2;i++)
        for(int j=i+1;j<=n-1;j++)
            for(int k= jp;k>=j+1;k--)
            {
                if(a[j]+a[i]+a[k]==0)
                {
                  cout<<i<<" "<<j<<" "<<k;
                  return;
                }
                if(a[k] < -(a[i]+a[j]))
                {
                  jp=k;
                  break;
                }
            }
}
int main()
{
   freopen("3c2d.inp","r",stdin);
   freopen("3c2d.out","w",stdout);
   cin>>n;
   for(int i=1;i<=n;i++)
     cin>>a[i];
   jp=n;
   find();
   return 0;
 }
