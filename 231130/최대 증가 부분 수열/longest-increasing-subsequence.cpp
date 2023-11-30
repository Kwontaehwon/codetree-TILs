#include <iostream>

using namespace std;

int arr[1005];
int dp[1005];

int main() {
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    for(int i = 0 ; i < n ; i++){
        if(dp[i] < 1) dp[i] = 1;
        int cur = arr[i];
        for(int j = i + 1; j < n ; j++){
            if(arr[j] > cur && dp[j] < dp[i] + 1) dp[j] = dp[i] + 1;
        }
    }
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        ans = max(ans, dp[i]);
    }
    cout << ans;
    return 0;
}