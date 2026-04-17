#include <bits/stdc++.h>
using namespace std;
#define all(x)          begin(x),end(x)
#define rall(x)         rbegin(x),rend(x)
#define set_bits(x)     __builtin_popcountll(x)
#define fraction(x)     fixed << setprecision(x)
#define all_sum(v)      accumulate(all(v), 0ll)
#define loop(i, a, b)   for(int i=(a); i<=(b); i++)
#define rloop(i, a, b)  for(int i=(a); i>=(b); i--)
#define input(arr)      for(auto &it: arr) cin>>it;
#define output(arr)     for(auto &it: arr) cout<<it<<" "; cout<<nl;
#define output_map(mp)  for(auto a : mp)cout<<a.first<<" "<<a.second<<endl;
#define debug1(x)       cout << (#x) << "=" << (x) << nl;
#define debug2(x, y)    cout <<(#x)<<"="<<(x)<<" "<<(#y)<<"="<<(y)<<nl;
#define ll              long long
#define ull             unsigned long long
#define int             long long
#define ld              long double
#define vin             vector<int>
#define pr              pair<int, int>
#define yes             cout << "YES\n"
#define no              cout << "NO\n"
#define pnl             cout << "\n"
#define nl              '\n'
const int inf = 1E18;
const int M = 998244353;

void dfs(string s, int src, vector<vin> &g)
{
    
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    int n = str.size();
    map<char, int> Map;
    for(char ch : str)
    {
        Map[ch]++;
    }

    // leaf nodes
    multiset<pair<int,int>> Set;    // (frequency, char)
    for(auto [ch, fre] : Map)
    {
        Set.emplace(fre, ch);
    }

    vector<vin> g(123);
    while(Set.size() != 1)
    {
        auto child_1 = Set.begin();     Set.erase(child_1);
        auto child_2 = Set.begin();     Set.erase(child_2);

        int par = child_1->first + child_2->first;

        g[par].push_back(child_1->second);
        g[child_1->second].push_back(par);

        g[par].push_back(child_2->second);
        g[child_2->second].push_back(par);

        Set.emplace(par, par);
        
    }

    dfs("", n, g);


    return 0;
}