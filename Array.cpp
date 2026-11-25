#include <iostream>
using namespace std;

int main() {
    int n, k;

    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter number of rotations: ";
    cin >> k;

    k = k % n;

    for (int r = 0; r < k; r++) {
        int last = a[n - 1];

        for (int i = n - 1; i > 0; i--)
            a[i] = a[i - 1];

        a[0] = last;
    }

    cout << "Array after rotation: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
