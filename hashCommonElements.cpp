    #assignment10-q2
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n1, n2;

    cin >> n1;
    int A[100];
    for (int i = 0; i < n1; i++) cin >> A[i];

    cin >> n2;
    int B[100];
    for (int i = 0; i < n2; i++) cin >> B[i];

    unordered_set<int> setA;
    for (int i = 0; i < n1; i++) {
        setA.insert(A[i]);
    }

    cout << "Common elements: ";
    for (int i = 0; i < n2; i++) {
        if (setA.count(B[i])) {
            cout << B[i] << " ";
        }
    }

    return 0;
}
