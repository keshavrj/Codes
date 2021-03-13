#include <bits/stdc++.h>
#define ll long long int
using namespace std;

long long solve(long long a, long long b) {
	long long aplusb = ((a << (32 - __builtin_clz(b))) + b);
	long long bplusa = ((b << (32 - __builtin_clz(a))) + a);
	return abs(aplusb - bplusa);
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
int n;
        cin >> n;
        vector<long long> A(n);
        for (int i = 0; i < n; i++) {
        	cin >> A[i];
        }
        long long ans = 0;
        if (n <= 100) {
        	for (int i = 0; i < n; i++) {
        		for (int j = i+1; j < n; j++) {
        			ans = max(ans, solve(A[i], A[j]));
        		}
        	}
        } else {
	        long long maxE = *max_element(A.begin(), A.end());
	        for (int i = 0; i < n; i++) {
	        	ans = max(ans, solve(A[i], maxE));
	        }
	    }
        cout << ans << endl;
    }
    return 0;
}



























