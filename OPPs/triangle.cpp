#include<iostream>
#include<math.h>
using namespace std;

int main()
{

    int side1, side2, side3;
    double area, s;
    bool valid;
    
    cout<<"Enter three sides of the triangle:\n";
    cin>>side1>>side2>>side3;
    
    if(side1 + side2 > side3 || side1 + side3 > side2 || side2 + side3 > side1)
    {
             valid = true;  
    }
    else
    {
             valid = false;
    }
    
    if(valid)
    {
             s = (side1 + side2 + side3) / 2;
             area = sqrt(s * (s - side1) * (s - side2) * (s - side3)); 
             cout<<"area is: "<<area;
    }
    else
    {
             cout<<"\n\nEntered Triangle is not Valid";
    }
    
    
}
