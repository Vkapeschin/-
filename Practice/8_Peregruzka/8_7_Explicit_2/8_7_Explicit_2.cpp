#include <iostream>
using namespace std;

class Distance
{
    private:
        const float MTF;
        int feet;
        float inches;
    public:
        Distance() : feet(0), inches(0), MTF(3.280833F) {}
        explicit Distance(float meters) : MTF(3.280833F)
        {
            int fullfeet = meters * MTF;
            feet = int(fullfeet);
            inches = fullfeet - feet;
        }
        void show_dist()
        {cout << "Distanse in feet: " << feet << "'" << inches << endl;}
};

int main()
{
    void fancy(Distance);
    char ch;
    while(ch != 'n')
        { 
        int metrs;
        cout << "Input meters: "; cin >> metrs;
        Distance d1(metrs);

        cout << "Press 'n' for break!";
        }
    
    return 0;
}