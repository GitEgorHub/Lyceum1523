void bubblesort(vector<int> &a) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j + 1 < n; j++) {
      if (a[i] > a[i + 1]) {
        swap(a[i], a[i + 1]);
      }
    }
  }
}
