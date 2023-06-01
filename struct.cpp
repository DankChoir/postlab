SCP** sortDatabase(SCP** arr, int n) {
    // Student answer
    for (int i = 0; i < n - 1; i++) {
        int minId = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j]->id < arr[minId]->id) {
                minId = j;
            }
        }
        SCP temp = *arr[i];
        *arr[i] = *arr[minId];
        *arr[minId] = temp;
    }
    return arr;
}
