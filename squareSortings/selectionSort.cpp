void selection_sort(vector<int> &a, int n) {
    for (int k = 0; k < n - 1; k++) {
        for (int j = k + 1; j < n; j++) {
            if (a[k] > a[j]) {
                swap(a[j], a[k]);
            }
        }
    }
}
