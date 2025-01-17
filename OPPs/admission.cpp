#include<iostream>
using namespace std;

int main()
{
    int age;
    int maths, physics, chemistry, total = 100;
    total = total*(60/100);
    cout<<"Enter Age: ";
    cin>>age;

    cout<<"Enter marks of Maths (out of 100): ";
    cin>>maths;

    cout<<"Enter marks of Physics (out of 100): ";
    cin>>physics;

    cout<<"Enter marks of Chemistry (out of 100): ";
    cin>>chemistry;

    if (age >= 18)
    {
        if (maths >= total && physics >= total  && chemistry >= total)
        {
            cout << "You are eligible for admission";
        }
    }
    else
    {
        cout << "You are not eligible for admission";
    }

}