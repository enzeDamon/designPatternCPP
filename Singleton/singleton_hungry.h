class Manager
{
private:
    Manager(/* args */);
    /* data */
public:
    static Manager *instance;
    ~Manager();
};

Manager::Manager(/* args */)
{
}

Manager::~Manager()
{
}
// the singleton instance have to be initialized outside the class
Manager* Manager::instance = new Manager();
