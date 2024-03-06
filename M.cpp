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
const ll N = 2e5 + 5, M = 1e3 + 5, mod = 1e9 + 7, OO = 0x3f3f3f3f;
// moves in grid
//int dx[] = {0, 0, 1, -1, 1, -1, -1, 1};
//int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};
// knight moves
//int dx[] = {2, 1, -1, -2, -2, -1, 1, 2};
//int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};
ll n, k;
ll getDiv (){
    ll div = 0, i;
    for(i = 1; i * i < n; i++)
        if(n % i == 0){
            if(i >= k) div++;
            if((n / i) >= k) div++;
        }

    return div;
} // O(sqrt(n))
void solve() {
    cin >> n >> k;
    cout << getDiv() << endl;
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