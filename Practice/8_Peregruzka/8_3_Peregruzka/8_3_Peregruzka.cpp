#include <iostream>
using namespace std;
#include <process.h>

const int LIMIT = 100;

class safearay
{
    private:
        int arr[LIMIT];
    public:
        int& operator[](int n)
        {
            if (n < 0 || n >= LIMIT)
                {cout << "\nNo!"; exit(1);}
            else    
                return arr[n];
        }
};

int main()
{
    safearay arr1;

    for (int i = 0; i < LIMIT; i++)
        arr1[i] = i * 10; 

    for (int i = 0; i < LIMIT; i++)
    {   
        int a = arr1[i];
        cout << i << " element: " << a << endl;
    }
    return 0;
}