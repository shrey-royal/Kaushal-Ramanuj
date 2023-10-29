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

class CandyShop {
public:
    void Candy() {
        cout << "Candy" << endl;
    }

    void Chocolate() {
        cout << "Chocolate" << endl;
    }

    void IceCream() {
        cout << "IceCream" << endl;
    }
};

class Kaushal : public ToyShop, public CandyShop {
public:
    void play() {
        cout << "Kaushal is Playing ";
    }

    void eat() {
        cout << "Kaushal is Eating ";
    }
};

class Jay : public ToyShop, public CandyShop {
public:
    void play() {
        cout << "Jay is Playing ";
    }

    void eat() {
        cout << "Jay is Eating ";
    }
};

class Shreya : public ToyShop, public CandyShop {
public:
    void play() {
        cout << "Shreya is Playing ";
    }

    void eat() {
        cout << "Shreya is Eating ";
    }
};

int main() {
    Kaushal k;
    k.play();
    k.Car();

    k.eat();
    k.Candy();
    cout << endl;

    Jay j;
    j.play();
    j.Doll();

    j.eat();
    j.Chocolate();
    cout << endl;

    Shreya s;
    s.play();
    s.Ball();

    s.eat();
    s.IceCream();
    cout << endl;

    return 0;
}