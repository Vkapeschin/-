#include <iostream>
#include <string.h>
using namespace std;

class String
{
    private:
        enum { SZ = 80 };
        char str[SZ];
    public:
        String()
            {str[0] = '\x0';}
        String(char s[])
            {strcpy(str, s);}
    void Display() const
        {cout << str;}
    operator char*()
        {return str;}
};

int main()
{
    String s1;
    String s2 = "Hello!";

    s1.Display();
    s2.Display();

    char ch[] = "World!";
    s1 = ch;
    s1.Display();

    cout << static_cast<char*>(s2);

    return 0;
}