   #assignment10-q1
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;  

    int nums[100];
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    unordered_set<int> hashSet;

    for (int i = 0; i < n; i++) {
        if (hashSet.count(nums[i])) {
            cout << "true";   
            return 0;
        }
        hashSet.insert(nums[i]);
    }

    cout << "false";  
    return 0;
}
