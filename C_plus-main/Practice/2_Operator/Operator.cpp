#include <iostream>
#include <process.h>
using namespace std;

const int LIMIT = 100;

class Array
{
    private:
        int arr[LIMIT];
    public:
        int& operator[](int n)
        {
            if (n < 0 || n >= LIMIT)
            {cout << "\nWrong Index!" << endl; exit(1);}
            return arr[n];
        }
};

int main()
{
    Array sa1;

    for (int j = 0; j < LIMIT; j++)
        { sa1[j] = j * 10; }

    for (int j = 0; j < LIMIT; j++)
        {
            int temp = sa1[j];
            cout << "\nElement " << j << " is: " << temp << endl;
        }
    return 0;
}