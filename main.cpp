//Name:Julia Osei
//ID: 10965754
//DCIT 104

#include <iostream>
using namespace std;

bool PrimeCheck(int num) {
    for (int i = 2; i < num; i++) {
        if (num % i == 0 ) {
            return false;
        }
    }
    return true;
}

bool PrimeNum = false;

int main() {
    int sum = 2;
    int avg = 2;
    cout << "Find the sum of even numbers less than: "<<"\n";
    int j;
    cin >> j;
    for (int k = 3; k < j; k++) {
        PrimeNum = PrimeCheck(k);
        if (PrimeNum) {
            sum = sum + k;
            avg = sum / 1000;
        }


    }
    cout <<"The sum of prime numbers less than 1000 is: "<< sum<<"\n";
    cout <<"The average of the sum is: "<< avg <<"\n";

};

