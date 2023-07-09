#include <iostream>
using namespace std;
#include "ToyFactory.cpp"
//client code starts
int main(int argc, char const *argv[])
{
    int type ;
    while(1)
    {
        cout<<"Enter type or zero for exit ";
        cin>>type;
        if(!type)
        {
            break;
        }
        Toy *v = ToyFactory::createToy(type);
        if(v){
        v->showProduct();
        delete v;
        }
    }
    cout<<"Exit";
    return 0;
}
