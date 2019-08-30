//////Inheritance with virtual functions//////


#include <iostream>
using namespace std;

class Shape{
    public:
        virtual void draw() const=0;                 //纯虚函数
        virtual void error(const std::string& msg);  //
        int objectID() const;                        //非虚函数
};
/////非虚函数  ///不希望子类重新定义它
/////虚函数    ///希望子类重新定义它
/////纯虚函数  ///希望子类一定重新定义

class Rectangle:public Shape{};
class Ellipse:public Shape{};

//////虚函数继承。。。