#include <bits/stdc++.h>

using namespace std;
int a[10000],n,jp;
void find()
{
    for(int i=1;i<=n;i++)
        for(int j=jp ; j>=i+1;j--)
        {
          if(a[j]+a[i]==0)
            {
              cout<<i<<" "<<j;
               return ;
            }
          if(a[j] < -a[i])
            {
              jp=j;
              break;
            }
        }
}
int main()
{
   freopen("3c2c.inp","r",stdin);
   freopen("3c2c.out","w",stdout);
   cin>>n;
   for(int i=1;i<=n;i++)
     cin>>a[i];
   jp=n;
   find();
   return 0;
 }
