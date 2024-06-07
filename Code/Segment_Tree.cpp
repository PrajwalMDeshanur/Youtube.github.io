#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005;
vector<int> a(MAXN);
vector<int> seg(4 * MAXN);

// Build the segment tree
void build(int ind, int low, int high) {
    if (low == high) {
        seg[ind] = a[low];
        return;
    }
    int mid = (low + high) / 2;
    build(2 * ind + 1, low, mid);
    build(2 * ind + 2, mid + 1, high);
    seg[ind] = max(seg[2 * ind + 1], seg[2 * ind + 2]);
}

// Query the segment tree for the maximum in range [l, r]
int query(int ind, int low, int high, int l, int r) {
    if (low > r || high < l) { // completely outside the range
        return INT_MIN;
    }
    if (low >= l && high <= r) { // completely inside the range
        return seg[ind];
    }
    int mid = (low + high) / 2;
    int left = query(2 * ind + 1, low, mid, l, r);
    int right = query(2 * ind + 2, mid + 1, high, l, r);
    return max(left, right);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    build(0, 0, n - 1);
    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << query(0, 0, n - 1, l, r) << endl;
    }
    return 0;
}
