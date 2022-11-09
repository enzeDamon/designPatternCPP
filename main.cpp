#ifdef _FACTORY
#include "factory/SimpleFactory/FruitFactory.h" // simple factory
// factory pattern
#include "factory/FactoryPattern/AppleFactory.h"
#include "factory/FactoryPattern/PearlFactory.h"
// Abstratc factory pattern
#include "factory/AbstractFactory/IFactory.h"
#endif
int main() {
#ifdef _FACTORY
    // simple factory
    std :: cout << "simple factory pattern:" << std::endl;
    FruitFactory *factory = new FruitFactory();
    Fruit *apple = factory->create(0);
    Fruit *pearl = factory->create(1);
    apple->eat();
    pearl->eat();
    delete factory;
    delete apple;
    delete pearl;
    // factory mode
    std :: cout << "factory pattern:" << std::endl;
    AppleFactory *apple_factory = new AppleFactory();
    PearlFactory *pearl_factory = new PearlFactory();
    apple = apple_factory->create();
    pearl = pearl_factory->create();
    apple->eat();
    pearl->eat();
    delete apple_factory;
    delete pearl_factory;
    delete apple;
    delete pearl;
    // abstract factory
    std :: cout << "abstract factory pattern:" << std::endl;
    IFactory *appleIFactory = (IFactory*)new AppleIFactory();
    IFactory *pearlIFactory = (IFactory*)new PearlIFactory();
    apple = appleIFactory->create();
    pearl = pearlIFactory->create();
    apple->eat();
    pearl->eat();
    delete appleIFactory;
    delete pearlIFactory;
    delete apple;
    delete pearl;
#endif
    return 0;
}