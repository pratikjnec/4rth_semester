#include<iostream>
using namespace std;
int main()
{
    int side1, side2, side3;
    cout<<"Enter three sides of the triangle:\n";
    cin>>side1>>side2>>side3;
    if(side1 + side2 > side3 || side1 + side3 > side2 || side2 + side3 > side1)
    {
        if(side1 == side2 && side1 == side3)
        {
            cout<<"Equilateral Triangle";
        }
        else if(side1 == side2 || side1 == side3 || side2 == side3)
        {
            cout<<"Isosceles Triangle";
        }
        else
        {
            cout<<"Scalene Triangle";
        }
    }
    else
    {
        cout<<"Entered Triangle is not Valid";
    }
    return 0;
}