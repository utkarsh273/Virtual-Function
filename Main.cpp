#include<iostream>
#include"declerations.h"
using namespace std;

int main()
{   
    cout<<__func__<<"Begin"<<endl;
    BaseClass *bcp;
    DerivedOne d1(11);
    DerivedTwo d2(22);
    DerivedThree d3(33);
    bcp = &d1;
    bcp->pubFunc();
    bcp = &d2;
    bcp->pubFunc();
    bcp =&d3;
    bcp->pubFunc();
    cout<<__func__<<"End"<<endl;
    return 0; 
}