#include "factory/SimpleFactory/FruitFactory.h"

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
    return 0;
}