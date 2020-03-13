#include <iostream>

using namespace std;

class Circle {
public:
    float* radius_;
    Circle(float a){
        radius_ = new float (a);
    };
    ~Circle(){
        delete radius_;
    };
    float circumference();
    float area();
};

float Circle::circumference() {
    return 2.0f*3.14f**radius_;
}

float Circle::area() {
    return 3.14**radius_**radius_;
}

int main() {
    float a = 5;
    Circle kolo2(a);
    cout << kolo2.area() << endl;
    cout << kolo2.circumference();
}
