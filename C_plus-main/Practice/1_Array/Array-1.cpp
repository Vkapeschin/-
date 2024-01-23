#include <iostream>
using namespace std;


int main ()
{
    const int SIZE = 4;
    int sum = 0;
    int numbers[SIZE];
    cout << "Input 4 numbers: " << endl;

    for (int i = 0; i < 4; i++) {
    cout << "Number " << i+1 << ": "; cin >> numbers[i];
    sum = sum + numbers[i];
    cout << sum << endl;
    };
    double avrg = sum / SIZE;
    cout << avrg << endl;
    system ("pause");
}