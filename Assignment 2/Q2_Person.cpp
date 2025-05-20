#include<iostream>
#include<string>
using namespace std;


class Person{
    private:
    string name;
    int age;
    public:
    Person(){
        cout<<"This is the default constructor."<<endl;
    }
    Person(string iname,int iage){
      cout<<"Parametrized constructor called."<<endl;
      name=iname;
      age=iage;
    }
    Person(Person &t){
        cout<<"Copy constructor called."<<endl;
        name=t.name;
        age=t.age;
    }
void display(){
    cout<<"The name of the person is: "<<name<<" and the age is: "<<age<<endl;
}
};


int main(){
    string name;
    int age;
    cout<<"Enter the name of the person: "<<endl;
    cin>>name;
    cout<<"Enter the age of the person: "<<endl;
    cin>>age;
    Person object;
    Person object1(name,age);
    object1.display();

    Person object2=object1;
    object2.display();
    return 0;
}