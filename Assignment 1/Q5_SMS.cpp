#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
void menu();
class Student
{
    string Sname,SID,SClass;
    char SGrade;
public:
    void addS();
    void removeS();
    void updateS();
    void fetchS();
    
};
class Teacher
{
    string Tname,TID,TSubject,TSalary;
public:
    void addT();
    void removeT();
    void updateT();
    void fetchT();
    
};

class Course
{
    string Cname,CID,CassignedTID,CSIDs;
public:
    void addC();
    void removeC();
    void updateC();
    void fetchC();
};
void Student::addS() {
    ofstream out("Registered_Students.txt", ios::app);
    if (!out) {
        cout << "Failed to open file." << endl;
        return;
    }
    cout << "Enter the ID of the student: ";
    cin >> SID;
    cin.ignore(); 

    cout << "Enter the name of the student: ";
    getline(cin, Sname);
        
    cout << "Enter the Class of the student(FY/SY/TY/LY): ";
    getline(cin, SClass);
    
    cout << "Enter the current Grade(A-F) of the student: ";
    cin>>SGrade;
    if(SGrade=='A'||SGrade=='B'||SGrade=='C'||SGrade=='D'||SGrade=='E'||SGrade=='F'){
out  << "Student ID: " << SID << endl
        << "Name: " << Sname << endl
        << "Student Class: " << SClass << endl
        << "Student Grade: " << SGrade << endl
        <<"-------------------"<<endl;

    cout << "Student was successfully registered!" << endl;
    out.close();
  cout<<"------------------------------"<<endl;
    
  menu();
    }
else{
  cout<<"Please enter a valid Grade !!\n";
  addS();
}
 
}

void Teacher::addT() {
    ofstream out("Registered_Teachers.txt", ios::app);
    if (!out) {
        cout << "Failed to open file." << endl;
        return;
    }
    cout << "Enter the ID of the teacher: ";
    cin >> TID;
    cin.ignore(); 

    cout << "Enter the name of the teacher: ";
    getline(cin, Tname);
        
    cout << "Enter the Subject of the Teacher ";
    getline(cin, TSubject);
    
    cout << "Enter the Salary of the Teacher: ";
    getline(cin, TSalary);

   out  << "Teacher ID: " << TID << endl
        << "Name: " << Tname << endl
        << "Teacher Subject: " << TSubject << endl
        << "Teacher Salary: " << TSalary << endl
        <<"-------------------"<<endl;

    cout << "Teacher was successfully registered!" << endl;
    out.close();
  cout<<"------------------------------"<<endl;
  menu();
}


void Course::addC() {
    ofstream out("Registered_Courses.txt", ios::app);
    if (!out) {
        cout << "Failed to open file." << endl;
        return;
    }
    cout << "Enter the ID of the course: ";
    cin >> CID;
    cin.ignore(); 

    cout << "Enter the name of the course: ";
    getline(cin, Cname);
        
    cout << "Enter the ID of the Course Teacher ";
    getline(cin, CassignedTID);
    
    cout << "Enter the number of students to get enrolled into: ";
    getline(cin, CSIDs);

   out  << "Course ID: " << CID << endl
        << "Course Name: " << Cname << endl
        << "Teacher ID assigned for the course " << CassignedTID << endl
        << "Number of Registered Students : " << CSIDs << endl
        <<"-------------------"<<endl;

    cout << "Course was successfully registered!" << endl;
    out.close();
  cout<<"------------------------------"<<endl;
  menu();
}


void Student::removeS(){
  string ID;
  cout<<"Enter the ID of the student to be removed: ";
  cin.ignore();
  getline(cin,ID);
  ifstream in("Registered_Students.txt");
  ofstream temp("temp.txt");
  
  bool studentfound = false;
    string line;
    while (getline(in, line)) {
        if (line.find("Student ID: " + ID) != string::npos) {
            studentfound = true;
            cout << "Student found. Removing student information." << endl;
            
            for (int i = 0; i < 3; ++i) {
                getline(in, line);
            }
        } else {
            temp << line << endl;
        }
    }
  in.close();
  temp.close();
  if (studentfound) {
     int c;
        remove("Registered_Students.txt");
        rename("temp.txt", "Registered_Students.txt");
        cout << "Student information removed successfully!" << endl;
    } 
    else {
        cout << "Student with ID " << ID << " not found." << endl;
        remove("temp.txt");
    }
    menu();
}

