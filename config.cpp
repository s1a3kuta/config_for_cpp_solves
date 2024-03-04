#ifdef LOCAL
#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#endif

#include "bits/stdc++.h"

#define F first
#define S second
#define pb push_back
#define all(a) a.begin(),a.end()
#define fr(i, a, b) for(auto i=(a); i<(b); i++)
#define sz(x) (int)x.size()
#define nl '\n'
using namespace std;

void SCONF() {
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
#else
    ios_base::sync_with_stdio(0);
    cin.tie(0);
#endif
}

using ll = long long;
using pi = pair<int, int>;
using vi = vector<int>;
using vpi = vector<pi>;

const int INF = 1e9;
const ll INFLL = 1e18;

signed main() {
    SCONF();
}
