#include <iostream>
using namespace std;
#include <vector>

int main() {
    int n;
    
    cin >> n;
    
    vector<int> a(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    int odd_ind = -1;
    
    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 != 0) {
            odd_ind = i;
        }
    }
    
    if (odd_ind != -1) {
        for (int i = 0; i < n; ++i) {
            if (a[i] % 2 != 0) {
                a[i] += a[odd_ind];
            }
        }
    }
    
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    
    return 0;
}