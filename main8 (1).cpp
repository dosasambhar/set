#include <iostream>
#include <vector>
#include <climits> // Include the header for INT_MIN
using namespace std;

int main() {
    int a[5] = {1, 2, 3, 5, 6};
    int n = 5;
    int b[4] = {4, 5, 6, 2};
    int m = 4;

    vector<int> ans;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                b[j] = INT_MIN; // Corrected this line
                ans.push_back(a[i]);
            }
        }
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}

