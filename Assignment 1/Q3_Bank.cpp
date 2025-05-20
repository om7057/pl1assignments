#include<iostream>
using namespace std;

class Account{
   protected:
   string name;
   string accountNumber;
   float balance;
   public:
   void initialValues();
   void depositAmount();
   void withdrawAmount();
   void display();
   int exit();
};


void Account::initialValues(){
   cout<<"Enter the name of the account holder:\n";
   getline(cin,name);
   cout<<"Enter the account number:\n";
   cin>>accountNumber;
   cout<<"Your Account has been created!!\n";
   cout<<"\n\n\n";
}

void Account::depositAmount(){
    float deposit;
    cout<<"Enter the amount to be deposited:\n";
    cin>>deposit;
    balance+=deposit; 
    cout<<"Rs."<<deposit<<"  have been deposited to the account."<<endl;
    cout<<"\n\n\n";
}
void Account::withdrawAmount(){
    float withdraw;
    cout<<"Enter the amount to be withdrawn:\n";
    cin>>withdraw;
    if(balance>=withdraw){
    balance-=withdraw;
    }
    else{
        cout<<"Insufficient Balance!!\n";
    }
    cout<<"\n\n\n";
    cout<<"Amount has been withdrawn!!";
    cout<<"\n\n\n";
}
void Account::display(){
    cout<<"Account Name:\n"<<name<<endl;
    cout<<"Account Number:\n"<<accountNumber<<endl;
    cout<<"Current Balance:\n"<<balance<<endl;
    cout<<"\n\n\n";
}
int Account::exit(){
    return 0;
}
int main(){
    int mainchoice;
    Account obj;
    do{
    cout<<"Menu"<<endl;
    cout<<"1.Assign Initial Values"<<endl;
    cout<<"2.Deposit Amount"<<endl;
    cout<<"3.Withdraw Amount"<<endl;
    cout<<"4.View Account Details"<<endl;
    cout<<"5.Exit the Program"<<endl;
    cout<<"Enter Your Choice(1-5)\n";
    cin>>mainchoice;
    cin.ignore();
    if(mainchoice==1){
        obj.initialValues();
    }
    else if(mainchoice==2){
        obj.depositAmount();
    }
    else if(mainchoice==3){
        obj.withdrawAmount();
    }
    else if(mainchoice==4){
        obj.display();
    }
    else if(mainchoice==5){
        obj.exit();
    }
    else {
        cout << "Invalid choice. Please enter a valid option (1-5)." << endl;
    }
    }while(mainchoice!=5);
    return 0;
}
