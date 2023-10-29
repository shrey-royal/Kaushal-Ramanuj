#include<iostream>
using namespace std;

class ToyShop {
    public:
        void Car() {
            cout << "with Car" << endl;
        }

        void Doll() {
            cout << "with Doll" << endl;
        }

        void Ball() {
            cout << "with Ball" << endl;
        }
};

class Kaushal : public ToyShop {
public:
    void play() {
        cout << "Kaushal is Playing ";
    }
};

class Jay : public ToyShop {
public:
    void play() {
        cout << "Jay is Playing ";
    }
};

class Shreya : public ToyShop {
public:
    void play() {
        cout << "Shreya is Playing ";
    }
};

int main() {
    Kaushal k;
    k.play();
    k.Car();

    Jay j;
    j.play();
    j.Doll();

    Shreya s;
    s.play();
    s.Ball();

    return 0;
}