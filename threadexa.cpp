// #include <iostream>
// #include <thread>
// using namespace std;

// void thread1(){
//     cout<<"hello threa1"<<endl;
// }
// void thread2(){
//     cout<<"hello thread2"<<endl;
// }
// int main() {
//     thread t1(thread1);
//     thread t2(thread2);
//     t1.join();
//     t2.join();
//     cout<<"all threads have completed";
// }

// #include <iostream>
// #include <thread>
// #include<mutex>
// using namespace std;
// mutex m;
// int count=0;
// void increament1(){
//     for(int i=1;i<=10000;i++){
//         m.lock();
//         count++;
//         m.unlock();
//     }
// }
// void increament2(){
//     for(int i=1;i<=10000;i++){
//         m.lock();
//         count++;
//         m.unlock();
//     }
// }
// int main() {
//     thread t1(increament1);
//     thread t2(increament2);
//     t1.join();
//     t2.join();
//     cout<<"all threads have completed";
// }

// //synchronuzeation-one thread can access onemresource at a time.



#include <iostream>
#include <thread>

using namespace std;

const int MAX=100;
int A[MAX][MAX],B[MAX][MAX],C[MAX][MAX];
int r,c;
void addrow(int r){
    for(int j=0;j<c;j++){
        C[r][j]=A[r][j]+B[r][j];
    }
}

int main() {
    cin>>r>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){ 
            cin>>A[i][j];
        }
    }
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            cin >> B[i][j];
    thread t1[MAX];
    for(int i=0;i<r;i++){
        t1[i]=thread(addrow,i);

    }
    for(int i=0;i<r;i++){
        t1[i].join();
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<C[i][j]<<" ";
        }
    }
}


#include <iostream>
#include <thread>
using namespace std;

const int MAX = 100;

int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
int rowsA, colsA, rowsB, colsB;

void multiplyRow(int row) {
    for (int j = 0; j < colsB; ++j) {
        C[row][j] = 0;
        for (int k = 0; k < colsA; ++k) {
            C[row][j] += A[row][k] * B[k][j];
        }
    }
}

void printMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

int main() {
    cout << "Enter rows and columns for Matrix A: ";
    cin >> rowsA >> colsA;

    cout << "Enter rows and columns for Matrix B: ";
    cin >> rowsB >> colsB;

    if (colsA != rowsB) {
        cout << "Matrix multiplication not possible. Columns of A must equal rows of B." << endl;
        return 1;
    }

    cout << "Enter elements of Matrix A:" << endl;
    for (int i = 0; i < rowsA; ++i)
        for (int j = 0; j < colsA; ++j)
            cin >> A[i][j];

    cout << "Enter elements of Matrix B:" << endl;
    for (int i = 0; i < rowsB; ++i)
        for (int j = 0; j < colsB; ++j)
            cin >> B[i][j];

    // Create one thread per row
    thread threads[MAX];

    for (int i = 0; i < rowsA; ++i) {
        threads[i] = thread(multiplyRow, i);
    }

    for (int i = 0; i < rowsA; ++i) {
        threads[i].join();
    }

    cout << "Resultant Matrix C (A x B):" << endl;
    printMatrix(C, rowsA, colsB);

    return 0;
}
