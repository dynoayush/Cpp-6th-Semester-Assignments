#include <iostream>
using namespace std;
#include <cmath>
class Polar{
    double radius,angle;
    public:
         Polar(double r = 0,double a = 0):
         radius(r),angle(a){}

         Polar operator+(const Polar& p){
            double x1 = radius * cos(angle);
            double y1 = radius * sin(angle);
            double x2 = p.radius * cos(p.angle);
            double y2 = p.radius * sin(p.angle);
            double x = x1+x2;
            double y = y1+y2;
            double r = sqrt(x*x+y*y);
            double a = atan2(y,x);
            return Polar(r,a);
         }

         void display(){
            cout<< "Radius: " << radius << ", Angle (radians): "<< angle <<endl;
         }
};
int main(){
    Polar p1(5, M_PI/4),p2(3,M_PI/6);
    Polar p3 = p1+p2;
    p3.display();
    return 0;
}