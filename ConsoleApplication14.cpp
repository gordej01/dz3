//#include <iostream>
//
//using namespace std;
//
//
//void addColumn(int** matrix, int rows, int cols, int* column, int position) {
//    
//    if (position > cols || position < 0) {
//        cerr << "Помилка: позиція виходить за межі масиву." << endl;
//        return;
//    }
//
//    
//    for (int i = 0; i < rows; ++i) {
//        int* newRow = new int[cols + 1];
//
//        
//        for (int j = 0; j < position; ++j) {
//            newRow[j] = matrix[i][j];
//        }
//
//        
//        newRow[position] = column[i];
//
//        
//        for (int j = position; j < cols; ++j) {
//            newRow[j + 1] = matrix[i][j];
//        }
//
//        
//        delete[] matrix[i];
//        matrix[i] = newRow;
//    }
//}
//
//
//void printMatrix(int** matrix, int rows, int cols) {
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//
//    system("chcp 1251>null");
//   
//    int rows = 3, cols = 3;
//
//    
//    int** matrix = new int* [rows];
//    for (int i = 0; i < rows; ++i) {
//        matrix[i] = new int[cols];
//        for (int j = 0; j < cols; ++j) {
//            matrix[i][j] = i * cols + j + 1;
//        }
//    }
//
//    cout << "Початкова матриця:" << endl;
//    printMatrix(matrix, rows, cols);
//
//    int newColumn[] = { 10, 11, 12 };
//
//   
//    int position = 1;
//
//    addColumn(matrix, rows, cols, newColumn, position);
//
//   
//    cols += 1;
//
//    cout << "Матриця після додавання стовпчика:" << endl;
//    printMatrix(matrix, rows, cols);
//
//    
//    for (int i = 0; i < rows; ++i) {
//        delete[] matrix[i];
//    }
//    delete[] matrix;
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//void removeColumn(int** arr, int& rows, int& cols, int colToRemove) {
//    
//    if (colToRemove < 0 || colToRemove >= cols) {
//        cout << "Невірний номер стовпця!" << endl;
//        return;
//    }
//
//    
//    for (int i = 0; i < rows; i++) {
//        for (int j = colToRemove; j < cols - 1; j++) {
//            arr[i][j] = arr[i][j + 1];
//        }
//    }
//
//    
//    cols--;
//}
//
//int main() {
//    system("chcp 1251>null");
//
//    int rows = 3, cols = 4;
//
//    int** arr = new int* [rows];
//    for (int i = 0; i < rows; i++) {
//        arr[i] = new int[cols];
//    }
//
//    
//    int count = 1;
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            arr[i][j] = count++;
//        }
//    }
//
//  
//    cout << "Масив до видалення стовпця:" << endl;
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    
//    int colToRemove = 2;
//    removeColumn(arr, rows, cols, colToRemove);
//
//    
//    cout << "Масив після видалення стовпця:" << endl;
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    
//    for (int i = 0; i < rows; i++) {
//        delete[] arr[i];
//    }
//    delete[] arr;
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//void shiftRows(int matrix[][100], int M, int N, int shifts, bool direction) {
//    shifts %= M;  
//    if (!direction) { 
//        shifts = M - shifts;  
//    }
//
//    
//    while (shifts--) {
//        int temp[100];  
//        for (int j = 0; j < N; ++j) {
//            temp[j] = matrix[M - 1][j];
//        }
//
//        
//        for (int i = M - 1; i > 0; --i) {
//            for (int j = 0; j < N; ++j) {
//                matrix[i][j] = matrix[i - 1][j];
//            }
//        }
//
//        
//        for (int j = 0; j < N; ++j) {
//            matrix[0][j] = temp[j];
//        }
//    }
//}
//
//
//void shiftCols(int matrix[][100], int M, int N, int shifts, bool direction) {
//    shifts %= N;  
//    if (!direction) {  
//        shifts = N - shifts;
//    }
//
//    
//    while (shifts--) {
//        int temp[100]; 
//       
//        for (int i = 0; i < M; ++i) {
//            temp[i] = matrix[i][N - 1];
//        }
//
//        
//        for (int j = N - 1; j > 0; --j) {
//            for (int i = 0; i < M; ++i) {
//                matrix[i][j] = matrix[i][j - 1];
//            }
//        }
//
//        
//        for (int i = 0; i < M; ++i) {
//            matrix[i][0] = temp[i];
//        }
//    }
//}
//
//
//void printMatrix(int matrix[][100], int M, int N) {
//    for (int i = 0; i < M; ++i) {
//        for (int j = 0; j < N; ++j) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//    int M, N;
//    cout << "Enter number of rows (M): ";
//    cin >> M;
//    cout << "Enter number of columns (N): ";
//    cin >> N;
//
//    
//    int matrix[100][100];
//    cout << "Enter elements of the matrix:" << endl;
//    for (int i = 0; i < M; ++i) {
//        for (int j = 0; j < N; ++j) {
//            cin >> matrix[i][j];
//        }
//    }
//
//    int shifts;
//    cout << "Enter number of shifts: ";
//    cin >> shifts;
//
//    
//    bool rowDirection, colDirection;
//    cout << "Shift rows? (0 for no, 1 for yes): ";
//    cin >> rowDirection;
//    cout << "Shift columns? (0 for no, 1 for yes): ";
//    cin >> colDirection;
//
//    if (rowDirection) {
//        shiftRows(matrix, M, N, shifts, true); 
//    }
//    if (colDirection) {
//        shiftCols(matrix, M, N, shifts, true);  
//    }
//
//    cout << "Matrix after shifting:" << endl;
//    printMatrix(matrix, M, N);
//
//    return 0;
//}

