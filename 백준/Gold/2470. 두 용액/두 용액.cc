#include <bits/stdc++.h>
using namespace std;

#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);                                                                \
    cout.tie(0);

bool compare(long long a, long long b) {
    if (abs(a) < abs(b)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    FASTIO;

    int N;
    cin >> N;

    vector<long long> v(N, 0);

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), compare);

    int index, diff = 2000000000;

    for (int i = 0; i < N - 1; i++) {
        if (abs(v[i] + v[i + 1]) < diff) {
            index = i;
            diff = abs(v[i] + v[i + 1]);
        }
    }

    if (v[index] > v[index + 1]) {
        cout << v[index + 1] << ' ' << v[index];
    } else {
        cout << v[index] << ' ' << v[index + 1];
    }

    return 0;
}