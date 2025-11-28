     #assignment10-q4
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] == 1) {
            cout << arr[i];
            return 0;
        }
    }

    cout << "No non-repeating element";
    return 0;
}
