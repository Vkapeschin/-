#include <iostream>
using namespace std;

class Distance
{
    private:
        float const MTF = 3.28;
        int feet;
        float inches;
    public:
        Distance() : feet(0), inches(0), MTF(3.28)
        {}
        Distance(int f, int i): feet(f), inches(i)
        {} 
        void get_dist()
        {
            char endch;
            do
            {

                cout << "Input metric: metres (m) or feets (f): " << endl;
                cin >> endch;

                switch (endch)
                {
                    case 'm':
                        {cout << "You choose metres." << endl; break;}
                    case 'f':
                        {cout << "You choose feets." << endl; break;}
                    default:
                        {cout << "Wrong letter! Try again" << endl;}
                }
            } while (endch != 'm' && endch != 'f');                
        }
};

int main()
{
    Distance d1, d2;
    d2.get_dist();

    return 0;
}