#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
#define mp make_pair
#define pb push_back
#define MAXV 200100

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long int64;

int main()
{
    ios::sync_with_stdio(false);
    string s;
    int count = 0;
    while (cin >> s && s.size()) {
        if (count++)
            cout << " ";
        for (int i = 1; i < s.size(); i += 2)
            cout << s[i];
    }
    return 0;
}