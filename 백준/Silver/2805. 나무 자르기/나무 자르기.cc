#include <bits/stdc++.h>
using namespace std;

#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);                                                                \
    cout.tie(0);

int main() {
    long long N, M, H;
    cin >> N >> M;

    vector<long long> v(N, 0), sum(N, 0);
    for (long long i = 0; i < N; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    sum[0] = v[0];
    for (long long i = 1; i < N; i++) {
        sum[i] = sum[i - 1] + v[i];
    }

    long long mini = 0, maxi = v[N - 1], mid, h, answer = 0;

    while (mini <= maxi) {
        mid = (maxi + mini) / 2;
        long long index = lower_bound(v.begin(), v.end(), mid + 1) - v.begin();

        if (index == N) {
            h = 0;
        } else {
            h = sum[N - 1] - (index > 0 ? sum[index - 1] : 0) -
                (N - index) * mid;
        }

        if (h >= M) {
            mini = mid + 1;
            answer = mid;
        } else {
            maxi = mid - 1;
        }
    }

    cout << answer;

    return 0;
}