void Teacher::removeT(){
  string ID;
  cout<<"Enter the ID of the teacher to be removed: ";
  cin.ignore();
  getline(cin,ID);
  ifstream in("Registered_Teachers.txt");
  ofstream temp("temp.txt");
  
  bool teacherfound = false;
    string line;
    while (getline(in, line)) {
        if (line.find("Teacher ID: " + ID) != string::npos) {
            teacherfound = true;
            cout << "Teacher found. Removing teacher information." << endl;
            
            for (int i = 0; i < 3; ++i) {
                getline(in, line);
            }
        } else {
            temp << line << endl;
        }
    }
  in.close();
  temp.close();
  if (teacherfound) {
     int c;
        remove("Registered_Teachers.txt");
        rename("temp.txt", "Registered_Teachers.txt");
        cout << "Teacher information removed successfully!" << endl;
    } 
    else {
        cout << "Teacher with ID " << ID << " not found." << endl;
        remove("temp.txt");
    }
    menu();
}




void Course::removeC(){
  string ID;
  cout<<"Enter the ID of the course to be removed: ";
  cin.ignore();
  getline(cin,ID);
  ifstream in("Registered_Courses.txt");
  ofstream temp("temp.txt");
  
  bool coursefound = false;
    string line;
    while (getline(in, line)) {
        if (line.find("Course ID: " + ID) != string::npos) {
            coursefound = true;
            cout << "Course found. Removing student information." << endl;
            
            for (int i = 0; i < 3; ++i) {
                getline(in, line);
            }
        } else {
            temp << line << endl;
        }
    }
  in.close();
  temp.close();
  if (coursefound) {
     int c;
        remove("Registered_Courses.txt");
        rename("temp.txt", "Registered_Courses.txt");
        cout << "Course information removed successfully!" << endl;
    } 
    else {
        cout << "Course with ID " << ID << " not found." << endl;
        remove("temp.txt");
    }
    menu();
}



void Student::updateS(){
   string ID;
   cout<<"Enter the ID of the student of which the information is updated: ";
   cin.ignore();
   getline(cin,ID);
   ifstream in("Registered_Students.txt");
   ofstream temp("temp.txt");

   bool studentfound=false;
   string line;
   while(getline(in,line)){
    if(line.find("Student ID: "+ID)!=string::npos){
      studentfound=true;
    cout<<"Student Found. Updating the Information. "<<endl;
    for(int i=0;i<4;i++){
      getline(in,line);
    }
     cout << "Enter the updated ID of the student: ";
              getline(cin,SID);
     
            cout<<"Enter the updated name of the student: ";
            getline(cin, Sname);

            cout << "Enter the updated Class of the student:(FY/SY/TY/LY) ";
            getline(cin, SClass);

            cout << "Enter the updated Grade(A-F) of the student: ";
            cin>>SGrade;

            temp << "Student ID: " << SID << endl
                 << "Name: " << Sname << endl
                 << "Student Class: " << SClass << endl
                 << "Student Grade: " << SGrade << endl
                 << "-------------------" << endl;
    }
    else{
      temp<<line<<endl;
    }
   }
   in.close();
   temp.close();
   if (studentfound) {
        remove("Registered_Students.txt");
        rename("temp.txt", "Registered_Students.txt");
        cout << "Student information updated successfully!" << endl;
    } else {
        cout << "Student with ID " << ID << " not found." << endl;
        remove("temp.txt");
    }
    menu();
}

void Teacher::updateT(){
   string ID;
   cout<<"Enter the ID of the teacher of which the information is updated: ";
   cin.ignore();
   getline(cin,ID);
   ifstream in("Registered_Teachers.txt");
   ofstream temp("temp.txt");

   bool teacherfound=false;
   string line;
   while(getline(in,line)){
    if(line.find("Teacher ID: "+ID)!=string::npos){
      teacherfound=true;
    cout<<"Teacher Found. Updating the Information. "<<endl;
    for(int i=0;i<4;i++){
      getline(in,line);
    }
     cout << "Enter the updated ID of the teacher: ";
              getline(cin,TID);
     
            cout<<"Enter the updated name of the techer: ";
            getline(cin, Tname);

            cout << "Enter the updated Subject of the teacher ";
            getline(cin, TSubject);

            cout << "Enter the updated Salary of the Teacher ";
            getline(cin, TSalary);

            temp << "Teacher ID: " << TID << endl
                 << "Name: " << Tname << endl
                 << "Teacher Subject: " << TSubject << endl
                 << "Teacher Salary: " << TSalary << endl
                 << "-------------------" << endl;
    }
    else{
      temp<<line<<endl;
    }
   }
   in.close();
   temp.close();
   if (teacherfound) {
        remove("Registered_Teachers.txt");
        rename("temp.txt", "Registered_Teachers.txt");
        cout << "Teacher information updated successfully!" << endl;
    } else {
        cout << "Teacher with ID " << ID << " not found." << endl;
        remove("temp.txt");
    }
    menu();
}

