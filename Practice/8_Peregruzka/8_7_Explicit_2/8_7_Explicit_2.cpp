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
            float fullfeet = meters * MTF;
            feet = int(fullfeet);
            inches = (fullfeet - feet)*12;
        }
        void show_dist()
        {cout << "Distanse in feet: " << feet << "'" << inches << endl;}
};

int main()
{
    void fancy(Distance);
    int metrs;
    char ch;
    while(ch != 'n')
        { 
        cout << "Input meters: "; cin >> metrs;
        Distance d1(metrs);
        fancy(d1);
        d1.show_dist();
        cout << "Press 'n' for break! Or other button to continue.";
        cin >> ch;
        }
    
    return 0;
}
void fancy(Distance dnc)
{
    cout << "Outpt in feet and inches: " << endl;
    dnc.show_dist();
}
