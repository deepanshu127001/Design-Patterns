#include <string>
#include <iostream>
class Toy
{
protected:
    std::string name;
    float price ;
private:
    /* data */
public:
    virtual void prepareParts()  =0;
    virtual void combineParts()  =0;
    virtual void assembleParts() =0;
    virtual void applyLabel()    =0;
    virtual void showProduct()   =0;
    Toy(/* args */);
    ~Toy();
};

Toy::Toy(/* args */)
{
}

Toy::~Toy()
{
}

class Car :public Toy{
    void prepareParts(){std::cout<<"preparing car parts"<<std::endl;};
    void combineParts(){std::cout<<"combining car parts"<<std::endl;};
    void assembleParts(){std::cout<<"assembling car parts"<<std::endl;};
    void applyLabel(){std::cout<<"applying car label"<<std::endl; name="Car",price=10;};
    void showProduct(){std::cout<<"Name"<<name<<std::endl<<"Price"<<price<<std::endl;};
};
class Bike:public Toy{
    void prepareParts(){std::cout<<"preparing Bike parts"<<std::endl;};
    void combineParts(){std::cout<<"combining Bike parts"<<std::endl;};
    void assembleParts(){std::cout<<"assembling Bike parts"<<std::endl;};
    void applyLabel(){std::cout<<"applying Bike label "<<std::endl; name="Bike",price=20;};
    void showProduct(){std::cout<<"Name"<<name<<std::endl<<"Price"<<price<<std::endl;};
};
class Plane:public Toy{
    void prepareParts(){std::cout<<"preparing Plane parts"<<std::endl;};
    void combineParts(){std::cout<<"combining Plane parts"<<std::endl;};
    void assembleParts(){std::cout<<"assembling Plane parts"<<std::endl;};
    void applyLabel(){std::cout<<"applying Plane label"<<std::endl; name="Plane",price=30;};
    void showProduct(){std::cout<<"Name"<<name<<std::endl<<"Price"<<price<<std::endl;};
};