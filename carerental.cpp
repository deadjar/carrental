#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int chooseOldAcc;
    int i;
    int daysExpect;
    int dayReserve;
    string resPick;
    char carmodel;
    string firstName[10];
    string lastName[10];
    string address[10];
    int persoContact[10];
    int age[10];
    string licenseType;
    int licenseNum[10];
    string firstnameEmergency[10];
    string lastnameEmergency[10];
    string relationshipEmergency[10];
    int emergencyContact[10];
    string addressEmergency[10];
    string payMethod;
    string reservePickup;
    int miniMany = 10;
    int regualrMany = 10;
    int vanMany = 5;
    int daysUsed;
    string validate[10];
    string monthReserve;
    char loop = 'Y';

    while (loop == 'y' || loop == 'Y')
    {
        for (i = 0; i < 10; i++)
        {
            cout << "\n\t\t                               Car Rental                   " << endl;
            cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
            cout << "\t\t\t|\tNew or Old Customer: ";
            cin >> validate[i];

            if (validate[i] == "New")
            {
                cout << "\t\t\t|\tPlease Enter your First Name: "; // taking data from the user
                cin >> firstName[i];
                cout << "\t\t\t|\tPlease Enter your Last Name: "; // taking data from the user
                cin >> lastName[i];
                cout << "\t\t\t|\tPlease Enter your Age: "; // taking data from the user
                cin >> age[i];
                cout << "\t\t\t|\tREGISTERED: ";
                cout << firstName[i] << " " << lastName[i] << endl;
                cout << "\t\t\t|\tAdress: "; // taking data from the user
                cin >> address[i];
                cout << "\t\t\t|\tLicense Number:  "; // taking data from the user
                cin >> licenseNum[i];
                cout << "\t\t\t|\tSelect 1 if Professional | Select 2 if Non-Professional" << endl;
                cout << "\t\t\t|\tType of License:  "; // taking data from the user
                cin >> licenseType;
                cout << "\t\t\t|\tContact in case of emergency: " << endl; // taking data from the user
                cout << "\t\t\t|\tEmergency Contact First Name: ";
                cin >> firstnameEmergency[i];
                cout << "\t\t\t|\tEmergency Contact Last Name: ";
                cin >> lastnameEmergency[i];
                cout << "\t\t\t|\tAddress:";
                cin >> addressEmergency[i];
                cout << "\t\t\t|\tContact Number:";
                cin >> emergencyContact[i];
                cout << "\t\t\t|\tRelationship to the person:";
                cin >> relationshipEmergency[i];
                cout << endl;
            }
            else if (validate[i] == "Old")
            {
                cout << "Acc 1 " << firstName[0] << "  " << lastName[0] << ", " << endl;
                cout << "Acc 2 " << firstName[1] << "  " << lastName[1] << ", " << endl;
                cout << "Acc 3 " << firstName[2] << "  " << lastName[2] << ", " << endl;
                cout << "Acc 4 " << firstName[3] << "  " << lastName[3] << ", " << endl;
                cout << "Acc 5 " << firstName[4] << "  " << lastName[4] << ", " << endl;
                cout << "Acc 6 " << firstName[5] << "  " << lastName[5] << ", " << endl;
                cout << "Acc 7 " << firstName[6] << "  " << lastName[6] << ", " << endl;
                cout << "Acc 8 " << firstName[7] << "  "  << lastName[7] << ", " << endl;
                cout << "Acc 9 "  << firstName[8] << "  " << lastName[8] << ", " << endl;
                cout << "Acc 10 " << firstName[9] << "  " << lastName[9] << ", " << endl;
                cout << "\t\t\t|\tChoose an Old Account: " << endl;
                cin >> chooseOldAcc;

                if (chooseOldAcc == 1)
                {
                    licenseType[i] == licenseType[0];
                    validate[0] = "Old";
                }
                else if (chooseOldAcc == 2)
                {
                    licenseType[i] == licenseType[1];
                    validate[1] = "Old";
                }
                else if (chooseOldAcc == 3)
                {
                    licenseType[i] == licenseType[2];
                    validate[2] = "Old";
                }
                else if (chooseOldAcc == 4)
                {
                    licenseType[i] == licenseType[3];
                    validate[3] = "Old";
                }
                else if (chooseOldAcc == 5)
                {
                    licenseType[i] == licenseType[4];
                    validate[4] = "Old";
                }
                else if (chooseOldAcc == 6)
                {
                    licenseType[i] == licenseType[5];
                    validate[5] = "Old";
                }
                else if (chooseOldAcc == 7)
                {
                    licenseType[i] == licenseType[6];
                   validate[6] = "Old";
                }
                else if (chooseOldAcc == 8)
                {
                    licenseType[i] == licenseType[7];
                    validate[7] = "Old";
                }
                else if (chooseOldAcc == 9)
                {
                    licenseType[i] == licenseType[8];
                    validate[8] = "Old";
                }
                else if (chooseOldAcc == 10)
                {
                    licenseType[i] == licenseType[9];
                    validate[9] = "Old";
                }
            }
            cout << "\t\t\t|\tReserve or Pick-up: ";
            cin >> resPick;
            cout << "\t\t\t|\tOn what month? ";
            cin >> monthReserve;


            if (resPick == "Reserve" && validate[i] == "Old")
            {
                cout << "\t\t\t|\tDays Available for " << monthReserve << endl;
                cout << "\t\t\t|\t5, 10, 15, 20, 25" << endl;
                cout << "\t\t\t|\tChoose a date: ";
                cin >> dayReserve;
                cout << "Choose a car";
            }
            else if (resPick == "Pick-up" && validate[i] == "Old")
            {
                cout << "\t\t\t|\tDays Available for " << monthReserve << endl;
                cout << "\t\t\t|\t5, 10, 15, 20, 25" << endl;
                cout << "\t\t\t|\tChoose a date: ";
                cin >> dayReserve;
                cout << "\t\t\t|\tChoose a car" << endl;
            }
            else if (resPick == "Reserve" && validate[i] == "New")
            {
                cout << "\t\t\t|\tDays Available for " << monthReserve << endl;
                cout << "\t\t\t|\t5, 10, 15, 20, 25" << endl;
                cout << "\t\t\t|\tChoose a date: ";
                cin >> dayReserve;
                cout << "Choose a car: " << endl;
            }
            else if (resPick == "Pick-up" && validate[i] == "New")
            {
                cout << "\t\t\t|\tDays Available for " << monthReserve << endl;
                cout << "\t\t\t|\t5, 10, 15, 20, 25" << endl;
                cout << "\t\t\t|\tChoose a date: ";
                cin >> dayReserve;
                cout << "\t\t\t|\tChoose a car" << endl;
            }
            cout << "\t\t\t--------------------------------------------------------------------------" << endl;
            //cout << licenseType << validate[i] << resPick;
            if (licenseType == "1" && validate[i] == "Old" && resPick == "Reserve")
            {

                cout << "\t\t\t|\tThese are the cars available for your license: " << endl;
                cout << "\t\t\t\tPlease Select a Car" << endl; // giving user a choice to select among three different models
                cout << "\t\t\t\tEnter 'A' for Mini(Good for 3 to 4 persons)." << endl;
                cout << "\t\t\t\tEnter 'B' for Regular(Good for 5 persons)." << endl;
                cout << "\t\t\t\tEnter 'C' for Van(Good for 9-13 perosons)." << endl;
                cout << endl;
                cout << "\t\t\t\tChoose a Car from the above options: ";
                cin >> carmodel;
                cout << endl;
                cout << "\t\t\t--------------------------------------------------------------------------" << endl;

                if (carmodel == 'A' && miniMany != 0)
                {
                    cout << "\t\t\t|\tYou have choose the Mini Car" << endl;
                    cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                    miniMany--;
                }
                else if (carmodel == 'B' && regualrMany != 0)
                {
                    cout << "\t\t\t|\tYou have choose the Regular Car" << endl;
                    cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                    regualrMany--;
                }
                else if (carmodel == 'C' && vanMany != 0)
                {
                    cout << "\t\t\t|\tYou have choose the Van" << endl;
                    cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                    vanMany--;
                }
            }
            else if (licenseType == "2" && validate[i] == "Old" && resPick == "Reserve")
            {
                cout << "\t\t\t|\tThese are the cars available for your license: " << endl;
                cout << "\t\t\t\tPlease Select a Car" << endl; // giving user a choice to select among three different models
                cout << "\t\t\t\tEnter 'A' for Mini(Good for 3 to 4 persons)." << endl;
                cout << "\t\t\t\tEnter 'B' for Regular(Good for 5 persons)." << endl;
                cout << endl;
                cout << "\t\t\t\tChoose a Car from the above options: ";
                cin >> carmodel;
                cout << endl;
                cout << "\t\t\t--------------------------------------------------------------------------" << endl;

                if (carmodel == 'A' && miniMany != 0)
                {
                    cout << "\t\t\t|\tYou have choose the Mini Car" << endl;
                    cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                    miniMany--;
                }
                else if (carmodel == 'B' && regualrMany != 0)
                {
                    cout << "\t\t\t|\tYou have choose the Regular Car" << endl;
                    cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                    regualrMany--;
                }
            }
            if (licenseType == "1" && validate[i] == "New" && resPick == "Reserve")
            {

                cout << "\t\t\t|\tThese are the cars available for your license: " << endl;
                cout << "\t\t\t\tPlease Select a Car" << endl; // giving user a choice to select among three different models
                cout << "\t\t\t\tEnter 'A' for Mini(Good for 3 to 4 persons)." << endl;
                cout << "\t\t\t\tEnter 'B' for Regular(Good for 5 persons)." << endl;
                cout << "\t\t\t\tEnter 'C' for Van(Good for 9-13 perosons)." << endl;
                cout << endl;
                cout << "\t\t\t\tChoose a Car from the above options: ";
                cin >> carmodel;
                cout << endl;
                cout << "\t\t\t--------------------------------------------------------------------------" << endl;

                if (carmodel == 'A' && miniMany != 0)
                {
                    cout << "\t\t\t|\tYou have choose the Mini Car" << endl;
                    cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                    miniMany--;
                }
                else if (carmodel == 'B' && regualrMany != 0)
                {
                    cout << "\t\t\t|\tYou have choose the Regular Car" << endl;
                    cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                    regualrMany--;
                }
                else if (carmodel == 'C' && vanMany != 0)
                {
                    cout << "\t\t\t|\tYou have choose the Van" << endl;
                    cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                    vanMany--;
                }
            }
            else if (licenseType == "2" && validate[i] == "New" && resPick == "Reserve")
            {
                cout << "\t\t\t|\tThese are the cars available for your license: " << endl;
                cout << "\t\t\t\tPlease Select a Car" << endl; // giving user a choice to select among three different models
                cout << "\t\t\t\tEnter 'A' for Mini(Good for 3 to 4 persons)." << endl;
                cout << "\t\t\t\tEnter 'B' for Regular(Good for 5 persons)." << endl;
                cout << endl;
                cout << "\t\t\t\tChoose a Car from the above options: ";
                cin >> carmodel;
                cout << endl;
                cout << "\t\t\t\t--------------------------------------------------------------------------" << endl;

                if (carmodel == 'A' && miniMany != 0)
                {
                    cout << "\t\t\t|\tYou have choose the Mini Car" << endl;
                    cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                    miniMany--;
                }
                else if (carmodel == 'B' && regualrMany != 0)
                {
                    cout << "\t\t\t|\tYou have choose the Regular Car" << endl;
                    cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                    regualrMany--;
                }
            }
            if (licenseType ==  "1" && validate[i] == "Old" && resPick == "Pick-up")
            {

                cout << "\t\t\t|\tThese are the cars available for your license: " << endl;
                cout << "\t\t\t\tPlease Select a Car" << endl; // giving user a choice to select among three different models
                cout << "\t\t\t\tEnter 'A' for Mini(Good for 3 to 4 persons)." << endl;
                cout << "\t\t\t\tEnter 'B' for Regular(Good for 5 persons)." << endl;
                cout << "\t\t\t\tEnter 'C' for Van(Good for 9-13 perosons)." << endl;
                cout << endl;
                cout << "\t\t\t\tChoose a Car from the above options: ";
                cin >> carmodel;
                cout << endl;
                cout << "\t\t\t--------------------------------------------------------------------------" << endl;

                if (carmodel == 'A' && miniMany != 0)
                {
                    cout << "\t\t\t|\tYou have choose the Mini Car" << endl;
                    cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                    miniMany--;
                }
                else if (carmodel == 'B' && regualrMany != 0)
                {
                    cout << "\t\t\t|\tYou have choose the Regular Car" << endl;
                    cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                    regualrMany--;
                }
                else if (carmodel == 'C' && vanMany != 0)
                {
                    cout << "\t\t\t|\tYou have choose the Van" << endl;
                    cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                    vanMany--;
                }
            }
            else if (licenseType ==  "2" && validate[i] == "Old" && resPick == "Pick-up")
            {
                cout << "\t\t\t|\tThese are the cars available for your license: ";
                cout << "\t\t\t\tPlease Select a Car" << endl; // giving user a choice to select among three different models
                cout << "\t\t\t\tEnter 'A' for Mini(Good for 3 to 4 persons)." << endl;
                cout << "\t\t\t\tEnter 'B' for Regular(Good for 5 persons)." << endl;
                cout << endl;
                cout << "\t\t\t\tChoose a Car from the above options: ";
                cin >> carmodel;
                cout << endl;
                cout << "\t\t\t\t--------------------------------------------------------------------------" << endl;

                if (carmodel == 'A' && miniMany != 0)
                {
                    cout << "\t\t\t|\tYou have choose the Mini Car" << endl;
                    cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                    miniMany--;
                }
                else if (carmodel == 'B' && regualrMany != 0)
                {
                    cout << "\t\t\t|\tYou have choose the Regular Car" << endl;
                    cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                    regualrMany--;
                }
            }

            if (licenseType == "1" && validate[i] == "New" && resPick == "Pick-up")
            {

                cout << "\t\t\t|\tThese are the cars available for your license: " << endl;
                cout << "\t\t\t\tPlease Select a Car" << endl; // giving user a choice to select among three different models
                cout << "\t\t\t\tEnter 'A' for Mini(Good for 3 to 4 persons)." << endl;
                cout << "\t\t\t\tEnter 'B' for Regular(Good for 5 persons)." << endl;
                cout << "\t\t\t\tEnter 'C' for Van(Good for 9-13 perosons)." << endl;
                cout << endl;
                cout << "\t\t\t\tChoose a Car from the above options: ";
                cin >> carmodel;
                cout << endl;
                cout << "\t\t\t--------------------------------------------------------------------------" << endl;

                if (carmodel == 'A' && miniMany != 0)
                {
                    cout << "\t\t\t|\tYou have choose the Mini Car" << endl;
                    cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                    miniMany--;
                }
                else if (carmodel == 'B' && regualrMany != 0)
                {
                    cout << "\t\t\t|\tYou have choose the Regular Car" << endl;
                    cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                    regualrMany--;
                }
                else if (carmodel == 'C' && vanMany != 0)
                {
                    cout << "\t\t\t|\tYou have choose the Van" << endl;
                    cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                    vanMany--;
                }
            }
            else if (licenseType == "2" && validate[i] == "New" && resPick == "Pick-up")
            {
                cout << "\t\t\t|\tThese are the cars available for your license: ";
                cout << "\t\t\t\tPlease Select a Car" << endl; // giving user a choice to select among three different models
                cout << "\t\t\t\tEnter 'A' for Mini(Good for 3 to 4 persons)." << endl;
                cout << "\t\t\t\tEnter 'B' for Regular(Good for 5 persons)." << endl;
                cout << endl;
                cout << "\t\t\t\tChoose a Car from the above options: ";
                cin >> carmodel;
                cout << endl;
                cout << "\t\t\t--------------------------------------------------------------------------" << endl;

                if (carmodel == 'A' && miniMany != 0)
                {
                    cout << "\t\t\t|\tYou have choose the Mini Car" << endl;
                    cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                    miniMany--;
                }
                else if (carmodel == 'B' && regualrMany != 0)
                {
                    cout << "\t\t\t|\tYou have choose the Regular Car" << endl;
                    cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                    regualrMany--;
                }
            }

            cout << "\t\t\t|\tHow many days will you rent the car?:  ";
            cin >> daysExpect;
            cout << "\t\t\t--------------------------------------------------------------------------" << endl;
            cout << "\t\t\t--------------------------------------------------------------------------" << endl;
            cout << "\t\t\t--------------------------------------------------------------------------" << endl;
            cout << "\t\t\t|\tInvertory: Cars Left" << endl;
            cout << "\t\t\t|\t" << miniMany << endl
                 << "\t\t\t|\t" << regualrMany << endl
                 << "\t\t\t|\t" << vanMany << endl;
            cout << "\t\t\t--------------------------------------------------------------------------" << endl;
            cout << "\t\t\t--------------------------------------------------------------------------" << endl;
            cout << "\t\t\t--------------------------------------------------------------------------" << endl;
            if (validate[i] == "New")
            {
                cout << "\t\t\t|\tBILLING STATEMENT" << endl;
                cout << "\t\t\t|\tName: " << firstName[i] << " " << lastName[i] << endl;
                cout << "\t\t\t|\tType of Car: " << carmodel << endl;
                if (carmodel == 'A')
                {
                    cout << "\t\t\t|\tYou have choose the Mini Car" << endl;
                    cout << "\t\t\t|\tAmount to be paid: " << (1400 + daysExpect * 300) << endl;
                }
                else if (carmodel == 'B')
                {
                    cout << "\t\t\t|\tYou have choose the Regular Car" << endl;
                    cout << "\t\t\t|\tAmount to be paid: " << (2200 + daysExpect * 400) << endl;
                }
                else if (carmodel == 'C')
                {
                    cout << "\t\t\t|\tYou have choose the Van" << endl;
                    cout << "\t\t\t|\tAmount to be paid: " << (4500 + daysExpect * 400) << endl;
                }
            }
            cout << "\t\t\t|\tChoose type of payment:" << endl;
            cout << "\t\t\t|\tPaypal, Gcash, Cash, Bank: ";
            cin >> payMethod;

            if (validate[i] == "Old")
            {
                cout << "\t\t\t|\tBilling:" << endl;
                cout << "\t\t\t|\tName: " << firstName[i] << lastName[i] << endl;
                cout << "\t\t\t|\tType of Car: " << carmodel << endl;
                if (carmodel == 'A')
                {
                    cout << "\t\t\t|\tYou have choose the Mini Car" << endl;
                    cout << "\t\t\t|\tAmount to be paid: " << (1400 + daysExpect * 300) << endl;
                }
                else if (carmodel == 'B')
                {
                    cout << "\t\t\t|\tYou have choose the Regular Car" << endl;
                    cout << "\t\t\t|\tAmount to be paid: " << (2200 + daysExpect * 400) << endl;
                }
                else if (carmodel == 'C')
                {
                    cout << "\t\t\t|\tYou have choose the Van" << endl;
                    cout << "\t\t\t|\tAmount to be paid: " << (4500 + daysExpect * 400) << endl;
                }
            }
            if (payMethod == "Paypal")
            {
                cout << "\t\t\t|\tFollow this payment method using Paypal" << endl;
            }
            else if (payMethod == "Gcash")
            {
                cout << "\t\t\t|\tFollow this payment method using Gcash" << endl;
            }
            else if (payMethod == "Cash")
            {
                cout << "\t\t\t|\tFollow this payment method using Cash" << endl;
            }
            else if (payMethod == "Bank")
            {
                cout << "\t\t\t|\tFollow this payment method using Bank" << endl;
            }
            cout << " \t\t\t|\tAnother transaction? (y/n) ";
            cin >> loop;
            if (loop == 'n')
            {
                i = 11;
            }
        }
    }
    return 0;
}
