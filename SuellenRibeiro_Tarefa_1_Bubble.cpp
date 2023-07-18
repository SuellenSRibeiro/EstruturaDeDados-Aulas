#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 1, 7, 5, 9, 3};
    int n = 6;

    cout << "Array original: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    int i, j, aux;
    for (i = 0; i < n - 1; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            if (arr[i] > arr[j]) 
            {
                aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
         }
     }

    cout << "Array ordenado: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
