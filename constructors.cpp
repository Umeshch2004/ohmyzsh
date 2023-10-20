#include <iostream>
using namespace std;

class rectangle
{
    private:
    int length;
    int breadth;

    public:
    // rectangle()
    // {
    //     length=1;
    //     breadth=1;
    // }

    rectangle(int l=1,int b=1)
    {
        setlength(l);
        setbreadth(b);
    }

    rectangle(rectangle &r)
    {
        length=r.length;
        breadth=r.breadth;
    }

    int setlength(int l)
    {
        if(length>=0)
        return length =l;
        else
        return length=1;
    }

    int setbreadth(int b)
    {
        if(breadth>=0)
        return breadth=b;
        else
        return breadth=1;
    }

    int getlength()
    {
        return length;
    }
    
    int getbreadth()
    {
        return breadth;
    }

    int area()
    {
        return length*breadth;
    }

    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    rectangle r1;
    rectangle r2(r1);
    cout<<r2.area()<<endl;
}
