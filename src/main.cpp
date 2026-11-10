#include <iostream>
#include <cstdlib>
#include <ctime>
#include "mathfuncs.h"
#include "randfuncs.h"
using namespace std;

int main() {
    srand(time(0));
    cout << "10 + 5 = " << add(10, 5) << endl;
    cout << "10 - 5 = " << subtract(10, 5) << endl;
    cout << "10 * 5 = " << multiply(10, 5) << endl;
    cout << "10 / 5 = " << divide(10, 5) << endl;
    cout << "Coin: " << (coinFlip() ? "Heads" : "Tails") << endl;
    cout << "d6: " << rollD6() << endl;
    cout << "d10: " << rollD10() << endl;
    return 0;
}
