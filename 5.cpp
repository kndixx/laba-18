#include <iostream>
using namespace std;
#include <vector>

int main() {
    int n;
    
    cin >> n;
    
    vector<int> a(n);
    vector<int> b(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    int filled = 0;
    for (int i = 1; i < n; ++i) {
        b[i - 1 + filled] = a[i];
        if ((i == n - 1 && a[i] < a[0]) || (a[i] < a[0] && a[0] < a[i + 1])) {
            b[i] = a[0];
            filled = 1;
        }
    }
    
    for (int i = 0; i < n; ++i) {
        cout << b[i] << " ";
    }
    
    return 0;
}