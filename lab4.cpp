#include <iostream>

using namespace std;

class student {
public:
    void printOpis();
    student();
    string Opis_ = "student grupy";
};

class starosta : public student {
public:
    string Opis_ = "starosta grupy";
    void printOpis();
};

student::student() {
    cout << "Tworzenie obiektu klasy student o nazwie: " << Opis_ << endl;
}

void student::printOpis() {
    cout << "Opis: " << Opis_ << endl;
}

void starosta::printOpis() {
    cout << "To jest opis: " << Opis_ << endl;
}
int main() {
    starosta star; //funkcje dziela konstruktor
    student stud;
    stud.printOpis();
    star.printOpis(); //funkcja dziedziczaca dziedziczy metody klasy-matki
}
