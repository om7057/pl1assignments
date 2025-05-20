#include <iostream>

using namespace std;

class MAT {
private:
    int rows;
    int cols;
    double** data;

public:
    MAT(int m, int n) : rows(m), cols(n) {
        data = new double*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new double[cols];
        }
    }

    
    double& operator()(int i, int j) {
        return data[i][j];
    }

    double operator()(int i, int j) const {
        return data[i][j];
    }

    MAT operator+(const MAT& other) const {
        if (rows != other.rows || cols != other.cols) {
            throw      runtime_error("Matrix dimensions do not match for addition.");
        }

        MAT result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result(i, j) = data[i][j] + other(i, j);
            }
        }
        return result;
    }

    MAT operator*(const MAT& other) const {
        if (cols != other.rows) {
            throw       runtime_error("Matrix dimensions are not compatible for multiplication.");
        }

        MAT result(rows, other.cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                result(i, j) = 0; 
                for (int k = 0; k < cols; ++k) {
                    result(i, j) += data[i][k] * other(k, j);
                }
            }
        }
        return result;
    }

    int getRows() const {
        return rows;
    }

    int getCols() const {
        return cols;
    }

    ~MAT() {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }
};

int main() {
    int rows1, cols1, rows2, cols2;

          cout << "Enter the number of rows for Matrix 1: ";
          cin >> rows1;
          cout << "Enter the number of columns for Matrix 1: ";
          cin >> cols1;

    MAT mat1(rows1, cols1);
          cout << "Enter elements for Matrix 1:" <<       endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
                  cin >> mat1(i, j);
        }
    }

          cout << "Enter the number of rows for Matrix 2: ";
          cin >> rows2;
          cout << "Enter the number of columns for Matrix 2: ";
          cin >> cols2;

    MAT mat2(rows2, cols2);
          cout << "Enter elements for Matrix 2:" <<       endl;
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
                  cin >> mat2(i, j);
        }
    }

    MAT sum = mat1 + mat2;
    MAT product = mat1 * mat2;

          cout << "Matrix 1 + Matrix 2:" <<       endl;
    for (int i = 0; i < sum.getRows(); ++i) {
        for (int j = 0; j < sum.getCols(); ++j) {
                  cout << sum(i, j) << " ";
        }
              cout <<       endl;
    }

          cout << "Matrix 1 * Matrix 2:" <<       endl;
    for (int i = 0; i < product.getRows(); ++i) {
        for (int j = 0; j < product.getCols(); ++j) {
                  cout << product(i, j) << " ";
        }
              cout <<       endl;
    }

    return 0;
}
