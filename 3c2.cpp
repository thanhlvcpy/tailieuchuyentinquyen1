#include <bits/stdc++.h>

using namespace std;
int a[10000],n;
////int binarysearch(int k,int l, int r){
////    int s=(l+r)/2;
////    if(a[s]==k)
////        return s;
////    else if(k<a[s])
////        return binarysearch(k,l,s-1);
////        else
////        return binarysearch(k,s+1,r);
////
////}
int main()
{
   freopen("3c2.inp","r",stdin);
   freopen("3c2.out","w",stdout);
   cin>>n;
   for(int i=1;i<=n;i+4+)
        cin>>a[i];

//    for(int i=1;i<=n/2;i++){
//        int j=0-i;
//        cout<<i<<" "<<binarysearch(j,1,n)<<endl;
//    }
    cout<<binarysearch(2,1,n);

    return 0;
}
