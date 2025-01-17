#include<iostream>
using namespace std;
int main()
{
    int units;
    float bill;

    cout<<"Enter the number of units: ";
    cin>>units;

    if(units <= 100)
    {   
        bill = units * 0.50;
        // cout<<"You'll be charged by 0.5rs per unit\n";
        // cout<<"Your bill is: "<<bill;
    }
    else if(units <= 200 && units > 100)
    {
        bill = units * 0.75;
        // cout<<"You'll be charged by 0.75rs per unit\n";
        // cout<<"Your bill is: "<<bill;
    }
    else if(units <= 300 && units > 200 || units > 300)
    {
        bill = units * 1.20;
        // cout<<"You'll be charged by 1.20rs per unit\n";
        // cout<<"Your bill is: "<<bill;
    }

    switch(units/100)
    {
        case 1:
            cout<<"Range to be charged is 0-100\nYou'll be charged by 0.5rs per unit\n";
            break;
        case 2:
            cout<<"Range to be charged is 100-200\nYou'll be charged by 0.75rs per unit\n";
            break;
        case 3:
            bill = units * 1.20;
            cout<<"Range to be charged is 100-200\nYou'll be charged by 1.20rs per unit\n";
            break;
    }

}
/*

#include <iostream>
using namespace std;

int main() {
    int units;
    double bill = 0.0;

    cout << "Enter the number of units consumed: ";
    cin >> units;

    // Switch statement for determining the unit slab
    switch (units / 100) {
        case 0: // 0-99 units
            bill = units * 0.50;
            break;
        case 1: // 100-199 units
            bill = 100 * 0.50 + (units - 100) * 0.75;
            break;
        case 2: // 200-299 units
            bill = 100 * 0.50 + 100 * 0.75 + (units - 200) * 0.75;
            break;
        default: // Beyond 300 units
            bill = 100 * 0.50 + 100 * 0.75 + 100 * 0.75 + (units - 300) * 1.20;
            break;
    }

    // If-else ladder for additional operations or discounts
    if (bill > 300) {
        cout << "Your bill exceeds $300. Applying a 5% discount." << endl;
        bill = bill - (bill * 0.05); // 5% discount for bills exceeding $300
    } else if (bill > 200) {
        cout << "Your bill exceeds $200. Applying a $10 flat discount." << endl;
        bill -= 10; // Flat $10 discount
    } else if (bill < 50) {
        cout << "Your bill is below $50. Adding a $5 surcharge." << endl;
        bill += 5; // Surcharge for bills below $50
    }

    cout << "The final electricity bill for " << units << " units is: $" << bill << endl;

    return 0;
}


*/