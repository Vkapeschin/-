#include <iostream>
using namespace std;

class Cars
{
    private:
        string model;
        int price;
    public:
        Cars () : model(""), price(0)
        {}
        Cars (string st, int pr): model(st), price(pr)
        {}
    void show_car()
    {
        cout << "Car: Model: " << model << ". Price: " << price << endl;
    }
    Cars operator+(Cars c1)
    {
        
        model = model + c1.model;
        price = price + c1.price;
        return Cars(model, price);
    }
};

int main()
{
    Cars car3;
    Cars car2("Nissan", 16000);
    Cars car1("Bentley", 20000);

    car1.show_car();
    car2.show_car();
    car3 = car1 + car2;

    car3.show_car();

    return 0;
}