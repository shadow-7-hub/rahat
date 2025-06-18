
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

bool isPrime(int num)
{
    if (num <= 1) return false;
    for (int i=2; i*i<=num; ++i)
    {
        if (num % i == 0) return false;
    }
    return true;
}


int main() {
    op()
ll a;
cin>>a;
ss s;
cin>>s;
ll n;
cin>>n;
vv<ll>v(n);
pp
{

    cin>>v[i];
}
ll g=0;
ll m=0;
ll t=a;
sort(v.rbegin(),v.rend());
while(a!=0)
{
    if(v[g]<=a)
    {
        m++;
        a-=v[g];
    }
    else
    {
        g++;
    }
    if(g==n-1)
    {
        break;
    }
}

if(a==0)
{cout<<m<<endl;}
else
{cout<<"NOT POSSIBLE"<<endl;}


    return 0;
}

