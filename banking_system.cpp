#include<iostream>
using namespace std;

    int basic_no=83567690;
    int no_series=0;
    
//-------------- this class store the persons data -------------->
class bank_system{
    public:
    string name[10];
    int account[10];
    int balance[10];
    int pincode[10];    
};
//--------------- this class is used for all opertions and input ----------->
class bank {
private:
    int pin;
public:
    string name;
    int account;
    int balance;
    bank_system person;
    

   
    //---------- this function is used for create account of user -------------------->
   void create_account(){
        cout<<"Welcome to Lena Dena bank"<<endl;
        cout<<"for create account first enter name: ";
        cin>>name;
        account=basic_no+no_series;
        cout<<"\n we have assigned a account number to you :- "<<account<<endl;
        cout<<"enter pin but carefully 4 digit :- ";
        cin>>pin;
        balance=0;
        cout<<"\n your account is created succesfully\n\n"<<endl;
        person.name[no_series]=name;
        person.account[no_series]=account;
        person.pincode[no_series]=pin;
        person.balance[no_series]=balance;
        no_series++;
    }
    //------------ this function is used for display the nessasry details for user ------------>
    void inquery(){
        string name;
        int i,pin,count=0;
        cout<<"\n enter your name :- ";
        cin>>name;
        for(i=0;i<=no_series;i++){
            if(name==person.name[i]){
                 count++;
                 break;
            }
            
        }

        if(count>0){
        cout<<"\n enter pin number :- ";
        cin>>pin;
        if(pin==person.pincode[i]){
        cout<<"\n your account information below :- "<<endl<<"account holder name is :- "<<person.name[i]<<endl<<"account no is :- "<<person.account[i]<<endl<<"balance is RS :- "<<person.balance[i]<<"\n\n";
    }else{
        cout<<"\n your account not found mrs."<<name<<endl;
    }
    
    }
    }
    //------------------ this function is used for add cash in bank of user ----------------->
    void credit(){
        int pin,count,amount,i;
        string name;
        cout<<"\n enter your name :- ";
        cin>>name;
        for(i=0;i<=no_series;i++){
            if(name==person.name[i]){
               count++;
               break;
            }
        }
        
        if(count>0){
        cout<<"\n enter your pin number :- ";
        cin>>pin;
        
        if(pin==person.pincode[i]){
             cout<<"\n enter credit amount :- ";
             cin>>amount;
             person.balance[i]=person.balance[i]+amount;
        }
        
        else{
            cout<<"your account not registerd in lena dena bank"<<endl;
        }
    }
    }
    //----------------- this function is used for withdraw cash of user ------------------------->
    void deposite(){
        int amount,pin,count,i;
        string name;
        cout<<"\n enter your name :- ";
        cin>>name;
        for(i=0;i<=no_series;i++){
            if(name==person.name[i]){
                count++;
                break;
            }
        }
        if(count>0){
            cout<<"\n enter pin number :- ";
            cin>>pin;
            if(pin==person.pincode[i])
                cout<<"\n enter withdraw amount :- ";
                cin>>amount;
                person.balance[i]=person.balance[i]-amount;
            }
        }
       /* 
       void print(){
            int i;
            for(i=0;i<=no_series;i++){
                cout<<person.name[i]<<endl;
                cout<<person.account[i]<<endl;
                cout<<person.balance[i]<<endl;
                cout<<"\n";
            }
        }*/ 
};

int main() {
    int num;
    char inq,service;
    bank b;
    do{
        cout<<"Do you want to open account"<<endl<<"if yes Type y"<<endl;
    cout<<"Do you want to see the account information"<<endl<<"if yes type i"<<endl;
    cout<<"do you want to credit money in your account"<<endl<<"if yes type a"<<endl;
    cout<<"Do you want to deposite money from account"<<endl<<"if yes type w"<<endl;
    cin>>inq;
    
    switch(inq){
        case 'y':
       b.create_account();
        break;
        case 'i':
        b.inquery();
        break;
        case 'a':
       b.credit();
        break;
        case 'w':
        b.deposite();
        break;
    }
    cout<<"do you want any other services :- "<<endl<<"type Y :- "<<endl;
    cin>>service;
    }while(service=='Y'||service=='y');

    return 0;
}