void Course::updateC(){
   string ID;
   cout<<"Enter the ID of the course of which the information is updated: ";
   cin.ignore();
   getline(cin,ID);
   ifstream in("Registered_Courses.txt");
   ofstream temp("temp.txt");

   bool coursefound=false;
   string line;
   while(getline(in,line)){
    if(line.find("Course ID: "+ID)!=string::npos){
      coursefound=true;
    cout<<"Course Found. Updating the Information. "<<endl;
    for(int i=0;i<4;i++){
      getline(in,line);
    }
     cout << "Enter the updated ID of the course: ";
              getline(cin,CID);
     
            cout<<"Enter the updated name of the course: ";
            getline(cin, Cname);

            cout << "Enter the updated techer ID of the course ";
            getline(cin, CassignedTID);

            cout << "Enter the new number of students to be enrolled in the course ";
            getline(cin,CSIDs);

            temp << "Course ID: " << CID << endl
                 << "Name of the course: " << Cname << endl
                 << "Teacher ID of the course: " << CassignedTID << endl
                 << "Number of Students Enrolled: " << CSIDs << endl
                 << "-------------------" << endl;
    }
    else{
      temp<<line<<endl;
    }
   }
   in.close();
   temp.close();
   if (coursefound) {
        remove("Registered_Courses.txt");
        rename("temp.txt", "Registered_Courses.txt");
        cout << "Course information updated successfully!" << endl;
    } else {
        cout << "Course with ID " << ID << " not found." << endl;
        remove("temp.txt");
    }
    menu();
}




void Student::fetchS(){
   ifstream in("Registered_Students.txt");
   if(!in){
    cout<<"Unable to fetch registered students."<<endl;
    return;
   }
   string line;
   while(getline(in,line)){
    cout<<line<<endl;
   }
   in.close();
  
  menu();
}


void Teacher::fetchT(){
   ifstream in("Registered_Teachers.txt");
   if(!in){
    cout<<"Unable to fetch registered teachers."<<endl;
    return;
   }
   string line;
   while(getline(in,line)){
    cout<<line<<endl;
   }
   in.close();
  
  menu();
}


void Course::fetchC(){
   ifstream in("Registered_Courses.txt");
   if(!in){
    cout<<"Unable to fetch registered courses."<<endl;
    return;
   }
   string line;
   while(getline(in,line)){
    cout<<line<<endl;
   }
   in.close();
  
  menu();
}



void courseMenu(){
   int choicecourse;
          cout<<"1.Add a course"<<endl;
          cout<<"2.Remove a course"<<endl;
          cout<<"3.Update a course"<<endl;
          cout<<"4.Fetch courses"<<endl;
          cout<<"5.Return to main menu."<<endl;
            cin>>choicecourse;
             Course obj;
           if(choicecourse==1){
            obj.addC();
           }
           else if(choicecourse==2){
            obj.removeC();
           }
           else if(choicecourse==3){
            obj.updateC();
           }
           else if(choicecourse==4){
            obj.fetchC();
           }
           else{
            menu();
           }
}
void teacherMenu(){
   int choiceteacher;
          cout<<"1.Add a teacher"<<endl;
          cout<<"2.Remove a teacher"<<endl;
          cout<<"3.Update a teacher"<<endl;
          cout<<"4.Fetch a teacher"<<endl;
          cout<<"5.Return to main menu"<<endl;
           cin>>choiceteacher;

      Teacher obj;
           if(choiceteacher==1){
            obj.addT();
           }
           else if(choiceteacher==2){
            obj.removeT();
           }
           else if(choiceteacher==3){
            obj.updateT();
           }
           else if(choiceteacher==4){
            obj.fetchT();
           }
           else{
            menu();
           }
}




void studentMenu(){
   int choicestudent;
          cout<<"1.Add a student"<<endl;
          cout<<"2.Remove a student"<<endl;
          cout<<"3.Update a student"<<endl;
          cout<<"4.Fetch registered students"<<endl;
          cout<<"5.Return to main menu"<<endl;
          cout<<"Enter your choice: ";
           cin>>choicestudent;
    Student obj;       
           if(choicestudent==1){
            obj.addS();
           }
           else if(choicestudent==2){
            obj.removeS();
           }
           else if(choicestudent==3){
            obj.updateS();
           }
           else if(choicestudent==4){
            obj.fetchS();
           }
           else{
            menu();
           }
}
void menu(){
   int choice;
   cout<<"\n";
        cout << "\t\t\t   ------Welcome to School Management System------" << endl;
        cout<<endl<<endl;
        cout << "\t\t\t\t\t1.Student Section" << endl;
        cout << "\t\t\t\t\t2.Teacher Section" << endl;
        cout << "\t\t\t\t\t3.Course Section" << endl;
        cout << "\t\t\t\t\t4.Exit" << endl<<endl;
        cout << "Your Choice(1-4): ";
        cin >> choice;

        if (choice == 1){
          studentMenu();
        }
        else if(choice==2){
          teacherMenu();
        }
        else if(choice==3){
          courseMenu();
        }
        else if(choice==4){
          return ;
        }
        else{
          cout<<"\n\n           Please enter a valid choice out of (1-4)!!\n";
          menu();
        }
}
int main()
{
    menu();
    return 0;
}