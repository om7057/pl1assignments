#include<iostream>
using namespace std;

class Team{
    string arr[10];
    int counter=0;
 public:
 string name;

 Team(){
      for(int i=0;i<10;i++){
        arr[i]="0";
      }   
   }

 void addMember(string name);
 void addMember();
 void displayTeam();
};

void Team::addMember(string iname){
       if(counter>=10){
        cout<<"The team has been completed."<<endl;
        
    }
    else{
        arr[counter]=iname;
        counter++;
 }
}
void Team::addMember(){
    if(counter>=10){
        cout<<"The team has been completed already."<<endl;
    }
    else{
        cout<<"\n\n             Team with Generic names of Members: "<<endl;
        for(int i=0;i<10;i++){
            arr[i]="Unknown"+to_string(i+1);
            counter++;
        }
    }
}

void Team::displayTeam(){
  for(int i=0;i<10;i++){
    cout<<arr[i]<<" ";
  }
}


int main(){
    string name;
    Team obj;
    Team obj1;
    cout<<"Enter the name of team members for a team of 10 persons (Separated by spaces): "<<endl;
    for(int i=0;i<10;i++){
    cin>>name;
    obj.addMember(name);
    }
    cout<<"\n\n             Your Entered Team is: \n";
    obj.displayTeam();
    obj1.addMember();
    obj1.displayTeam();
    return 0;
}