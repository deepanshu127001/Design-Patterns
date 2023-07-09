#include <iostream>
#include "Object.cpp"
class ToyFactory
{
private:
    /* data */
public:
    ToyFactory(/* args */);
    ~ToyFactory();
    static Toy *createToy(int);
};
Toy *ToyFactory::createToy(int type)
{
    Toy *toy = nullptr;
    switch (type)
    {
        case 1:
        {
            toy = new Car;
            break;
        }
        case 2:
        {
            toy = new Bike;
            break;
        }
        case 3:
        {
            toy = new Plane;
            break;
        }
        default:
        {
            std::cout << "invalid toy type please re-enter type";
            return nullptr;
        }
    }
     
     toy->prepareParts();
     toy->combineParts();
     toy->assembleParts();
     toy->applyLabel();
     return toy;
}
ToyFactory::ToyFactory(/* args */)
{
}

ToyFactory::~ToyFactory()
{
}
