#include<iostream>
using namespace std;

class Point
{

private:
    int x, y;
public:
    Point()
    {
        x = 0;
        y = 0;
    }
    Point(int xval, int yval)
    {
        x = xval;
        y = yval;
    }
    Point& move(int dx, int dy)
    {
        x = x+dx;
        y = y+dy;

        return *this;
    }
    void display()
    {
        cout<<"The point is "<<"("<<x<<","<<y<<")"<<endl;

    }
};
void shiftPoint(Point *p, int dx, int dy){
p->move(dx, dy);
}
int main()
{
   Point p(1, 4);
   p.display();
   p.move(1,1).move(2,3);
   p.display();
   shiftPoint(&p, 1, 1);
   p.display();
   return 0;
}
