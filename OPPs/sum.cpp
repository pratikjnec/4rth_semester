#include<iostream>
using namespace std;
int main()
{
    int numbers[5];
    int sum = 0;
    cout<<"Enter 5 numbers: ";
    for(int i = 0; i < 5; i++)
    {
        cin>>numbers[i];
        sum += numbers[i];
    }
    cout<<"Sum of the numbers is: "<<sum;
    return 0;
}