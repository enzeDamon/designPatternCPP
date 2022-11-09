#include "factory/SimpleFactory/FruitFactory.h"
#include "factory/FactoryPattern/AppleFactory.h"
#include "factory/FactoryPattern/PearlFactory.h"
int main() {
    // simple factory
    FruitFactory *factory = new FruitFactory();
    Fruit *apple = factory->create(0);
    Fruit *pearl = factory->create(1);
    apple->eat();
    pearl->eat();
    delete factory;
    delete apple;
    delete pearl;
    // factory mode
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

    return 0;
}