#include "Apple.h"
#include "Pearl.h"

class FruitFactory
{
private:
    /* data */
public:
    FruitFactory(/* args */);
    ~FruitFactory();
    Fruit* create(int index);
};

FruitFactory::FruitFactory(/* args */)
{
}

FruitFactory::~FruitFactory()
{
}
Fruit* FruitFactory::create(int index)
{
    switch (index)
    {
    case 0:
        return (Fruit *)(new Apple());
    default:
        return (Fruit*)(new Pearl());
        
    }
}
