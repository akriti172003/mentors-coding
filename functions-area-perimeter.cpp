
#include<stdio.h>
#include<iostream>
using namespace std;

int perimeter (int a ,int b)
 { int c =(2*(a+b));
    return c;}
   int area (int a, int b)
    { int d=a*b;
    return d;}
     int main()
     {
     int a,b;
     cout<<"enter the length and breadth";
     cin>>a>>b;
     int c=perimeter(a,b);
     int d=area(a,b);
     
     cout<<c;
     cout<<d;
     }
