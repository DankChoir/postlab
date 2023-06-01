int** insertCol(int**& matrix, int r, int c, int* colArr, int col) {
    // TODO
    int** newMatrix = new int*[r];
    for(int i=0; i<r;i++){
        int* newRow = new int[c+1];
        for (int j = 0; j < c; j++) {
            if (j < col) {
                newMatrix[i][j] = matrix[i][j];
            } else {
                newMatrix[i][j+1] = matrix[i][j];
            }
        }
        newMatrix[i][col] = colArr[i];
    }
    
    for (int i = 0; i < r; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    return newMatrix;
}

bool deleteRow(int**& matrix, int r, int c, int row) {
    // TODO
    if (row < 0 || row >= r) return false;
    delete[] matrix[row];
    for (int i = row; i < r - 1; i++) {
        matrix[i] = matrix[i + 1];
    }
    if (--r == 0) {
        delete[] matrix;
        matrix = nullptr;
    }
    return true;
}

bool deleteCol(int**& matrix, int r, int c, int col) {
    if (col < 0 || col >= c) return false;
    for (int i = 0; i < r; i++) {
        for (int j = col; j < c - 1; j++) {
            matrix[i][j] = matrix[i][j + 1];
        }
    }
    if (--c == 0) {
        for (int i = 0; i < r; i++) {
            delete[] matrix[i];
        }
        delete[] matrix;
        matrix = nullptr;
    }
    return true;
}
