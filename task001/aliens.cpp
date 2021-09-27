/*
ID: marcis.1
TASK: ride
LANG: C++                 
*/
#include <bits/stdc++.h>
#define BOILER_PLATE ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long int
using namespace std;
ll answ = 0;


void solve(ll n)
{
    // lld formatstring is important!
    printf("%lld\n", answ);
}

int main()
{
    BOILER_PLATE
    freopen("ride.in",  "r",  stdin);
    freopen("ride.out", "w",  stdout);
    ll T = 1;
    //scanf("%lld\n",&T);
    string s1, s2;


    while(T--)
    {
        cin >> s1 >> s2;
        ll sum1 = 1;
        ll sum2 = 1;
        for(ll i=0; i < s1.size(); ++i)
        {
            sum1*=(s1[i]-'A' + 1);
        }
        for(ll i=0; i < s2.size(); ++i)
        {
            sum2*=(s2[i]-'A' + 1);
        }
        if((sum1 % 47) == (sum2 % 47))
            cout << "GO\n";
        else 
            cout << "STAY\n";
    }

    return 0;
}
