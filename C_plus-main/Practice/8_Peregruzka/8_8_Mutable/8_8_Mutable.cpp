#include <iostream>
using namespace std;

class New
{
    private:
        int number_1;
        mutable int number_2;
    public:
        New(): number_1(0), number_2(1) {}
    void show_number() const
    { cout << number_1 << " " << number_2 << endl; }

    void operator++ () const
    { number_2++; }
};

int main()
{
    const New n1;
    n1.show_number();
    ++n1;
    n1.show_number();
}