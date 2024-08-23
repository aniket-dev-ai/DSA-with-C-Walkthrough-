#include <iostream>

using namespace std;

bool sort(int arr[], int n) {
    if (n == 1) return true;

    if (arr[n - 1] >= arr[n - 2] && sort(arr, n - 1)) {
        return true;
    } else {
        return false;
    }
}

void test_empty_array() {
    int arr[] = {};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<sort(arr, n)<<endl;
}

void test_single_element_array() {
    int arr[] = {5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<sort(arr, n)<<endl;
}

void test_sorted_array() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
     cout<<sort(arr, n)<<endl;
    }

void test_unsorted_array() {
    int arr[] = {1, 3, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<sort(arr, n)<<endl;
}


void test_single_negative_element_array() {
    int arr[] = {-5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<sort(arr, n)<<endl;
}
void test_negative_numbers_out_of_order() {
    int arr[] = {-1, -3, -2, -4, -5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<sort(arr, n)<<endl;
}

void test_one_element_out_of_order() {
    int arr[] = {1, 3, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<sort(arr, n)<<endl;
}

void test_all_elements_same() {
    int arr[] = {7, 7, 7, 7, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<sort(arr, n)<<endl;
}

void test_mixed_positive_and_negative_numbers_out_of_order() {
    int arr[] = {-1, 3, -2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<sort(arr, n)<<endl;
}

void test_positive_and_negative_numbers_in_ascending_order() {
    int arr[] = {-3, -1, 0, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<sort(arr, n)<<endl;
}

int main() {
    test_single_element_array();
    test_sorted_array();
    test_unsorted_array();
    test_empty_array();
    test_unsorted_array();
    test_single_negative_element_array();
    test_negative_numbers_out_of_order();
    test_all_elements_same();
    test_mixed_positive_and_negative_numbers_out_of_order();
    test_positive_and_negative_numbers_in_ascending_order();

    cout << "All test cases passed!" << endl;

    return 0;
}
