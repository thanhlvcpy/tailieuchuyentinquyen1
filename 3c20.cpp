#include <bits/stdc++.h>

using namespace std;
int a,b,m,n,d[10000],ks[2][10000];
int giaithua(int n)
{
    int k=1;
    for(int i=2;i<=n;i++)
        k=k*i;
    return k;
}
int main()
{
//    freopen("3c20.inp","r",stdin);
//    freopen("3c20.inp","w",stdout);
    cin>>a>>b>>m>>n;
    if(n>4*m)
        n=4*m+1;
    d[1]=b;
    for(int i=2;i<=n;i++)
        d[i]=(a*d[i-1]+b)%m+1;
    sort(d+1,d+n+1);
    int dem1=1;// so luong phan tu cua mang ks
    d[n+1]=-1;
    for(int i=1;i<=n;i++)
        for(int j=i+1;j<=n+1;j++)
          if(d[i]!=d[j])
          {
              ks[1][dem1]=d[i];
              ks[2][dem1]=j-i;
              dem1++;
              i=j;
          }
    dem1--;
    int dem = giaithua(dem1)/(giaithua(3)*giaithua(dem1-3));
    for(int i=1;i<=dem1-1;i++)
        for(int j=i+1;j<=dem1;j++)
        {
            if(ks[2][i]>2)
              dem++;
            if(ks[2][j]>2)
              dem++;
        }
    for(int i=1;i<=dem1;i++)
      if(ks[2][i]>2)
          dem++;
    cout<<dem; // day la ket qua cuoi cung

}
