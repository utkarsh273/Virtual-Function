#include<iostream>
#include"declerations.h"
using namespace std;

int BaseClass::pubFunc()
{
    cout<<__func__<<"Begin"<<endl;
    cout<<__func__<<"End"<<endl;
    return 0;
}