#include <iostream>
using namespace std;

class dl
{
    private:
        int metr;
        int stmetr;
    public:
        dl () : metr (0), stmetr (0) {}
        dl (int a, int b) : metr (a), stmetr (b) {}
        void get_param()
        {
            cout << "Input a metr: "; cin >> metr;
            cout << "Input a santimetr: "; cin >> stmetr;
            int a;
            if (stmetr > 99) 
                {
                    a = stmetr % 100;
                    metr += (stmetr / 100);
                    stmetr = a;
                    cout << "new metr: " << metr << endl << "new stmetr: " << stmetr << endl << endl;
                };
        }
        void show_param()
        {
            cout << metr << "." << stmetr << " metres" << endl; 
        }
        dl summation (dl indl2);
};


dl dl::summation (dl indl2)
    {
        dl temp;
        temp.metr = metr + indl2.metr;
        temp.stmetr = stmetr + indl2.stmetr;
        return temp;
    }

int main()
    {
        dl dl1;
        dl dl2(10, 4);
        dl1.get_param();
        cout << "dl1: "; dl1.show_param();
        cout << "dl2: "; dl2.show_param();

        dl dl3;
        dl3 = dl1.summation(dl2);
        dl3.show_param();

        return 0;
    }

