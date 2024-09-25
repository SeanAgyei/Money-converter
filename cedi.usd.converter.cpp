//Sean Agyei
//Currency converter

#include<cstdlib>
#include<iomanip>
#include<iostream>
#include<string>
#include<fstream>

using namespace std;


void UsdToCedi() {

    float usd;
    float cedi;
    float rate = 13.882713;

    cout << "Currency converter" << endl;
    cout << "-------------------------------------------" << endl;

    cout << "Enter the U.S Dollar Amount:           ";
    cin >> usd;
    cout << endl;

    cout << "U.S Dollar:                                $" << usd << endl;
    cout << "Conversion Rate( Per U.S Dollar):         %" << rate << endl;

    cedi = usd * rate;

    cout << "Cedi:                              " << cedi << " Cedis" << endl;

    cout << "-------------------------------------------" << endl;
    cout << "The amount of money you'll get is: " << setprecision(4) << cedi;
    cout << " Cedis" << endl;

}

void CediToUsd() {

    double Cedi2;
    double Usd2 = 0;
    double Rate2 = 0.072032029;

    cout << "Currency converter" << endl;
    cout << "-------------------------------------------" << endl;

    cout << "Enter Cedi Amount:           ";
    cin >> Cedi2;
    cout << endl;

    cout << "Ghanaian Cedi:                     " << Cedi2 << " Cedis";
    cout << endl;
    cout << "Conversion Rate(Per Cedi):         %" << Rate2 << endl;

    Usd2 = Cedi2 * Rate2;
    Cedi2 = Usd2;

    cout << "Cedi:                              " << Cedi2 << " Cedis" << endl;

    cout << "-------------------------------------------" << endl;
    cout << "The amount of money you'll get is: " << setprecision(4) << Cedi2;
    cout << " dollars" << endl;
}

int main()
{
    cout << "Welcome to the Ghanaian Cedi to U.S dollar / U.S Dollar to Ghanaian Cedi Converter";
    cout << endl;
    cout << '\n';
    cout << "Make your choice: (Usd To Cedis) or (Cedis to Usd)" << endl;
    cout << '\n';
    cout << "(A/a) = (U.S Dollars to Ghanaian Cedis)" << endl;
    cout << "(B/b) = (Ghanaian Cedis to U.S Dollars)" << endl;

    char choice;
    bool IsaValidChoice = false;
    
    do {
        cin >> choice;

        switch (choice) {
        case 'A':
        case 'a':
            UsdToCedi();
            IsaValidChoice = true;
            break;

        case 'B':
        case 'b':
            CediToUsd();
            IsaValidChoice = false;
            break;

        default:
            cout << "The character you typed doesn't work." << endl;
            cout << "Type either 'A/a' or 'B/b' to start." << endl;
        }
    } while (!IsaValidChoice);

    char again;
    cout << "Do you want to convert again? (Y/y for Yes, any other key for No): ";
    cin >> again;

    if (again == 'Y' || again == 'y') 
    {
        main(); 
    }


    cout << "currency converter (USD to Cedi)(Cedi to USD)" << endl;
    cout << "-------------------------------------------" << endl;
    cout << '\n';
    cout << '\n';

    return 0;
}


