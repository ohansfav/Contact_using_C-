#include <iostream>
#include <stdlib.h>

using namespace std;

//function/method 
void addContact(){
    int nam;
    char nom[20];

    cout << " Name:\n ";
    cin  >> nom;
    cout << "Number:\n ";
    cin >> nam;
    cout << "\n";

    cout << " name is " << nom;
    cout << "\n number is " << nam;
}

void removeContact(){
    int sur;
    cout <<"Are you sure you want to delete this contact\n";
    cout <<" 1 for Yes\n";
    cout <<" 2 for No \n";
    cout <<"input: ";
    cin >> sur;
    if  (sur == 1){
        cout << " deleting contact\n\n";
        cout << " done\n";
    }
    else{
        cout << " cancelled\n";
    }
}


void showAllcontacts(){
    cout << "deleting contacts\n";
    cout << "DONE\n";
}


int main()
{
    int contaa;
   cout << "\t\t\tCONTACT application\n \n";

   cout << "1 to store contact\n";
   cout << "2 to delete contact\n";
   cout << "3 to show all available contacts\n";
   cout << " input: ";

   cin >>  contaa;

   if(contaa == 1){
    cout << " store contact\n";
    addContact();
   }
   else if (contaa == 2){
    cout << "delete contact\n";
    removeContact();
    }
    else{
    cout << "show all available contact\n";
    showAllcontacts();
    }

// CONTINUE ... IT CLEARS CONSOLE  AND START AFRESH
    int cont;
    cout << " \nDO YOU WANT TO CONTINUE? \n";
    cout << "1 for yes\n";
    cout << "2 for no\n";
    cout <<"input: ";
    cin >> cont;
    if (cont == 1){
        system("CLS");
        main();
    }
    else{
        cout << " THANKS";
        return 0;
    }

    return 0;
}

