#include<iostream>
using namespace std;

int main()
{
    int pre, post;
    //incrementing program
    cout<<"Enter Two Values\n";
    cin>>pre>>post;
    
    if(pre > post)//whether the 1st number is greater than 2nd
    {
           cout<<"Entered First Value is greater than second that is value "<<pre;
    }
    else if(post > pre)//whether the 2nd number is greater than 1st or vise-versa
    {
           cout<<"Entered second Value is greater than first that is value "<<post;
    }
    else//whether the both number are equal
    {
           cout<<"\n\nBoth numbers entered are equal";    
    }
    


    if(post > 10 && post < 20)
    {
     cout<<"\n\nEntered 2nd value is greator than 10 and less than 20 that is "<<post;
    }
    
    if(post == 10)
    {
         cout<<"\n\nsecond value is equal to 10";     
    }
    
    if(post == 20)
    {
         cout<<"\n\nsecond value is equal to 20";     
    }
    
    if(pre > 10 || pre < 20)
    {
     cout<<"\n\nEntered 1st value is greator than 10 and less than 20 that is "<<pre;
    }
    
    if(pre == 10)
    {
         cout<<"\n\nfirst value is equal to 10";     
    }
    
    if(pre == 20)
    {
         cout<<"\n\nfirst value is equal to 20";     
    }
    
    else if(pre == 0 && post == 0)
    {
     cout<<"\n\nBoth values are zero";
    }
    else
    {
     cout<<"\n\nEntered values are greater than 20";
    }

}
