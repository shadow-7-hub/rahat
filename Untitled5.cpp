#include <bits/stdc++.h>
using namespace std;

#define op() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define pb push_back
#define pp for(int i=0;i<n;i++)
#define pp1 for(int i=1;i<=n;i++)
#define mm for(int i=n;i>0;i--)
#define mm1 for(int i=n;i>=0;i--)
#define ss1 size()
#define vv vector
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ss string
#define ff first
#define se second
#define bb begin()
#define ee end()
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i=2;i*i<=num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}




int main()
{

    op()
    ll n,i;
    cin>>n;
    int b[n+1];
    for( i=1;i<=n;i++)
    {
      cin>>b[i];

    }
     for( i=1;i<=n;i++)
    {

      if(b[i]!=i)
      {
          cout<<i<<" ";
      }
    }









return 0;

}

















