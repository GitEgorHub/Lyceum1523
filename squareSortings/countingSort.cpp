/*
  Обратите внимание, что в данной реализации предполагается то, что все числа неотрицательные!
*/

void count_sort(vector<int> &a, int n) { 
    int c[A]{};

    for (int i = 0; i < n; i++) {
        c[a[i]]++;
	}

    int k = 0;
    for (int i = 0; i < A; i++) {
        while (c[i]--) {
            a[k++] = i;
		}
	}
}
