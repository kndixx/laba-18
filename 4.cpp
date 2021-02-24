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
    
    int min_i = 0;
    int max_i = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > a[max_i]) {
            max_i = i;
        }
		if (a[i] < a[min_i]) {
            min_i = i;
        }
    }
    
    int l = 0;
    int r = 0;
    
    if (min_i < max_i) {
        l = min_i;
        r = max_i;
    } else {
        l = max_i;
        r = min_i;
    }
    
    for (int i = l + 1; i <= r - 1; ++i) {
        a[i] = 0;
    }
    
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    
    return 0;
}