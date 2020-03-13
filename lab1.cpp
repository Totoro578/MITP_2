#include <iostream>

using namespace std;

class Circle{
private:
    float radius_;
    float area_;
    float circumference_;
public:
    Circle(float a){
        radius_ = a;
        area_ = 3,14*a*a;
    };
    void set_radius(float a){
        radius_ = a;
        area_ = 3,14*a*a;
    };
    float get_radius(){
        return radius_;
    }
};

int main(){
    Circle kolo1( 5.14);

}