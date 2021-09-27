/*
ID: marcis.1
TASK: beads
LANG: C++                 
*/
#include <bits/stdc++.h>
#define BOILER_PLATE                  \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long int
using namespace std;

#define maxN 351
char mas[maxN];

void solve()
{
    ifstream infile("beads.in");
    ofstream outfile("beads.out");
    memset(mas, 0, sizeof(mas));
    uint32_t answ = 0;
    uint32_t n;

    infile >> n;

    char c;
    bool noncyclic = false;
    string s;
    infile >> s;
    for (uint32_t i = 0; i < n; ++i)
    {
        c = s[i];
        if (c != 'w')
            noncyclic = true;
        mas[i] = c;
    }

    if (noncyclic == false)
    {
        outfile << n << endl;
        return;
    }

    string ss1, ss2;
    for (int i = 1; i <= n; ++i)
    {
        ss1
    }

    outfile << answ << endl;
}

int main()
{
    BOILER_PLATE

    solve();

    return 0;
}