//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//
//using namespace std;
//
//int generateRandomNumber() {
//    return rand() % 21 - 10;
//}
//
//void fillArray(int** array, int rows, int cols) {
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            array[i][j] = generateRandomNumber();
//        }
//    }
//}
//
//void printArray(int** array, int rows, int cols) {
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cout << array[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//bool contains(int* array, int size, int value) {
//    for (int i = 0; i < size; ++i) {
//        if (array[i] == value) {
//            return true;
//        }
//    }
//    return false;
//}
//
//void uniqueValues(int** A, int rowsA, int colsA, int** B, int rowsB, int colsB, int** C, int rowsC, int colsC, int*& result, int& resultSize) {
//    int temp[1000];
//    int tempSize = 0;
//
//    for (int i = 0; i < rowsA; ++i) {
//        for (int j = 0; j < colsA; ++j) {
//            if (!contains(temp, tempSize, A[i][j])) {
//                temp[tempSize++] = A[i][j];
//            }
//        }
//    }
//
//    for (int i = 0; i < rowsB; ++i) {
//        for (int j = 0; j < colsB; ++j) {
//            if (!contains(temp, tempSize, B[i][j])) {
//                temp[tempSize++] = B[i][j];
//            }
//        }
//    }
//
//    for (int i = 0; i < rowsC; ++i) {
//        for (int j = 0; j < colsC; ++j) {
//            if (!contains(temp, tempSize, C[i][j])) {
//                temp[tempSize++] = C[i][j];
//            }
//        }
//    }
//
//    result = new int[tempSize];
//    resultSize = tempSize;
//    for (int i = 0; i < tempSize; ++i) {
//        result[i] = temp[i];
//    }
//}
//
//void commonValues(int** A, int rowsA, int colsA, int** C, int rowsC, int colsC, int*& result, int& resultSize) {
//    int temp[1000];
//    int tempSize = 0;
//
//    for (int i = 0; i < rowsA; ++i) {
//        for (int j = 0; j < colsA; ++j) {
//            for (int k = 0; k < rowsC; ++k) {
//                for (int l = 0; l < colsC; ++l) {
//                    if (A[i][j] == C[k][l] && !contains(temp, tempSize, A[i][j])) {
//                        temp[tempSize++] = A[i][j];
//                    }
//                }
//            }
//        }
//    }
//
//    result = new int[tempSize];
//    resultSize = tempSize;
//    for (int i = 0; i < tempSize; ++i) {
//        result[i] = temp[i];
//    }
//}
//
//void negativeValues(int** A, int rowsA, int colsA, int** B, int rowsB, int colsB, int** C, int rowsC, int colsC, int*& result, int& resultSize) {
//    int temp[1000];
//    int tempSize = 0;
//
//    for (int i = 0; i < rowsA; ++i) {
//        for (int j = 0; j < colsA; ++j) {
//            if (A[i][j] < 0 && !contains(temp, tempSize, A[i][j])) {
//                temp[tempSize++] = A[i][j];
//            }
//        }
//    }
//
//    for (int i = 0; i < rowsB; ++i) {
//        for (int j = 0; j < colsB; ++j) {
//            if (B[i][j] < 0 && !contains(temp, tempSize, B[i][j])) {
//                temp[tempSize++] = B[i][j];
//            }
//        }
//    }
//
//    for (int i = 0; i < rowsC; ++i) {
//        for (int j = 0; j < colsC; ++j) {
//            if (C[i][j] < 0 && !contains(temp, tempSize, C[i][j])) {
//                temp[tempSize++] = C[i][j];
//            }
//        }
//    }
//
//    result = new int[tempSize];
//    resultSize = tempSize;
//    for (int i = 0; i < tempSize; ++i) {
//        result[i] = temp[i];
//    }
//}
//
//int main() {
//    system("chcp 1251>null");
//
//    srand(time(0)); 
//
//    int rowsA, colsA, rowsB, colsB, rowsC, colsC;
//    cout << "Введіть кількість рядків і стовпців для масиву A: ";
//    cin >> rowsA >> colsA;
//    cout << "Введіть кількість рядків і стовпців для масиву B: ";
//    cin >> rowsB >> colsB;
//    cout << "Введіть кількість рядків і стовпців для масиву C: ";
//    cin >> rowsC >> colsC;
//
//    int** A = new int* [rowsA];
//    int** B = new int* [rowsB];
//    int** C = new int* [rowsC];
//    for (int i = 0; i < rowsA; ++i) A[i] = new int[colsA];
//    for (int i = 0; i < rowsB; ++i) B[i] = new int[colsB];
//    for (int i = 0; i < rowsC; ++i) C[i] = new int[colsC];
//
//    fillArray(A, rowsA, colsA);
//    fillArray(B, rowsB, colsB);
//    fillArray(C, rowsC, colsC);
//
//    cout << "Масив A:" << endl;
//    printArray(A, rowsA, colsA);
//    cout << "Масив B:" << endl;
//    printArray(B, rowsB, colsB);
//    cout << "Масив C:" << endl;
//    printArray(C, rowsC, colsC);
//
//    int* uniqueResult = nullptr;
//    int uniqueSize = 0;
//    uniqueValues(A, rowsA, colsA, B, rowsB, colsB, C, rowsC, colsC, uniqueResult, uniqueSize);
//
//    int* commonResult = nullptr;
//    int commonSize = 0;
//    commonValues(A, rowsA, colsA, C, rowsC, colsC, commonResult, commonSize);
//
//    int* negativeResult = nullptr;
//    int negativeSize = 0;
//    negativeValues(A, rowsA, colsA, B, rowsB, colsB, C, rowsC, colsC, negativeResult, negativeSize);
//
//    
//    cout << "\nОдновимірний масив з унікальними значеннями для A, B, C:" << endl;
//    for (int i = 0; i < uniqueSize; ++i) {
//        cout << uniqueResult[i] << " ";
//    }
//
//    cout << "\nОдновимірний масив з спільними значеннями для A і C:" << endl;
//    for (int i = 0; i < commonSize; ++i) {
//        cout << commonResult[i] << " ";
//    }
//
//    cout << "\nОдновимірний масив з від'ємними значеннями для A, B, C:" << endl;
//    for (int i = 0; i < negativeSize; ++i) {
//        cout << negativeResult[i] << " ";
//    }
//
//    
//    delete[] uniqueResult;
//    delete[] commonResult;
//    delete[] negativeResult;
//    for (int i = 0; i < rowsA; ++i) delete[] A[i];
//    for (int i = 0; i < rowsB; ++i) delete[] B[i];
//    for (int i = 0; i < rowsC; ++i) delete[] C[i];
//    delete[] A;
//    delete[] B;
//    delete[] C;
//
//    return 0;
//}

