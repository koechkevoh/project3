
#include <iostream>
using namespace std;

class Rectangle
{
private:
    double width;
    double length;
    public:
        void setWidth(double);
        void setLength(double);
        double getLength() const;
        double getWidth();
        double getArea();



};
void Rectangle::setWidth (double w)
{
    width =w;
}
double Rectangle ::getWidth (){
return width;
}
void Rectangle::setLength(double l)
{
    length=l;
}
double Rectangle::getArea(){
return (width*length);
}

int main()
{
 Rectangle r;
  r.setWidth(5.2);
  cout <<r. getWidth();
  r.setLength(8.3);
  cout <<"the area of the rectangle is"<<r.getArea();
}
