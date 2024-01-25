#include <iostream>
#include <string>
using namespace std;

class Time12
{
    private:
        bool pm;
        int hrs;
        int min;
    public: 
        Time12(): pm(true), hrs(0), min(0)
            {}
        Time12(bool ap, int h, int m): pm(ap), hrs(h), min(m)
            {}
        void display() const
        {
            cout << hrs << ':';
            if(min < 10)
                cout << '0';
            cout << min << ' ';
            string am_pm;
            pm ? am_pm = "P.M." : am_pm = "A.M.";
            cout << am_pm << endl;
        } 
};

class Time24
{
    private:
        int hours;
        int minutes;
        int seconds;
    public:
        Time24(): hours(0), minutes(0), seconds(0)
            {}
        Time24(int h, int m, int s): hours(h), minutes(m), seconds(s)
            {}
        operator Time12() const;
};

Time24::operator Time12() const
{
    int hr = hours > 12 ? hours - 12: hours;
    bool pm = hours > 12 ? true : false;
    int mn = seconds >= 30 ? minutes + 1 : minutes;

    return Time12(pm, hr, mn);       
}

int main()
{
    Time12 t12(false, 11, 0);
    t12.display();

    Time24 t24(12,55,30);
    t12 = t24;
    t12.display();

    return 0;
}