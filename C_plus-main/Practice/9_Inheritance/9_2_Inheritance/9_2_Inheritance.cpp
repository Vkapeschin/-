#include <iostream>
using namespace std;

class Counter
{
    protected:
        unsigned int count;
    public:
        Counter() : count(0) {}
        Counter(int c): count(c) {}
        void get_count() const
            { cout << count << endl; }

        int operator++()
        { return ++count; }
};

class CountDB : public Counter
{
    public:
        CountDB(): Counter() {}
        CountDB(int c): Counter(c) {}
        int operator--()
            { return --count; }
};

int main()
{
    CountDB c1(32);
    c1.get_count();
    ++c1; ++c1; --c1;
    c1.get_count();

    return 0;
}