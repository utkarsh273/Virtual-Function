class BaseClass
{
    private:
        int privB;
    public:
        BaseClass();
        BaseClass(int);
        int pubFunc();
};

class DerivedOne: public BaseClass
{
    private:
        int priv1;
    public:
        DerivedOne();
        DerivedOne(int);
        int pubFunc();
};

class DerivedTwo: public BaseClass
{
    private:
        int priv2;
    public:
        DerivedTwo();
        DerivedTwo(int);
        int pubFunc();
};
class DerivedThree: public BaseClass
{
    private:
        int priv3;
    public:
        DerivedThree();
        DerivedThree(int);
        int pubFunc();
};