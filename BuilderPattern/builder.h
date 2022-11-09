// previously declared
class Drink;

class Builder
{
private:
    /* data */
public:
    Builder(/* args */){};
    int water;
    int sugar;
    bool iced;
    Builder* watered(int water){
        this->water = water;
        return this;
    };

    Builder* sugared(int sugar) {
        this->sugar = sugar;
        return this;
    };
    Builder* icyed(bool iced) {
        this->iced = iced;
        return this;
    };
    Drink * build(); 

    ~Builder(){

    };

};
class Drink{
    private:    
        int water;
        int sugar;
        bool iced;
    public:
        Drink(){};
        Drink(Builder* builder){
            this->iced = builder->iced;
            this->sugar = builder->sugar;
            this->water = builder->water;
        }; 
        ~Drink(){};
};
Drink* Builder::build(){
    return new Drink(this);
}



