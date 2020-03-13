#include <iostream>
#include <cmath>
using namespace std;

class Vector {
public:
    Vector(double);
    Vector(double, double);
    Vector(double, double, double);
    static void Print(Vector);
    void Print();
    double friend mod(const double *data_);
    static double mod(Vector);
    int dimension_;
//private:
    double data_[3] = { 0, 0, 0 };

    friend Vector operator+(Vector, Vector);


};

Vector::Vector(double element1)
{
    cout << "\n Tworzenie obiektu klasy Vector w przestrzeni R1 :" << endl;
    dimension_ = 1;
    data_[0] = element1;
}
Vector::Vector(double element1, double element2 )
{
    cout << "\n Tworzenie obiektu klasy Vector w przestrzeni R2 :" << endl;
    dimension_ = 2;
    data_[0] = element1;
    data_[1] = element2;
}
Vector::Vector(double element1, double element2 ,double element3)
{
    cout << "\n Tworzenie obiektu klasy Vector w przestrzeni R3 :" << endl;
    dimension_ = 3;
    data_[0] = element1;
    data_[1] = element2;
    data_[2] = element3;
}

void Vector::Print(Vector v) {
    if(v.dimension_>=1)
        cout << v.data_[0];
    if(v.dimension_>=2)
        cout << "," << v.data_[1];
    if(v.dimension_==3)
        cout <<","<< v.data_[2];
    cout << endl;
}

void Vector::Print() {
    if(dimension_>=1)
        cout << data_[0];
    if(dimension_>=2)
        cout << "," << data_[1];
    if(dimension_==3)
        cout <<","<< data_[2];
    cout << endl;
}

double mod(const double *data_) {
    return sqrt(pow(*data_,2)+pow(*(data_+1),2)+pow(*(data_+2),2));
}

double Vector::mod(Vector v) {
    return sqrt(pow(*v.data_,2)+pow(*(v.data_+1),2)+pow(*(v.data_+2),2));
}

Vector operator+(Vector v1, Vector v2) {
    return Vector(v1.data_[0]+v2.data_[0], v1.data_[1]+v2.data_[1], v1.data_[2]+v2.data_[2]);
}

/*Vector operator+(const double *data_1, const double* data_2) {
    return Vector(data_1[0]+data_2[0], data_1[1]+data_2[1], data_1[2]+data_2[2]);
}*/


int main()
{
    Vector r1(1.0); // R1
    Vector r2(5.5, 10); //R2
    Vector r3(4.1, 5.6, 124.513); //R3
    cout << "Obiekt klasy Vector o wymiarze:" << r1.dimension_ << endl;
    r2.Print();
    Vector::Print(r3);
    cout << Vector::mod(r2) << endl;
    // cout <<  mod(r2.data_);
    Vector r4 = r2+r1;
    r4.Print();

}