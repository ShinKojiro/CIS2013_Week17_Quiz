#include <string>
#include <iostream>

using namespace std;

const double LITERS_PER_GALLON = 0.264179;
double gallonsPerMile;
double litersPerMile;

void literToGallon(double lit){
    litersPerMile = lit;
    gallonsPerMile = LITERS_PER_GALLON * lit;

}

int main(){
    
    double litersConsumed;
    double milesTraveled;
    char cont = 'a';
    
    cout << "This is a liters per gallon to miles per gallon converter," << endl;
    cout << "for those weirdos who read their fuel capacity in liters!" << endl;

    while(cont != 'n' && cont != 'N'){
        
        cout << "Enter the number of liters you used today: ";
        cin >> litersConsumed;
        cout << endl << "Enter the number of miles you drove: ";
        cin >> milesTraveled;

        litersPerMile = litersConsumed / milesTraveled;
        literToGallon(litersPerMile);
    
        cout << endl << endl << "you used " << litersPerMile << " liters per mile." << endl;
        cout << "In gallons per mile, that will be " << gallonsPerMile << " gallons per mile" << endl;
        cout << endl << "Do you want to enter new values? (y/n)";
        cin >> cont;
        switch(cont){
            case 'n':
                cout << "Thanks for using, remember we use gallons round 'er !";
                break;
            default:
                break;
        }
    }
    

    
}