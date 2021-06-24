#include<iostream>
#include"declerations.h"
using namespace std;

DerivedOne::DerivedOne(int fa):BaseClass(fa)
{
    cout<<__func__<<"Begin"<<endl;
    priv1=fa;
    cout<<__func__<<"End"<<endl;
}