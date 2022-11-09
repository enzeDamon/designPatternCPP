#include <iostream>
#ifndef _Fruit
#define _Fruit
class Fruit
{
private:
    /* data */
public:
    Fruit(/* args */) {};
    ~Fruit(){};
    void virtual eat()=0;
    
};
#endif


