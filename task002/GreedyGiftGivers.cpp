/*
ID: marcis.1
TASK: gift1
LANG: C++                 
*/
#include <bits/stdc++.h>
#define BOILER_PLATE                  \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long int
using namespace std;

int main()
{
    ifstream infile("gift1.in");
    ofstream outfile("gift1.out");
    ll n;
    map<string, ll> m;
    string s;
    infile >> n;
    vector<string> v;
    for (ll i = 0; i < n; ++i)
    {
        infile >> s;
        m.insert({s, 0});
        v.push_back(s);
    }

    ll money, divider, given, remainder;
    for (ll i = 0; i < n; ++i)
    {
        infile >> s;
        infile >> money >> divider;
        if (divider)
        {
            given = money / divider;
            remainder = money % divider;
        }
        else
        {
            remainder = 0;
            given = 0;
        }

        auto it = m.find(s);
        it->second -= money;
        it->second += remainder;

        for (ll k = 0; k < divider; ++k)
        {
            infile >> s;
            it = m.find(s);
            it->second += given;
        }
    }
    for (ll i = 0; i < n; ++i)
    {
        s = v[i];
        auto itr = m.find(s);
        outfile << itr->first << " " << itr->second << "\n";
    }

    return 0;
}
