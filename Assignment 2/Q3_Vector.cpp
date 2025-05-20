#include<iostream>
#include<vector>
using namespace std;


class Vector{
    private:
    int size;
    double *p;
public:
Vector(){
  size=5;
  p=new double[size];
  for(int i=0;i<size;i++){
    p[i]=0.00;
  }
}
Vector(int isize){
    size=isize;
    p=new double[size];
    for(int i=0;i<size;i++){
        p[i]=0.00;
    }
  }


~Vector(){
    delete[] p;
}

void display(){
    for(int i=0;i<size;i++){
        cout<<p[i]<<" ";
    }
}
};


int main(){
  int size;
  cout<<"Enter the size of the array: "<<endl;
  cin>>size;
     Vector object(size);
     object.display();

    return 0;
}