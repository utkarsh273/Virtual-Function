#include<iostream>
#include"declerations.h"
using namespace std;

int DerivedOne::pubFunc()
{
    cout<<__func__<<"Begin"<<endl;
    cout<<__func__<<": Priv1: "<<priv1<<endl;
    cout<<__func__<<"End"<<endl;
}