#include <bits/stdc++.h>
using namespace std;

class Restaurent
{
public:
    string name;
    int price = 200, quantity;
    Restaurent(){}; // 1. jodi input na ase taile eta kaj korbe
    Restaurent(string name, int price, int quantity) // 2. jodi arg jodi dei taile eta automatic kaj korbe.
    {
        this->name = name;
        this->price = price;
        this->quantity = quantity;
    }
    void update_quantity(int quantity)
    {
        this->quantity = quantity;
    }
};

int main()
{
    // Restaurent obj1 = Restaurent("Burger", 100, 4);
    // Restaurent *obj2 = new Restaurent("Sandwitch", 200, 7); // heap e obj toiri korlam
    // obj1.update_quantity(200);
    // cout << obj2->name ; // derefenrence
    int n;
    cin >> n;
    Restaurent products[n]; // no 1 kaj korteche
    for (int i = 0; i < n; i++){
        cin >> products[i].name >> products[i].price >> products[i].quantity;
        // string name;
        // int price, quantity;
        // cin >> name >> price >> quantity;
        // products[i] = Restaurent(name, price, quantity); // no 2 kaj korteche
    }
    for (int i = 0; i < n; i++)
    {
        cout << products[i].name << products[i].price << products[i].quantity << endl;
    }
        return 0;
}
