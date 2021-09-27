/*
ID: marcis.1
TASK: friday
LANG: C++                 
*/
#include <bits/stdc++.h>
#define BOILER_PLATE                  \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long int
using namespace std;

void solve()
{
    ll answ[8] = {0};
    int32_t n;
    scanf("%d\n", &n);
    ll year = 1900;
    ll month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    ll curr_day = 1;

    // loop for years
    for (int32_t i = 0; i < n; ++i)
    {

        // loop for months
        for (int j = 0; j < 12; j++)
        {
            ll day = month[j];
            // leap years
            if ((day == 28) && (year % 4 == 0))
            {
                // is it a century year?
                if (year % 100 != 0)
                {
                    // no - 29 days in feb
                    day++;
                }
                else
                {
                    // yes - so does it divide by 400 ?
                    if (year % 400 == 0)
                    {
                        // super 'rare' case with century years being leap years
                        day++;
                    }
                }
            }

            // loop for days
            for (int k = 1; k <= day; ++k)
            {
                // the 13th of that month
                if (k == 13)
                {
                    answ[curr_day]++;
                }
                curr_day = ((curr_day + 1) & 7);
                if (!curr_day)
                    curr_day++;
            }
        }
        year++;
    }

    printf("%lld %lld", answ[6], answ[7]);
    for (int p = 1; p < 6; ++p)
    {
        printf(" %lld", answ[p]);
    }
    printf("\n");
}

int main()
{
    BOILER_PLATE

    freopen("friday.in", "r", stdin);
    freopen("friday.out", "w", stdout);
    ll T = 1;
    //scanf("%lld\n",&T);

    while (T--)
    {

        solve();
    }

    return 0;
}
