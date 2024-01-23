#include <iostream>
using namespace std;

class Cars
{
    private:
        mutable int cost;
        mutable string color;
        mutable string model;
    public:
        Cars(): cost(0), color("None"), model("None") {}
        Cars(int cst): cost(cst), color("Red"), model("Mitsibishi") {}
    
        void show_car() const;
        void get_color() const;
        void get_model() const;
};

void Cars::show_car() const
{
    cout << "Model: " << model << endl;
    cout << "Color: " << color << endl;
    cout << "Cost: " << cost << endl;
}
void Cars::get_color() const
    { cout << "Input a color: "; cin >> color; }
void Cars::get_model() const
    { cout << "Input a model: "; cin >> model; }
bool repeat()
{
    char ch;
    cout << "Do you wanna input another car? (y / n): "; cin >> ch;
    return (ch == 'y');
}

void define_car()
{
    Cars c1;
    c1.get_model();
    c1.get_color();
    c1.show_car();
}


int main()
{
    define_car();
    while (repeat())
    { define_car(); }

    const Cars c2;
    c2.show_car();
    c2.get_model();
    c2.show_car();
    return 0;
}