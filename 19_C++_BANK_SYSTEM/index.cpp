#include<iostream>
#include<string>
using namespace std;

class bank{

    private:
    string name = "vaishali chauhan";
    string email = "vaishali@gmail.com";
    long long int phone = 1234567890;
    long long int accno = 461287383455;
    string password = "vaishali123";
    int balance = 3000;
    int pin = 2801;

    public:
    bool login(string email,string password){
        if(this->email == email && this->password == password){
            return true;
        }else{
            return false;
        }
    }

    void getbalance(int pin){
        if(this->pin == pin){
            cout << "Your balance is :" << this->balance << endl;
        }else{
            cout << "Envalid pin...!" << endl;
        }

    }
    void deposite(int pin ,int amount){
        if(this->pin == pin)
        {
           this->balance += amount;
           cout << "Deposite successfully...!"<< endl;

        }else{
            cout << "Envalid pin...!" << endl;
        }

    }
    void withdraw(int pin,int amount){
        if(this->pin == pin){
           if(this->balance<amount)
           {
             cout << "Insufficiant balace...!" << endl;
           }else{
             this->balance -= amount;
            cout << "Widrawal is successfully" << endl;
           }
        }else{
            cout << "Envalid pin...!" << endl;
        }
    }
    void profile(int pin){
        if(this->pin == pin)
        {
            cout << "Your name is :"<< this->name << endl;
            cout << "Your email is :" << this->email << endl;
            cout << "Your account no. is : "<< this->accno << endl;
            cout << "Your phone number is : "<<this->phone << endl; 

        }else{
            cout << "envalid pin...!" << endl;
        }
    }
    void changepin(int pin ,int newpin){
        if(this->pin == pin)
        {
          this->pin = newpin;
        }else{
            cout << "Old pin is wrong" << endl;
        }
    }
};

int main(){

    bank sbi;
    int choice,pin ,amount, account;
    string email,password;

    cout << "enter email :";
    cin >> email;
    cout <<"enter password :";
    cin >> password;

    if(sbi.login(email,password)){

        while(choice != 0){

            cout << "Press 1 for get balance" << endl;
            cout << "Press 2 for deposite" << endl;
            cout << "Press 3 for withdraw" <<endl;
            cout << "Press 4 for my profile" << endl;
            cout << "press 5 for change pin" << endl;
            cout << "Press 0 for log out" << endl;

            cout << "Enter your choice :";
            cin >> choice ;

            switch (choice)
            {
            case 1:
                cout << "Enter pin :";
                cin >> pin;
                sbi.getbalance(pin);
                break;
            case 2:
                cout << "Enter pin :";
                cin >> pin;
                cout << "Enter deposite amount :";
                cin >> amount;
                sbi.deposite(pin,amount);
                break;
            case 3:
                cout << "Enter pin :";
                cin >> pin;
                cout << "Enter withdraw amount:";
                cin >> amount;
                sbi.withdraw(pin,amount);
                break;
            case 4:
                cout << "Enter pin :";
                cin >> pin;
                sbi.profile(pin);
                break;
            case 5:
                cout << "Enter pin :";
                cin >> pin;
                int newpin;
                cout << "Enter newpin :";
                cin >> newpin;
                sbi.changepin(pin,newpin);
                break;
            default:cout << "envalid choice" << endl;
                break;
            }
            cout << "---------------------------------------"<< endl;
        }

    }else{
        cout << "invalid crediantial" << endl;
    }


    return 0;
}