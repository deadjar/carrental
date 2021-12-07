#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    string oldAcc;
    int daysExpect;
    string oldAcc1 = "Kierzen_Booc";
    string oldAcc2 = "Jeff_Sarra";
    string oldAcc3 = "Diowelsin_Albarida";
    int dayReserve;
    string resPick;
    char carmodel;
    string firstName;
    string lastName;
    string address;
    int persoContact;
    int age;
    string licenseType;
    int licenseNum;
    string firstnameEmergency;
    string lastnameEmergency;
    string relationshipEmergency;
    int emergencyContact;
    string addressEmergency;
    string payMethod;
    string reservePickup;
    int miniMany = 10;
    int regualrMany = 10;
    int vanMany = 5;
    int daysUsed;
    string validate;
    string monthReserve;
    char loop = 'Y';

    while (loop == 'y' || loop == 'Y')
    {
        cout << "\n\t\t                               Car Rental                   " << endl;
        cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
        cout << "New or Old Customer: ";
        cin >> validate;

        if (validate == "New")
        {
            cout << "\t\t\t|\tPlease Enter your First Name: "; // taking data from the user
            cin >> firstName;
            cout << "\t\t\t|\tPlease Enter your Last Name: "; // taking data from the user
            cin >> lastName;
            cout << "\t\t\t|\tPlease Enter your Age: "; // taking data from the user
            cin >> age;
            cout << "\t\t\t|\tAdress: "; // taking data from the user
            cin >> address;
            cout << "\t\t\t|\tLicense Number:  "; // taking data from the user
            cin >> licenseNum;
            cout << "\t\t\t|\tType of License:  "; // taking data from the user
            cin >> licenseType;
            cout << "\t\t\t|\tContact in case of emergency: " << endl; // taking data from the user
            cout << "\t\t\t|\tEmergency Contact First Name: ";
            cin >> firstnameEmergency;
            cout << "\t\t\t|\tEmergency Contact Last Name: ";
            cin >> lastnameEmergency;
            cout << "\t\t\t|\tAddress:";
            cin >> addressEmergency;
            cout << "\t\t\t|\tContact Number:";
            cin >> emergencyContact;
            cout << "\t\t\t|\tRelationship to the person:";
            cin >> relationshipEmergency;
            cout << endl;
        }
        else if (validate == "Old")
        {
            cout << "Choose an Old Account: ";
            cout << oldAcc1 << endl;
            cout << oldAcc2 << endl;
            cout << oldAcc3 << endl;
            cin >> oldAcc;
        }
        else
        {
        }
        cout << "Reserve or Pick-up: ";
        cin >> resPick;
        cout << "On what month?" << endl;
        cin >> monthReserve;

        if (resPick == "Reserve" && validate == "Old")
        {
            cout << "The license of " << oldAcc << " is ";
            cin >> licenseType;
            cout << "Days Available for " << monthReserve << endl;
            cout << "5, 10, 15, 20, 25" << endl;
            cout << "Choose a date: " << endl;
            cin >> dayReserve;
        }
        else if (resPick == "Pick-up" && validate == "Old")
        {
            cout << "The license of " << oldAcc << " is ";
            cin >> licenseType;
            cout << "Choose a car" << endl;
        }
        else
        {
        }

        if (resPick == "Reserve" && validate == "New")
        {
            cout << "Days Available for " << monthReserve << endl;
            cout << "5, 10, 15, 20, 25" << endl;
            cout << "Choose a date: " << endl;
            cin >> dayReserve;
        }
        else if (resPick == "Pick-up" && validate == "New")
        {
            cout << "Choose a car" << endl;
        }
        else
        {
        }
        cout << "--------------------------------------------------------------------------" << endl;
        if (licenseType == "Professional" && validate == "Old" && resPick == "Reserve")
        {

            cout << "These are the cars available for your license: ";
            cout << "\t\t\t\tPlease Select a Car" << endl; // giving user a choice to select among three different models
            cout << "\t\t\t\tEnter 'A' for Mini(Good for 3 to 4 persons)." << endl;
            cout << "\t\t\t\tEnter 'B' for Regular(Good for 5 persons)." << endl;
            cout << "\t\t\t\tEnter 'C' for Van(Good for 9-13 perosons)." << endl;
            cout << endl;
            cout << "\t\t\t\tChoose a Car from the above options: ";
            cin >> carmodel;
            cout << endl;
            cout << "--------------------------------------------------------------------------" << endl;

            if (carmodel == 'A' && miniMany != 0)
            {
                cout << "You have choose the Mini Car" << endl;
                cout << "Price of it is 1400 + 300 for exceeding days.";
                miniMany--;
            }
            else if (carmodel == 'B' && regualrMany != 0)
            {
                cout << "You have choose the Regular Car" << endl;
                cout << "Price of it is 1400 + 300 for exceeding days.";
                regualrMany--;
            }
            else if (carmodel == 'C' && vanMany != 0)
            {
                cout << "You have choose the Van" << endl;
                cout << "Price of it is 1400 + 300 for exceeding days.";
                vanMany--;
            }
            else
            {
            }
        }
        else if (licenseType == "Non-Professional" && validate == "Old" && resPick == "Reserve")
        {
            cout << "These are the cars available for your license: ";
            cout << "\t\t\t\tPlease Select a Car" << endl; // giving user a choice to select among three different models
            cout << "\t\t\t\tEnter 'A' for Mini(Good for 3 to 4 persons)." << endl;
            cout << "\t\t\t\tEnter 'B' for Regular(Good for 5 persons)." << endl;
            cout << endl;
            cout << "\t\t\t\tChoose a Car from the above options: ";
            cin >> carmodel;
            cout << endl;
            cout << "--------------------------------------------------------------------------" << endl;

            if (carmodel == 'A' && miniMany != 0)
            {
                cout << "You have choose the Mini Car" << endl;
                cout << "Price of it is 1400 + 300 for exceeding days.";
                miniMany--;
            }
            else if (carmodel == 'B' && regualrMany != 0)
            {
                cout << "You have choose the Regular Car" << endl;
                cout << "Price of it is 1400 + 300 for exceeding days.";
                regualrMany--;
            }
            else
            {
            }
        }
        else
        {
        }
        if (licenseType == "Professional" && validate == "New" && resPick == "Reserve")
        {

            cout << "These are the cars available for your license: ";
            cout << "\t\t\t\tPlease Select a Car" << endl; // giving user a choice to select among three different models
            cout << "\t\t\t\tEnter 'A' for Mini(Good for 3 to 4 persons)." << endl;
            cout << "\t\t\t\tEnter 'B' for Regular(Good for 5 persons)." << endl;
            cout << "\t\t\t\tEnter 'C' for Van(Good for 9-13 perosons)." << endl;
            cout << endl;
            cout << "\t\t\t\tChoose a Car from the above options: ";
            cin >> carmodel;
            cout << endl;
            cout << "--------------------------------------------------------------------------" << endl;

            if (carmodel == 'A' && miniMany != 0)
            {
                cout << "You have choose the Mini Car" << endl;
                cout << "Price of it is 1400 + 300 for exceeding days.";
                miniMany--;
            }
            else if (carmodel == 'B' && regualrMany != 0)
            {
                cout << "You have choose the Regular Car" << endl;
                cout << "Price of it is 1400 + 300 for exceeding days.";
                regualrMany--;
            }
            else if (carmodel == 'C' && vanMany != 0)
            {
                cout << "You have choose the Van" << endl;
                cout << "Price of it is 1400 + 300 for exceeding days.";
                vanMany--;
            }
            else
            {
            }
        }
        else if (licenseType == "Non-Professional" && validate == "New" && resPick == "Reserve")
        {
            cout << "These are the cars available for your license: ";
            cout << "\t\t\t\tPlease Select a Car" << endl; // giving user a choice to select among three different models
            cout << "\t\t\t\tEnter 'A' for Mini(Good for 3 to 4 persons)." << endl;
            cout << "\t\t\t\tEnter 'B' for Regular(Good for 5 persons)." << endl;
            cout << endl;
            cout << "\t\t\t\tChoose a Car from the above options: ";
            cin >> carmodel;
            cout << endl;
            cout << "--------------------------------------------------------------------------" << endl;

            if (carmodel == 'A' && miniMany != 0)
            {
                cout << "You have choose the Mini Car" << endl;
                cout << "Price of it is 1400 + 300 for exceeding days.";
                miniMany--;
            }
            else if (carmodel == 'B' && regualrMany != 0)
            {
                cout << "You have choose the Regular Car" << endl;
                cout << "Price of it is 1400 + 300 for exceeding days.";
                regualrMany--;
            }
            else
            {
            }
        }
        else
        {
        }
        if (licenseType == "Professional" && validate == "Old" && resPick == "Pick-up")
        {

            cout << "These are the cars available for your license: ";
            cout << "\t\t\t\tPlease Select a Car" << endl; // giving user a choice to select among three different models
            cout << "\t\t\t\tEnter 'A' for Mini(Good for 3 to 4 persons)." << endl;
            cout << "\t\t\t\tEnter 'B' for Regular(Good for 5 persons)." << endl;
            cout << "\t\t\t\tEnter 'C' for Van(Good for 9-13 perosons)." << endl;
            cout << endl;
            cout << "\t\t\t\tChoose a Car from the above options: ";
            cin >> carmodel;
            cout << endl;
            cout << "--------------------------------------------------------------------------" << endl;

            if (carmodel == 'A' && miniMany != 0)
            {
                cout << "You have choose the Mini Car" << endl;
                cout << "Price of it is 1400 + 300 for exceeding days.";
                miniMany--;
            }
            else if (carmodel == 'B' && regualrMany != 0)
            {
                cout << "You have choose the Regular Car" << endl;
                cout << "Price of it is 1400 + 300 for exceeding days.";
                regualrMany--;
            }
            else if (carmodel == 'C' && vanMany != 0)
            {
                cout << "You have choose the Van" << endl;
                cout << "Price of it is 1400 + 300 for exceeding days.";
                vanMany--;
            }
            else
            {
            }
        }
        else if (licenseType == "Non-Professional" && validate == "Old" && resPick == "Pick-up")
        {
            cout << "These are the cars available for your license: ";
            cout << "\t\t\t\tPlease Select a Car" << endl; // giving user a choice to select among three different models
            cout << "\t\t\t\tEnter 'A' for Mini(Good for 3 to 4 persons)." << endl;
            cout << "\t\t\t\tEnter 'B' for Regular(Good for 5 persons)." << endl;
            cout << endl;
            cout << "\t\t\t\tChoose a Car from the above options: ";
            cin >> carmodel;
            cout << endl;
            cout << "--------------------------------------------------------------------------" << endl;

            if (carmodel == 'A' && miniMany != 0)
            {
                cout << "You have choose the Mini Car" << endl;
                cout << "Price of it is 1400 + 300 for exceeding days.";
                miniMany--;
            }
            else if (carmodel == 'B' && regualrMany != 0)
            {
                cout << "You have choose the Regular Car" << endl;
                cout << "Price of it is 1400 + 300 for exceeding days.";
                regualrMany--;
            }
            else
            {
            }
        }
        else
        {
        }
        if (licenseType == "Professional" && validate == "New" && resPick == "Pick-up")
        {

            cout << "These are the cars available for your license: ";
            cout << "\t\t\t\tPlease Select a Car" << endl; // giving user a choice to select among three different models
            cout << "\t\t\t\tEnter 'A' for Mini(Good for 3 to 4 persons)." << endl;
            cout << "\t\t\t\tEnter 'B' for Regular(Good for 5 persons)." << endl;
            cout << "\t\t\t\tEnter 'C' for Van(Good for 9-13 perosons)." << endl;
            cout << endl;
            cout << "\t\t\t\tChoose a Car from the above options: ";
            cin >> carmodel;
            cout << endl;
            cout << "--------------------------------------------------------------------------" << endl;

            if (carmodel == 'A' && miniMany != 0)
            {
                cout << "You have choose the Mini Car" << endl;
                cout << "Price of it is 1400 + 300 for exceeding days.";
                miniMany--;
            }
            else if (carmodel == 'B' && regualrMany != 0)
            {
                cout << "You have choose the Regular Car" << endl;
                cout << "Price of it is 1400 + 300 for exceeding days.";
                regualrMany--;
            }
            else if (carmodel == 'C' && vanMany != 0)
            {
                cout << "You have choose the Van" << endl;
                cout << "Price of it is 1400 + 300 for exceeding days.";
                vanMany--;
            }
            else
            {
            }
        }
        else if (licenseType == "Non-Professional" && validate == "New" && resPick == "Pick-up")
        {
            cout << "These are the cars available for your license: ";
            cout << "\t\t\t\tPlease Select a Car" << endl; // giving user a choice to select among three different models
            cout << "\t\t\t\tEnter 'A' for Mini(Good for 3 to 4 persons)." << endl;
            cout << "\t\t\t\tEnter 'B' for Regular(Good for 5 persons)." << endl;
            cout << endl;
            cout << "\t\t\t\tChoose a Car from the above options: ";
            cin >> carmodel;
            cout << endl;
            cout << "--------------------------------------------------------------------------" << endl;

            if (carmodel == 'A' && miniMany != 0)
            {
                cout << "You have choose the Mini Car" << endl;
                cout << "Price of it is 1400 + 300 for exceeding days.";
                miniMany--;
            }
            else if (carmodel == 'B' && regualrMany != 0)
            {
                cout << "You have choose the Regular Car" << endl;
                cout << "Price of it is 1400 + 300 for exceeding days.";
                regualrMany--;
            }
            else
            {
            }
        }
        else
        {
        }
        cout << "How many days will you rent the car?" << endl;
        cin >> daysExpect;
        cout << "--------------------------------------------------------------------------" << endl;
        cout << "--------------------------------------------------------------------------" << endl;
        cout << "--------------------------------------------------------------------------" << endl;
        cout << "Invertory: Cars Left" << endl;
        cout << miniMany << endl
             << regualrMany << endl
             << vanMany << endl;
        cout << "--------------------------------------------------------------------------" << endl;
        cout << "--------------------------------------------------------------------------" << endl;
        cout << "--------------------------------------------------------------------------" << endl;
        cout << "Billing:" << endl;
        if (validate == "Old")
        {
            cout << "Billing:" << endl;
            cout << "\t\t\t|\tName: " << oldAcc;
            cout << "\t\t\t|\tType of Car: " << carmodel;
            if (carmodel == 'A')
            {
                cout << "You have choose the Mini Car" << endl;
                cout << "Amount to be paid: " << (1400 + daysExpect * 300) << endl;
            }
            else if (carmodel == 'B')
            {
                cout << "You have choose the Regular Car" << endl;
                cout << "Amount to be paid: " << (2200 + daysExpect * 400) << endl;
            }
            else if (carmodel == 'C')
            {
                cout << "You have choose the Van" << endl;
                cout << "Amount to be paid: " << (4500 + daysExpect * 400) << endl;
            }
            else
            {
            }
        }
        else
        {
        }
        cout << "Billing:" << endl;
        cout << "\t\t\t|\tName: " << firstName << " " << lastName;
        cout << "\t\t\t|\tType of Car: " << carmodel;
        if (carmodel == 'A')
        {
            cout << "You have choose the Mini Car" << endl;
            cout << "Amount to be paid: " << (1400 + daysExpect * 300) << endl;
        }
        else if (carmodel == 'B')
        {
            cout << "You have choose the Regular Car" << endl;
            cout << "Amount to be paid: " << (2200 + daysExpect * 400) << endl;
        }
        else if (carmodel == 'C')
        {
            cout << "You have choose the Van" << endl;
            cout << "Amount to be paid: " << (4500 + daysExpect * 400) << endl;
        }
        else
        {
        }
        cout << "Choose type of payment;" << endl;
        cout << "Paypal, Gcash, Cash, Bank" << endl;
        cin >> payMethod;

        if (payMethod == "Paypal")
        {
            cout << "Follow this payment method using Paypal" << endl;
        }
        else if (payMethod == "Gcash")
        {
            cout << "Follow this payment method using Gcash" << endl;
        }
        else if (payMethod == "Cash")
        {
            cout << "Follow this payment method using Gcash" << endl;
        }
        else if (payMethod == "Bank")
        {
            cout << "Follow this payment method using Gcash" << endl;
        }
        else
        {
        }
        cout << " Another transaction? (y/n) ";
        cin >> loop;
    }
    return 0;
}
