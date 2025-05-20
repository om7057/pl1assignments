#include<iostream>
using namespace std;
class Car{
    string makecar,modelcar;
    int year;
    public:
    void initializingCar(string makecar,string modelcar,int year){
        makecar=makecar;
        modelcar=modelcar;
        year=year;
    }
    void initializingCar();
    string getMake();
    string getModel();
    int getYear();
    void displayCar();
};
void Car::displayCar(){
    Car p;
    string x=p.getMake();
    string y=p.getModel();
    int z=p.getYear();
    cout<<endl;
    cout<<"The make of the Car:"<<x<<endl;
    cout<<"The model of the car:"<<y<<endl;
    cout<<"The Year of the launching of the car:"<<z<<endl;

}
string Car::getMake(){
    cout<<"Input the making of the car:"<<endl;
    cin>>makecar;
    string s;
    s=makecar;
    return s;
}

string Car::getModel(){
    cout<<"Input the model of the car:"<<endl;
    cin>>modelcar;
    string s;
    s=modelcar;
    return s;
}


int Car::getYear(){
    cout<<"Input the year in which the car was launched:"<<endl;
    cin>>year;
    return year;
    }


int main(){
    Car a;
    string makecar,modelcar;
    int year;
    a.initializingCar(makecar,modelcar,year);
    a.displayCar();
    return 0;
}