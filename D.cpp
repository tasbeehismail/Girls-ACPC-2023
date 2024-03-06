#include <iostream>
#include <numeric>
#include <vector>
#include <functional>
#include <algorithm>
#include <set>
#include <queue>
#include <unordered_set>
#include <string>
#include <cstring>
#include <bitset>
#include <cmath>
#include <map>
using namespace std;
typedef long long  ll;
typedef unsigned long long  ull;
typedef pair<int, int> pii;
typedef pair<int, pair<int, int>> edge;
#define endl '\n'
#define pi acos(-1)
#define loop(i, k, n) for(int i = k; i<n; i++)
#define loopr(i, k, n) for(ll i = k; i >= n; i--)
#define clr(v, d) memset(v, d, sizeof(v))
#define sz(s) (ll)s.size()
#define all(v) (v).begin(), (v).end()
#define sum(n) (n*(n+1)/2)
#define F first
#define S second
#define test int test; cin >> test; while(test--)
void fast(){
    cin.tie(nullptr);
    istream::sync_with_stdio(false);
}
const ll N = 25, M = 1e3 + 5, mod = 1e9 + 7, OO = 0x3f3f3f3f;
// moves in grid
//int dx[] = {0, 0, 1, -1, 1, -1, -1, 1};
//int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};
// knight moves
//int dx[] = {2, 1, -1, -2, -2, -1, 1, 2};
//int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};
void solve() {
    int n, l, r; cin >> n >> l >> r;
    n -= (l + r);
    if(r < l){
        int rr = r;
        r += min(l - rr, n); // 1
        n -= min(l - rr, n); //
    }else if(l < r){
        int ll = l;
        l += min(r - ll, n);
        n -= min(r - ll, n);
    }
    
    if(l == r) cout << (l + r) + (n / 2) << endl;
    else cout << (n / 2) << endl;
}
int main() {
    fast();
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    test{
        solve();
    }
    return 0;
}