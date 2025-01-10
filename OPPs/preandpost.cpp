#include<iostream>
using namespace std;

int main()
{
    int pre, post;
    //incrementing program
    cout<<"Enter Value for pre increament option: \n";
    cin>>pre;
    
    cout<<"Incrementing first\n";
    cout<<"After Increment: "<<++pre;
    
    
    cout<<"\n\nEnter Value for post increament option: \n";
    cin>>post;
    
    cout<<"Incrementing before\n";
    cout<<"Value before incrementing: "<<post<<"\nAfter Increment: "<<post++;
    
    
    //decrementing program
    cout<<"\n\n\nEnter Value for pre decrement option: \n";
    cin>>pre;
    
    cout<<"Incrementing first\n";
    cout<<"Value before decrementing: "<<pre<<"\nAfter decrement: "<<++pre;
    
    
    cout<<"\n\nEnter Value for post decrement option: \n";
    cin>>post;
    
    cout<<"decrementing before\n";
    cout<<"Value before decrementing: "<<post<<"\nAfter decrementing: "<<post++;
    
}
