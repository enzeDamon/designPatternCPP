class LazyManager{
    private:
        LazyManager(){};
    public:
        static LazyManager* instance;
        static LazyManager* getInstance(){
            if (instance == nullptr) {
                instance = new LazyManager();
            }
            return instance;
        };
        ~LazyManager(){};
};
LazyManager *  LazyManager::instance = nullptr;