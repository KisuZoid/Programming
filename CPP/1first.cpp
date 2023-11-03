 #include <iostream>
using namespace std;

int main()
{
    int quantity;
    float price, total, discount = 0;
    cout << "Enter Quantity and Price: ";
    cin >> quantity >> price;
    total = quantity * price;
    
    if (total >= 2000)
        discount = total*0.1;
    total = total-discount;

    cout << "To be Paid = " << total;
    return 0;
}