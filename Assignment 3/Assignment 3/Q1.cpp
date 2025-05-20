#include<iostream>

using namespace std;

class Fruit {
protected:
    int FruitNO;

public:
    void addFruits(int numFruits) {
        FruitNO = numFruits;
        cout << "Total number of fruits in the basket: " << FruitNO << endl;
    }
};

class Apples : public Fruit {
public:
    int apples;

    void addApples(int numApples) {
        apples = numApples;
        cout << "The number of Apples are: " << apples << endl;
    }
};

class Mangoes : public Fruit {
public:
    int mangoes;

    void addMangoes(int numMangoes) {
        mangoes = numMangoes;
        cout << "The number of Mangoes are: " << mangoes << endl;
    }
};

int main() {
    int apples, mangoes;
    Apples obj1;
    Mangoes obj2;

    cout << "Enter the number of apples: ";
    cin >> apples;
    obj1.addApples(apples);

    cout << "Enter the number of mangoes: ";
    cin >> mangoes;
    obj2.addMangoes(mangoes);

    int totalFruits = apples + mangoes;
    obj1.addFruits(totalFruits);

    return 0;
}
