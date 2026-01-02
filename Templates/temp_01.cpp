/**
 *   author   : Shihab-glitch
 *   created  : 02.01.2026 17:50:42
**/
#include <bits/stdc++.h>
using namespace std;

void fio() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

#define chup '\n'

using ll = long long;
using sh = short;
using vi = vector<ll>;
using pi = pair<ll, ll>;

#define all(x)          (x).begin(), (x).end()
#define rall(x)         (x).rbegin(), (x).rend()
#define MIN(x)          *min_element(all(x))
#define MAX(x)          *max_element(all(x))
#define len(x)          ll(x.size())

#define fi              first
#define se              second
#define eb              emplace_back
#define mp              make_pair

#define FOR_1(a)               for (ll i = 0;     i < (ll)(a);  ++i)
#define FOR_2(i, a)            for (ll i = 0;     i < (ll)(a);  ++i)
#define FOR_3(i, a, b)         for (ll i = (a);   i < (ll)(b);  ++i)
#define FOR_4(i, a, b, step)   for (ll i = (a);   i < (ll)(b);  i += (step))
#define GET_FOR_4(_1, _2, _3, _4, NAME, ...) NAME
#define FOR(...)   GET_FOR_4(__VA_ARGS__, FOR_4, FOR_3, FOR_2, FOR_1)(__VA_ARGS__)

#define FOR_R_1(a)             for (ll _ = (a)-1; _ >= 0;       --_)
#define FOR_R_2(i, a)          for (ll i = (a)-1; i >= 0;       --i)
#define FOR_R_3(i, a, b)       for (ll i = (b)-1; i >= (a);     --i)
#define GET_FOR_3(_1, _2, _3, NAME, ...) NAME
#define FOR_R(...) GET_FOR_3(__VA_ARGS__, FOR_R_3, FOR_R_2, FOR_R_1)(__VA_ARGS__)

template <typename Container>
ll GCD(const Container &arr) {
    ll g = 0;
    for (auto x : arr) g = std::gcd(g, (ll)x);
    return g;
}

template <typename Container>
ll LCM(const Container &arr) {
    ll l = 1;
    for (auto x : arr) l = std::lcm(l, (ll)x);
    return l;
}

template <typename Container>
ll AND(const Container &arr) {
    if (arr.empty()) return 0;
    ll ans = *arr.begin();
    for (auto it = std::next(arr.begin()); it != arr.end(); ++it) ans &= *it;
    return ans;
}

template <typename Container>
ll OR(const Container &arr) {
    ll ans = 0;
    for (auto x : arr) ans |= x;
    return ans;
}

template <typename Container>
ll XOR(const Container &arr) {
    ll ans = 0;
    for (auto x : arr) ans ^= x;
    return ans;
}

template <typename Container>
optional<ll> SecondMax(Container arr) {
    if (arr.size() < 2) return {};
    std::set<ll> s(arr.begin(), arr.end());
    if (s.size() < 2) return {};
    auto it = s.rbegin();
    ++it;
    return *it;
}

template <typename Container>
optional<ll> SecondMin(Container arr) {
    if (arr.size() < 2) return {};
    std::set<ll> s(arr.begin(), arr.end());
    if (s.size() < 2) return {};
    auto it = s.begin();
    ++it;
    return *it;
}

inline ll SecondOfThree(ll a, ll b, ll c) {
    std::vector<ll> v = {a, b, c};
    std::sort(v.begin(), v.end());
    return v[1];
}

void solve() {
    
}

int main() {
    fio();
    
    int tt;
    if (!(cin >> tt)) return 0;
    FOR(tt) solve();

    return 0;
}