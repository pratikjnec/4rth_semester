#include <iostream>

using namespace std;

int main()
{

    while (true)
    {
        int choice;
        cout << "1.Check Even or Odd\n";
        cout << "2.Find Maximum of two number\n";
        cout << "3.Calculate Square of a number\n";
        cout << "4.Exit\n";

        cin >> choice;

        switch (choice)
        {
        case 1:
            int num;
            cout << "Enter a number: ";
            cin >> num;
            if (num % 2 == 0)
            {
                cout << num << " is even\n";
            }
            else
            {
                cout << num << " is odd\n";
            }
            break;
        case 2:
            int num1, num2;
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            if (num1 > num2)
            {
                cout << num1 << " is greater than " << num2 << "\n";
            }
            else if (num1 == num2)
            {
                cout << num1 << " Both are equal " << num2 << "\n";
            }
            else
            {
                cout << num2 << " is greater than " << num1 << "\n";
            }
            break;
        case 3:
            int num3;
            cout << "Enter a number: ";
            cin >> num3;
            cout << "Square of " << num3 << " is " << num3 * num3 << "\n";
            break;
        case 4:
            exit(0);
        default:
            cout << "Invalid choice\n";
        }
    }
}