#include<iostream>
#include<string>
using namespace std;

 string name;
 string contact_number;
 string age;
 string city;
 


void register_new();
void join();
void display_menu();
void login(int pin_n);
void display_account_details(); 
void account_balance(double bal);
void deposit(double &bal1);
void withdraw(double &bal3);


int main(){
    double balance{0.00};
    char choise;
    register_new();

    cout<<"\nEnter Your Choise: ";
    cin>>choise;

    do{
        switch(choise){
        case 'D':
        display_account_details();
        cout<<"\n\nEnter Your Choise: ";
        cin>>choise;

        break;

        case 'B':
        account_balance(balance);
        cout<<"\nEnter Your Choise: ";
        cin>>choise;

        break;

        case 'A':
        deposit(balance);
        cout<<"\nEnter Your Choise: ";
        cin>>choise;

        break;

        case 'W':
        withdraw(balance);
        cout<<"\nEnter Your Choise: ";
        cin>>choise;
        
        break;

      

    }



        

    }while(choise!='E');
    
    
    return 0;
}

void register_new(){
    char yes_no;
    cout<<"\n\nWelcome to Aman Bank.\nWould you like to create a bank account? [y/n] :";
    cin>>yes_no;
    if(yes_no=='y'){
        join();
    }else{
        cout<<"Okay! Have a good day ahead";
    }

}

void join(){
    int pin;
    char selection;
   
    cout<<"\nCongratulations! We are happy to have you here.";
    cout<<"\nEnter your name:";
    cin>>name;
    cout<<"\nEnter your Contact Number:";
    cin>>contact_number;
    cout<<"\nEnter your City:";
    cin>>city;
    cout<<"\nEnter your age:";
    cin>>age;
    
    cout<<"\nEnter your first pin: ";
    cin>>pin;
    cout<<"\nWe have set PIN for your account.For security reasons please do not share PIN with anyone";
    cout<<"\n\nYou may proceed to the dashboard of your account.";
    cout<<"\nAccount Number : 56987456321455X";
    cout<<"\nShould we redirect you there?[y/n] :";
    cin>>selection;

    if(selection=='y'){
        login(pin);
    }else{
        cout<<"\n Have a nice day. We are always here here to help you";
    }
}

void display_menu(){
    cout<<"Welcome to Aman Bank. We are happy to see you here";
    cout<<"\nWhat may we do for you?";
    cout<<"\n\nD=Display my account details";
    cout<<"\nB=Display account balance";
    cout<<"\nW=Withdraw money";
    cout<<"\nA=Deposit money";
    cout<<"\nC=Change account PIN";
    cout<<"\nE=Exit";

}

void login(int pin_n){
    int pass;

    cout<<"\n\nPlease enter your for digit PIN to proceed: ";
    cin>>pass;
    if(pass==pin_n){
        display_menu();
    }else{
        cout<<"\nThe PIN is incorrect.Please try again";
    }
}

void display_account_details(){
    cout<<"\n\nYour Account Details are as following:";
    cout<<"\nName:"<<name;
    cout<<"\nCity:"<<city;
    cout<<"\nContact Number:"<<contact_number;
    cout<<"\nAccount Number : 569D87456321T455X";
    cout<<"\nAccount Balance: Rs 0.00 only";
    cout<<"\nBranch Number: ASDFG8965LK41";
    cout<<"\nBank Timing: 9pm-5pm(MONDAY-SATURDAY";
    
}

void account_balance(double bal){
    double bal_1;
    bal_1=bal;
    cout<<"\nAccount Number: 569D87456321T455X" ;
    cout<<"Account Balance: Rs"<<bal_1;
    cout<<"";
}

void deposit(double &bal1){
    double bal2;
    cout<<"\nEnter the amount you want to add:";
    bal2;

    bal1=bal1+bal2;
    cout<<"\nThe deposit was successful";


}

void withdraw(double &bal3){

    double withdraw_amount;
    cout<<"\nEnter the amount you want to withdraw:";
    cin>>withdraw_amount;

    if(withdraw_amount<=bal3){
        cout<<"\nInsufficient balance in your account";
    }else{
        bal3=bal3-withdraw_amount;
        cout<<"\nWithdraw was succcessful";
    }


}






    



