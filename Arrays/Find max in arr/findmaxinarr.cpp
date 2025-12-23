#include <iostream> 
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;

        long long arr[N];
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        long long mx = arr[0];
        for (int i = 1; i < N; i++) {
            mx = max(mx, arr[i]);
        }

        cout << mx << endl;
    }

    return 0;
}
