#include <iostream>
#include <string.h>
using namespace std;

int main (){
    char kata [50];
    int i, n;

    cout << "Program mengecek kata Palindrome" << endl;
    cout << "Masukkan kata : ";
    cin >> kata;

    n = strlen(kata);
    for (i=0; i<n; i++){

        if (kata[i] != kata[n-1-i]){
        i = n;
        cout << "Kata tersebut adalah bukan kata palindrome" << endl;
        
            } else {
               i = n;
               cout << "Kata tersebut adalah palindrom" << endl;
       }
    } 
}


