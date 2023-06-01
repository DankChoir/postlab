template <class T> 
class Array2D {
private:
	int r;
	int c;
	T** arr;

public:
    // TODO
    Array2D(int r, int c) : r(r), c(c) {
        arr = new T*[r];
        for (int i = 0; i < r; i++) {
            arr[i] = new T[c];
        }
    }
    Array2D(int r, int c, T init) : r(r), c(c) {
        arr = new T*[r];
        for (int i = 0; i < r; i++) {
            arr[i] = new T[c];
            for (int j = 0; j < c; j++) {
                arr[i][j] = init;
            }
        }
    }
    ~Array2D() {
        for (int i = 0; i < r; i++) {
            delete[] arr[i];
        }
        delete[] arr;
    }
    Array2D<T>* operator*(const Array2D<T>& other) {
        if (c != other.r) return NULL;
        Array2D<T>* result = new Array2D<T>(r, other.c);
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < other.c; j++) {
                (*result)[i][j] = 0;
                for (int k = 0; k < c; k++) {
                    (*result)[i][j] += arr[i][k] * other.arr[k][j];
                }
            }
        }
        return result;
    }
    T* operator[](int index) {
        return arr[index];
    }

    int getR() {return this->r;}
    int getC() {return this->c;}
    
    void disp() {
        for (int i = 0; i < this->r; i++) {
            for (int j = 0; j < this->c; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};
