#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(int n, int k)
{
    int time_left = 240 -k;
    int count =0, solve_time =0;

    for (int i=0;i<n;i++)
    {
        solve_time += 5*(i+1);
        if(solve_time>time_left){
            break;
        }
        count++;
    }

  cout<<count;

}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   int n,k;
   cin>>n>>k;
   solve(n,k);
   return 0;
}