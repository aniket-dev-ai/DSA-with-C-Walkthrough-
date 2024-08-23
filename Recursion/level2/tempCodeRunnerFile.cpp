
void test_descending_order_array() {
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    assert(sort(arr, n) == false);
}
