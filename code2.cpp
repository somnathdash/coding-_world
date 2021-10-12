#include <bits/stdc++.h>
using namespace std;
#define endl ("\n")
#define pi (3.141592653589)
#define mod 1e9 + 7
#define int long long
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) cc.begin(), c.end()
#define mini(a, b, c) min(c, min(a, b))
#define minim(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
#define rep(i, n) for (int i = 0; i < n; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fast int mytestcase;
    cin >> mytestcase;
    while (mytestcase--)
    {
        vector<pair<int, float>> input; // pair(i,h)
    int n;
    cin >> n;
    int mi = 0;
    float maxheight = 0;
    for (int i = 0; i < n; i++)
    {
        int h;
        cin >> h;
        input.pb(mp(i + 1, h));
        if (h > maxheight)
        {
            maxheight = h;
            mi = i;
        }
    }
    float maxdiff1 = 0;
    int mv1 = 0;
    vector<pair<int, float>> vect;
    vect.pb(input[0]);
    int mc = input[0].ss;
    for (int i = 1; i <= mi; i++)
    {
        if (input[i].ss >= mc)
        {
            vect.pb(input[i]);
            mc = input[i].ss;
        }
    }
    for (int i = 0; i < vect.size()-1; i++)
    {
        maxdiff1 = 0;
        for (int j = i + 1; j < vect.size(); j++)
        {
            float diff = (vect[j].ss - vect[i].ss) / (vect[j].ff - vect[i].ff);
            if (diff >= maxdiff1)
            {
                maxdiff1 = diff;
                mv1 = max(mv1, (vect[j].ff - vect[i].ff));
            }
        }
    }
    float maxdiff2 = 0;
    int mv2 = 0;
    vect.clear();
    mc = input[n-1].ss;
    vect.pb(input[n-1]);
    
    for (int i = 0; i < vect.size()-1; i++)
    {
        maxdiff2 = 0;
        for (int j = i + 1; j < vect.size(); j++)
        {
            float diff = (vect[j].ss - vect[i].ss) / (vect[i].ff - vect[j].ff);
            if (diff >= maxdiff2)
            {
                maxdiff2 = diff;
                mv2 = max(mv2, (vect[i].ff - vect[j].ff));
            }
        }
    }
    cout << max(mv1, mv2) << endl;
    }

    return 0;
}
