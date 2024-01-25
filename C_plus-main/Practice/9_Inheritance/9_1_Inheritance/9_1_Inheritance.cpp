#include <iostream>
//using namespace std;

class Counter
{
    protected:
        unsigned int count;
    public:
        Counter(): count(0) {}
        Counter(int c): count(c) {}
        unsigned int get_count() const
        { return count; }
        Counter operator++()
        { return Counter(++count); }
};

class CountDn : public Counter
{
    public:
        Counter operator--()
        { return Counter(--count); }
};

int main()
{
    Counter c1(1);
    ++c1;
    int p1 = c1.get_count();
    std::cout << p1;
    
    CountDn c2(35);
    ++c2;
    --c2;
    int p2 = c2.get_count();
    std::cout << p2;

    return 0;
}