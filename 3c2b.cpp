#include <bits/stdc++.h>

using namespace std;
int a[10000],n;
int binarySearch(int k, int l, int r)
{
    if (l>r){
        return 0;
    }
    int s;
    s= (l+r)/2;
    if(a[s]==k)
        return s;
    else
        if(k>a[s])  return binarySearch(k,s+1,r);
        else  return binarySearch(k,l,s-1);

}
int main()
{
   freopen("3c2b.inp","r",stdin);
   freopen("3c2b.out","w",stdout);
   cin>>n;
   for(int i=1;i<=n;i++)
        cin>>a[i];
   for(int i=1;i<=n-1;i++)
        for(int j=i+1;j<=n;j++){
            int s=0-(a[i]+a[j]);
            if (binarySearch(s,1,n)>0){
                cout<<i<<" "<<j<<" "<<binarySearch(s,1,n)<<endl;
                return 0;
              }
        }
    cout<<"NOPE";

    return 0;
}
