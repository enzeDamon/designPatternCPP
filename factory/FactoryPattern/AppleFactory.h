#include "../../Fruit/Apple.h"

class AppleFactory
{
private:
    /* data */
public:
    AppleFactory(/* args */);
    ~AppleFactory();
    Fruit* create();
};

AppleFactory::AppleFactory(/* args */)
{
}

AppleFactory::~AppleFactory()
{
}
Fruit* AppleFactory::create(){
    return (Fruit*)new Apple();
} 
