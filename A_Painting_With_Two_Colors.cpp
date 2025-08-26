#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long 
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pn(a) cout<<a<<"\n"
#define fo(x,n) for(int i=x; i<n; i++)
#define w(t) while(t--)
#define el cout<<endl;
using namespace std;
void solve ()
{
   ll n,a,b;
   cin>>n>>a>>b;
   if(n%2==1&&a%2==1&&b%2==1)yes;
   else if(n==a&&n==b) yes;
   else if(n%2==0&&b%2==0&&a<=b)yes;
   else if(n%2==1&&b%2==1&&a<=b)yes;
   else if(n==b)yes;
   else if(n%2==0&&a%2==0&&b%2==0)yes;
   else no;

}
signed main ()
 {
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int t=1;
  cin>>t;
  w(t)
  {
     solve();
  }

return 0;
}
