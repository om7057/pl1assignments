#include<iostream>
using namespace std;

class Operations{
   public:
   int a,b;
   double u,v;
   string p,q;
   void operate(int a,int b);
   void operate(double a,double b);
   void operate(string a,string b);
};

void Operations::operate(int ia,int ib){
   a=ia;
   b=ib;
   cout<<"The sum of integers is: "<<a+b<<endl;
}


void Operations::operate(double iu,double iv){
   u=iu;
   v=iv;
   cout<<"The product of double type numbers is: "<<u*v<<endl;
}

void Operations::operate(string ip,string iq){
   p=ip;
   q=iq;
   cout<<"The concatenated string is: "<<p+q<<endl;
}


int main(){
    int a,b;
    double u,v;
    string p,q;
    Operations object;
    cout<<"Enter two integers to be added: "<<endl;
    cin>>a>>b;
    object.operate(a,b);
    cout<<endl;
    cout<<"Enter two double type numbers to be operated on: "<<endl;
    cin>>u>>v;
    object.operate(u,v);
    cout<<endl;
    cout<<"Enter two strings to be concatenated (separated by a space): "<<endl;
    cin>>p>>q;
    object.operate(p,q);
    cout<<endl;
    

    return 0;
}