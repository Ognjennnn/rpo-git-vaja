#include <iostream>
using namespace std;
// To je koda iz glavne veje master
int main() {
    int izbira;
    double a, b;
    do {
        cout << "\n===== PREPROST KALKULATOR =====" << endl;
        cout << "1. Sestevanje (+)" << endl;
        cout << "2. Odstevanje (-)" << endl;
        cout << "3. Mnozenje (*)" << endl;
        cout << "4. Deljenje (/)" << endl;
        cout << "0. Izhod" << endl;
        cout << "Izberite operacijo: ";
        cin >> izbira;
        if (izbira >= 1 && izbira <= 4) {
            cout << "Vnesite prvo stevilo: ";
            cin >> a;

            cout << "Vnesite drugo stevilo: ";
            cin >> b;
        }
        switch (izbira) {
            case 1:
                cout << "Rezultat: " << a + b << endl;
                break;
            case 2:
                // Koda za odstevanje stevil
                cout << "Rezultat: " << a - b << endl;
                break;
            case 3:
                cout << "Rezultat: " << a * b << endl;
                break;
            case 4:
                if (b != 0) {
                    cout << "Rezultat: " << a / b << endl;
                } else {
                    cout << "Napaka: deljenje z nic ni dovoljeno!" << endl;
                }
                break;
            case 0:
                cout << "Konec programa. Nasvidenje!" << endl;
                break;
            default:
                cout << "Napaka: neveljavna izbira. Poskusite znova." << endl;
        }
    } while (izbira != 0);
    return 0;
}
// Dodano direktno na GitHubu
// Dodano direktno na GitHubu verzija 2 ker je pri 1. poskusu prislo do napake!
// Koda dodana za testiranje fetch ukaza


// prvi dodatek - interaktivni rebase
// drugi dodatek - interaktivni rebase

// Napol dokoncana koda

// Test za amend

// Slaba koda-revert