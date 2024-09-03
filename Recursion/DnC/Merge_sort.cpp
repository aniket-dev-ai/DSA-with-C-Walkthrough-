#include <iostream>
using namespace std;

void merge(int arr[], int s, int e, int mid) {
    int l = mid - s + 1;
    int r = e - mid;

    int *lA = new int[l];
    int *rA = new int[r];

    for (int i = 0; i < l; i++) lA[i] = arr[s + i];
    for (int i = 0; i < r; i++) rA[i] = arr[mid + 1 + i];

    int i = 0, j = 0, mai = s;

    while (i < l && j < r) {
        if (lA[i] <= rA[j]) {
            arr[mai++] = lA[i++];
        } else {
            arr[mai++] = rA[j++];
        }
    }

    while (i < l) {
        arr[mai++] = lA[i++];
    }

    while (j < r) {
        arr[mai++] = rA[j++];
    }

    delete[] lA;
    delete[] rA;
}

void mergesort(int arr[], int s, int e) {
    if (s >= e) return;

    int mid = s + (e - s) / 2;

    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, e);
    merge(arr, s, e, mid);
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array is: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    mergesort(arr, 0, n - 1);

    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
   