    #assignment10-q3
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    int nums[100];
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[nums[i]]++;
    }
    for (auto &p : freq) {
        cout << p.first << " → " << p.second << " times" << endl;
    }

    return 0;
}
