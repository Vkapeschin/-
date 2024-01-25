#include <iostream>
using namespace std;

class Time24
{
    private:
        int hours;
        int minutes;
        int seconds;
    public:
        Time24(): hours(0), minutes(0), seconds(0) {}
        Time24(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}
        
        void Display24() const
        {
            if (hours < 10) { cout << "0"; }
            cout << hours << ":";
            if (minutes < 10) { cout << "0"; }
            cout << minutes << ":";
            if (seconds < 10) { cout << "0"; }
            cout << seconds << endl;
        }

        int getHrs() { return hours; }
        int getMns() { return minutes; }
        int getScs() { return seconds; }
};

class Time12
{
    private:
        bool pm;
        int hrs;
        int min;

    public:
        Time12(): pm(true), hrs(12), min(0) {}
        Time12(Time24);
        Time12(bool ap, int hrs12, int min12): pm(ap), hrs(hrs12), min(min12) {}

        void Display12() const
        {
            if (hrs < 10) { cout << "0"; }
            cout << hrs << ":";
            if (min < 10) { cout << "0"; }
            cout << min;
            pm ? cout << " PM" << endl : cout << " AM" << endl;
        }
};

Time12::Time12(Time24 t24)
{
    hrs = t24.getHrs();
    min = t24.getScs() < 30 ? t24.getMns() : t24.getMns() + 1;
    min > 59 ? hrs += 1 : hrs;
    if (hrs > 12) 
        { pm = true; hrs -= 12; }
    else
        pm = false;
    if (hrs == 12) 
        { hrs = 0; pm = false; }
}

int main()
{
    while(true)
    {
        int h, m, s;
        cout << "Put hours in 24 format: "; cin >> h;
        if (h > 24) return 1;
        cout << "Put minutes: "; cin >> m;
        cout << "Put seconds: "; cin >> s;
        Time24 time24 (h,m,s);
        Time12 t12;
        t12 = time24;
        t12.Display12();
    }
    return 0;
}