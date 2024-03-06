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
struct freq{
    int a[30];
};
int n;
string s[N];
map<string, freq> mp;
bool cmp(string x, string y){
    loop(i, 0, 30){
        if(mp[x].a[i] > mp[y].a[i])
            return true; // then x is smallest
        if(mp[x].a[i] < mp[y].a[i])
            return false; // then y is bigger
    }
    return x > y; // if they equal
}
void solve() {
    cin >> n;
    loop(i, 0, n){
        cin >> s[i];
        for(auto it : s[i]){
            mp[s[i]].a[it - 97]++;
        }
    }
    
    sort(s, s + n, cmp);

    loop(i, 0, n){
        cout << s[i] << endl;
    }

}
int main() {
    fast();
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    //test{
        solve();
    //}
    return 0;
}