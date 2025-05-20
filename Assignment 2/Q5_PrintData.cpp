#include<iostream>
using namespace std;

class printData{
   public:
   int x;
   double y;
   string z;
   void print(int x);
   void print(double y);
   void print(string z);

   
};

void printData::print(int ix){
     x=ix;
     cout<<"The integer entered was: "<<x<<endl;
}
void printData::print(double iy){
     y=iy;
     cout<<"The double typed number entered was: "<<y<<endl;
}
void printData::print(string iz){
     z=iz;
     cout<<"The string entered was: "<<z<<endl;
}


int main(){
    int x;
    double y;
    string z;
    printData obj;
    cout<<"Enter an integer: "<<endl;
    cin>>x;
    obj.print(x);
    cout<<"Enter a double type number: "<<endl;
    cin>>y;
    obj.print(y);
    cout<<"Enter a string: "<<endl;
    cin.ignore();
    getline(cin,z);
    obj.print(z);
    return 0;
}