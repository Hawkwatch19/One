#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"
#define arrin(arr, n) for(ll i = 0; i < n; i++) cin>>arr[i]

#define vll vector<ll>


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        arrin(arr, n);
        bool flag = true;
        for(ll i = 0; i < n-2; i++)
        {
            if(arr[i] < 0)
            {
                flag = false;
                break;
            }
            ll tem = arr[i];
            arr[i] = 0;
            arr[i+1] -= tem*2;
            arr[i+2] -= tem;
        }
        if(arr[n-2] != 0 || arr[n-1] != 0)
        {
            flag = false;
        }
        if(flag)
            YES;
        else NO;
        
    }
    
    return 0;
}

