#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, xk, yk, xq, yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;

        vector<pair<int, int> > dir = { {a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {b, -a}, {-b, a}, {-b, -a} };
        set<pair<int, int> > dirK, dirQ;

        for (auto d : dir)
        {
            int x = xk + d.first;
            int y = yk + d.second;

            dirK.insert(make_pair(x, y));

            x = xq + d.first;
            y = yq + d.second;

            dirQ.insert(make_pair(x, y));
        }
        int count = 0;

        for (auto pos : dirK)
        {
            if (dirQ.find(pos) != dirQ.end())
            {
                count++;
            }
        }

        cout << count << endl;
    }
}