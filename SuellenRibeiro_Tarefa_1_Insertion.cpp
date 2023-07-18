#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 1, 7, 5, 9, 3};
    int n = 6;

    cout << "Array original: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

   int i, j, atual;
    for (i = 1; i < n; i++) {
        atual = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > atual) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = atual;
    }

    cout << "Array ordenado: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
