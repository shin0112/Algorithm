#include <bits/stdc++.h>
using namespace std;

#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);                                                                \
    cout.tie(0);

int main() {
    FASTIO;

    int N;
    cin >> N;

    vector<int> v(N, 0), sum(N, 0);

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < N; i++) {
        sum[i] = v[i] * (N - i);
    }
    sort(sum.begin(), sum.end());

    cout << sum[N - 1];

    return 0;
}