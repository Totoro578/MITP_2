#include <iostream>
#include <cmath>

using namespace std;

class urzadzenie
{
public:
    virtual int zapis(int id, string dane) = 0;
    virtual string odczyt(int id) = 0;
     ~urzadzenie() {}
};

class dysk : public urzadzenie
{
private:
    int id_;
    string dane_;
public:
    dysk(int id);
    int zapis(int id, string dane);
    string odczyt(int id);
    void chk_disc(int);
};

void dysk::chk_disc(int id) {
    if(floor(id)==id){
        this->odczyt(id);
        this->zapis(id,dane_);
    }
    else cout << "invalid id";
}

dysk::dysk(int id)
{
    cout << "Tworzenie obiektu klasy dysk " << endl;
    id_ = id;
}

int dysk::zapis(int id, string dane)
{
    dane_ = dane;
    cout << "zapis danych: " << dane << endl;
    if(dane_==dane)
    return 1;
    else return -1;
}

string dysk::odczyt(int id)
{
    cout << "odczyt danych: " << dane_ << endl;
    return dane_;
}

int main()
{
 //   urzadzenie u;
    dysk d1(5.5);
    d1.chk_disc(5.5);
    d1.zapis(7, "test 11");
    d1.odczyt(7);
}
