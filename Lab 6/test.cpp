#include <iostream>
using namespace std;

double bill(float, float);
double bill(float, float, float);

int main(){
    float plan;
    float service;
    float test;
    float medicine;
    float charge;
    
    cout << "Please input a one if you are a member of the dental plan" <<endl 
    << "Input any other number if you are not" <<endl;

    cin >> plan;

    if(plan == 1){
        cout << "Please input the service charge" <<endl;
        cin >> service;

        cout << "Please input the test charges"<<endl;
        cin >> test;

        charge = bill(service, test);
    }
    else{
        cout << "Please input the service charge"<<endl;
        cin >> service;

        cout << "Please input the test charges"<<endl;
        cin >> test;    

        cout << "Please input the medicine charges"<<endl;
        cin >> medicine;

        charge = bill(service, test, medicine);
    }

    cout << "The total bill is $" << charge;
}

double bill(float service, float test){
    return service + test;
}

double bill(float service, float test, float medicine){

    return service + test + medicine;
}