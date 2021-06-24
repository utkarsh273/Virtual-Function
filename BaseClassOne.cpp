#include<iostream>
#include"declerations.h"
using namespace std;

BaseClass::BaseClass(int fa):PrivB(fa)
{
    cout<<__func__<<"Begin"<<endl;

    cout<<__func__<<"End"<<endl;
}