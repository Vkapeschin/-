#include <iostream>
using namespace std;

class Simple
{
    private:
        int number;
    public:
        Simple() : number(0) {}
        explicit Simple(int a) : number(5) {}
        void display();
};

void Simple::display()
{
    cout << number << endl;
}

int main()
{
    Simple s1;
    Simple s2(7);
    s1.display();
    s2.display();

    return 0;
}