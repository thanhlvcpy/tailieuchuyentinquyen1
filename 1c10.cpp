#include <bits/stdc++.h>

using namespace std;
int a[10000],s[10000],n,k;
int main()
{
    freopen("1c10.inp","r",stdin);
    freopen("1c10.out","w",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    s[1]=a[1];
    for(int i=2;i<=n;i++)
        s[i]=s[i-1]+a[i];
    int jp=1;
    for(int i=1;i<=n;i++)
        for(int j=jp;j<=n;j++){
        if((s[j]-s[i-1])==k){
            cout<<i<<" "<<j<<": YEP!!";
            return 0;
        }

        if((s[j]-s[i-1])>k){
            jp=j;
            break;
        }
        if(jp==n){
            cout<<"NOPE";
            return 0;
        }

    }
    return 0;
}
