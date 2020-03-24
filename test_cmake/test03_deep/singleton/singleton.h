class Singleton
{
public:
    virtual ~Singleton();
    static Singleton* GetInstance();
    void Print();
private:
    Singleton();
    static Singleton* instance;
};
