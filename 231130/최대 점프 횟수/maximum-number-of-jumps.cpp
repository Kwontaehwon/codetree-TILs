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
        for(int j = 1 ; j <= arr[i]; j++){
            if(i + j >= n) break;
            dp[i + j] = max(dp[i+j], dp[i] + 1);
        }
    }
    cout << dp[n-1];
    return 0;
}