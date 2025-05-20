#include<iostream>
using namespace std;

class Student{
   int rollNumber;
   string name;
   double marks[3];

public:
void SetStudent();
int getRollNumber();
string getName();
double getMarks();
double calculateAverage();
char calculateGrade();
double average;
};


void Student::SetStudent(){
    
    cout<<"Enter the Roll Number:\n";
    cin>>rollNumber;
    cin.ignore();
    cout<<"Enter the Name:\n";
    cin.ignore();
    getline(cin,name);
    cout<<"Enter the marks obtained in the 3 subjects:(Out of 100)\n";
    for(int i=0;i<3;i++){cin>>marks[i];}
}
int Student::getRollNumber(){
   return rollNumber; 
}
string Student::getName(){
    return name;
}
double Student::getMarks(){
    for(int i=0;i<3;i++){
        return marks[i];
    }
}
double Student::calculateAverage(){
   average=(marks[0]+marks[1]+marks[2])/3;
   return average;
}
char Student::calculateGrade(){

   if(average>=90&&average<=100){
    return 'A';
   }
   else if(average>=80&&average<=90){
    return 'B';
   }
   else if(average>=70&&average<=80){
    return 'C';
   }
   else if(average>=60&&average<=70){
    return 'D';
   }
   else if(average>=50&&average<=60){
    return 'E';
   }
   else{
    return 'FF';
   }
}
int main(){
    int studetncount;
    cout<<"Enter the number of students:\n";
    cin>>studetncount;
    Student obj[studetncount];
    for(int i=0;i<studetncount;i++){
        cout<<"Enter Student Info:"<<i+1<<endl;
        obj[i].SetStudent();
        cout<<endl;
    }
    cout<<"Results:\n";
    for(int i=0;i<studetncount;i++){
        cout<<"Student: "<<i+1<<endl;
        cout<<"Student Roll Number:"<<obj[i].getRollNumber()<<endl;
        cout<<"Name:"<<obj[i].getName()<<endl;  
       cout<<"The Average of the student is:"<<obj[i].calculateAverage()<<endl;
       cout<<"The Grade of the student is:"<<obj[i].calculateGrade()<<endl;
       cout<<endl;
       }
       return 0;
}