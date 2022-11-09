#include "Fruit.h"
class Apple : Fruit
{
private:
    /* data */
public:
    Apple(/* args */);
    ~Apple();
    // override is only used for double check
    void eat() override;
};

Apple::Apple(/* args */)
{
}

Apple::~Apple()
{
}

void Apple::eat(){
    std ::cout <<"this is an apple"<< std::endl;
}
