#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Dating app - cpp program - show plans to select
// NAME, age, gender, - show partners details name , age, gender - select partner then show the bill and they will go on

void personaldetails(char pdinput)
{
    string pdname, pdgender;
    int pdage;

    if (pdinput == 'y')
    {

        cout << "Please enter your personal details: eg= 'male'\nName: ";
        cin >> pdname;
        cout << "\nAge: ";
        cin >> pdage;
        cout << "\nGender: ";
        cin >> pdgender;
    }

    else if (pdinput != 'y')
    {
        cout << "Sorry!, wrong input";
    }

    if (pdage >= 18 && pdgender == "male" || pdgender == "MALE")
    {

        int partnerchoice;

        cout << "These are the partners (could be perfect fit!): \n1) Natasha\n23\nindia\n\n2) Sameksha\n19\nindia\n\n3) Georgia\n24\nUsa\n\n4) Alisa\n26\nCanada\n\nSelect your choice by number eg= '2'\n";
        cin >> partnerchoice;
        switch (partnerchoice)
        {

        case 1:
            cout << "Your preference:\nNatasha \nPhone num: +91 9432342345\nmail: ajgaer@sd.con - You can contact her & be respectful to each other";
            break;

        case 2:
            cout << "Your preference:\nSameksha \nPhone num: +91 34534545\nmail: ajgaer@sd.con - You can contact her & be respectful to each other";
            break;

        case 3:
            cout << "Your preference:\nGeorgia \nPhone num: +101 453435444\nmail: ajgaer@sd.con - You can contact her & be respectful to each other";
            break;

        case 4:
            cout << "Your preference:\nAlisa \nPhone num: +201 456434545\nmail: ajgaer@sd.con - You can contact her & be respectful to each other";
            break;
        }
    }

    else if (pdage >= 18 && pdgender == "female" || pdgender == "FEMALE"){
        int partnerchoice;

        cout << "These are the partners (could be perfect fit!): \n1) Arjun\n23\nindia\n\n2) Sorav\n19\nindia\n\n3) David\n24\nUsa\n\n4) Justin\n26\nCanada\n\nSelect your choice by number eg= '2'\n";
        cin >> partnerchoice;
        switch (partnerchoice)
        {

        case 1:
            cout << "Your preference:\nArjun \nPhone num: +91 9432342345\nmail: ajgaer@sd.con - You can contact him & be respectful to each other";
            break;

        case 2:
            cout << "Your preference:\nSorav \nPhone num: +91 34534545\nmail: ajgaer@sd.con - You can contact him & be respectful to each other";
            break;

        case 3:
            cout << "Your preference:\nDavid \nPhone num: +101 453435444\nmail: ajgaer@sd.con - You can contact him & be respectful to each other";
            break;

        case 4:
            cout << "Your preference:\nJustin \nPhone num: +201 456434545\nmail: ajgaer@sd.con - You can contact him & be respectful to each other";
            break;
        }
    }

    else {
        cout<<"Please try again";
    }




}

void priceplans(string planselection)
{
    int oneplan = 699, twoplan = 2499, threeplan = 5999;
    int paycard = 2435, payinput;
    char pdinput;

    if (planselection == "no")
    {
        cout << "Thank you for using our services, Please visit again ";
    }

    if (planselection == "one" || planselection == "ONE" || planselection == "One")
    {
        cout << "Congrat's, You've selected starter plan!\nNow please pay the " << oneplan << "/- Please enter the pin of your card: ";
        cin >> payinput;

        if (payinput == paycard)
        {
            cout << "\nYour payment has been sucess: now you've been proceeded\n";
            cout << "Now enter y to procced";
            cin >> pdinput;
            personaldetails(pdinput);
        }
        else if (payinput != paycard)
        {
            cout << "please try again";
        }
    }

    if (planselection == "two" || planselection == "TWO" || planselection == "Two")
    {
        cout << "Congrat's, You've selected intermididate plan!\nNow please pay the " << twoplan << "/- Please enter the pin of your card: ";
        cin >> payinput;

        if (payinput == paycard)
        {
            cout << "\nYour payment has been sucess: now you've been proceeded\n";
            cout << "Now enter y to procced";
            cin >> pdinput;
            personaldetails(pdinput);
        }
        else if (payinput != paycard)
        {
            cout << "please try again";
        }
    }

    if (planselection == "three" || planselection == "THREE" || planselection == "Three")
    {
        cout << "Congrat's, You've selected Pro plan!\nNow please pay the " << threeplan << "/- Please enter the pin of your card: ";
        cin >> payinput;

        if (payinput == paycard)
        {
            cout << "\nYour payment has been sucess: now you've been proceeded\n";
            cout << "Now enter y to procced";
            cin >> pdinput;
            personaldetails(pdinput);
        }
        else if (payinput != paycard)
        {
            cout << "please try again";
        }
    }
}

int main()
{
    string planselection;

    cout << "Welcome to extraordinary dating app\n";
    cout << "First: Select your plan to procced ~\n:Plans\n\t1) starter\nchoose 1 partner at one time\neasy connect\n24/7 support\nBill: 699/- = press one / no" << endl;
    cout << "\n:Plans\n\t2) Intermidiate\nchoose 5 or more partner at one time\neasy connect\n24/7 support\nBill: 2499/- = press two / no" << endl;
    cout << "\n:Plans\n\t3) Pro :)\nchoose unlimited partner at one time\neasy connect\n24/7 support\nBill: 5999/- = press three / no\n\n:";
    getline(cin, planselection);
    priceplans(planselection);


    cout<<"\n\nThank you for using our services please visit again - we're improving everday\nit's in a beta stage";

    return 0;
}