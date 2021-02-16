#include <iostream>
using namespace std;

int main() {
   int a[10][10];
   int transpose[10][10];
   int row, column, i, j;

   cout << "Insert row and column : ";
   cin >> row >> column;

   cout << "Insert Element Matrix: " << endl;

   // Computing Element Matrix
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         cout << "Insert Element a" << i + 1 << j + 1 << ": ";
         cin >> a[i][j];
      }
   }

   // Printing Matrix
   cout << "Matrix: " << endl;
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         cout << " " << a[i][j];
         if (j == column - 1)
            cout << endl << endl;
      }
   }

   // Computing transpose of the matrix
   for (int i = 0; i < row; ++i)
      for (int j = 0; j < column; ++j) {
         transpose[j][i] = a[i][j];
      }

   // Printing the transpose
   cout << "Transpose of Matrix: " << endl;
   for (int i = 0; i < column; ++i)
      for (int j = 0; j < row; ++j) {
         cout << " " << transpose[i][j];
         if (j == row - 1)
            cout << endl << endl;
      }

   return 0;
}
