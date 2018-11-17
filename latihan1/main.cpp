#include <iostream>

using namespace std;

int PromptAndRead(); // inisialisasi fungsi
int Sum(int a,int b); // inisialisasi fungsi

int main () {
    int FirstNumber = PromptAndRead(); // pemanggilan fungsi
    int SecondNumber = PromptAndRead(); // pemanggilan fungsi
    int RangeSum = Sum(FirstNumber,SecondNumber); // pemanggilan fungsi
    cout << "The sum from" << FirstNumber
    << " to " << SecondNumber
    << " is " << RangeSum << endl;
    return 0;
}
int Sum(int a,int b) {
    int Total = 0 ;
    for (int i = a; i <= b; ++i) {
            Total += i;
    }
    return Total ;
}
// implementasi fungsi
// PromptAndRead(); prompt & extract next integer
int PromptAndRead() {
    cout << "Enter number (integer): ";
    int Respone;
    cin >> Respone;
    return Respone;
}
int sum(int a,int b) {
    int total = 0 ;
    for (int i = a; i <= b; ++i) {
        total += i;
    }
return total ;
}
