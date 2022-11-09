#include "../../Fruit/Apple.h"
#include "../../Fruit/Pearl.h"
class IFactory
{
public:
    virtual Fruit* create() = 0;
    virtual ~IFactory(){};
};

class AppleIFactory:IFactory
{
    public:
    Fruit* create() override;
};

Fruit *AppleIFactory::create()
{
    return (Fruit*) new Apple();
};

class PearlIFactory:IFactory
{
    public:
    Fruit* create() override;
};

Fruit *PearlIFactory::create()
{
    return (Fruit*) new Pearl();
};

