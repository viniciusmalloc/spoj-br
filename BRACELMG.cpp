#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
#define mp make_pair
#define pb push_back
#define MAXV 10100

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;

int main()
{
    ios::sync_with_stdio(false);
    int m;
    cin >> m;
    string a, b, c, d;
    while (m--) {
        cin >> a >> b;
        c = a, d = b;
        reverse(c.begin(), c.end());
        while (b.size() < 1000)
            b += d;
        if ((b.find(a) != string::npos) || (b.find(c) != string::npos))
            cout << "S\n";
        else
            cout << "N\n";
    }
    return 0;
}
