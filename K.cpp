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
const ll N = 1e3 + 5, M = 1e3 + 5, mod = 1e9 + 7, OO = 0x3f3f3f3f;
// moves in grid
//int dx[] = {0, 0, 1, -1, 1, -1, -1, 1};
//int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};
// knight moves
//int dx[] = {2, 1, -1, -2, -2, -1, 1, 2};
//int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};
void change(ll x, ll y){
    // base case
    if(!x || !y){
        cout << x << " " << y << endl;
        return;
    }
    //transition
    if(x >= 2 * y) change((x % (2 * y)), y);
    if(y >= 2 * x) change(x, (y % (2 * x)));
}
void solve() {
    ll x, y; cin >> x >> y;
    change(x, y);
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
// solved with hint!