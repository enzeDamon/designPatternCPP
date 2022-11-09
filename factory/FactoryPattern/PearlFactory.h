#include "../../Fruit/Pearl.h"

class PearlFactory
{
private:
    /* data */
public:
    PearlFactory(/* args */);
    ~PearlFactory();
    Fruit *create();
};

Fruit * PearlFactory::create()
{
    return (Fruit*)new Pearl();
}

PearlFactory::PearlFactory(/* args */)
{
}

PearlFactory::~PearlFactory()
{
}

