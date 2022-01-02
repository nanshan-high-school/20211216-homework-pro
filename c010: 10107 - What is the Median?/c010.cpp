#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> num;
    int n;
    while (cin >> n) {
        if (num.empty()) {
            num.push_back(n);
        } else {
            num.insert(lower_bound(num.begin(), num.end(), n), n);
        }

        int mid = (num.size() - 1) / 2;
        if (num.size() % 2) {
            printf("%d\n", num[mid]);
        } else {
            printf("%d\n", (num[mid] + num[mid+1]) / 2);
        }
    }
} 
