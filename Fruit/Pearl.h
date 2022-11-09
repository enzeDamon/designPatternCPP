#ifndef _Pearl
#define _Pearl
#include "Fruit.h"

class Pearl:Fruit
{
private:
    /* data */
public:
    Pearl(/* args */);
    ~Pearl();
    void eat() override;
    
};

Pearl::Pearl(/* args */)
{
}

Pearl::~Pearl()
{
}
void Pearl::eat(){
    std ::cout <<"this is a pearl"<< std::endl;
}
#endif