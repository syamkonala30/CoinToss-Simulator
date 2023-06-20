#include <iostream>

using namespace std;

int coinToss(void) {
    int randomNumber;
    randomNumber = 1 + rand() % 2;

    return randomNumber;
}
int main() {
    
    int howManyTimes = 0;
    int randomNumber = 0;
    string headTail = "";
    
    cout << "How many times would you like to toss the coin?: ";
    cin >> howManyTimes;
    
    srand((time(0)));
    
    for (int i = 1; i <= howManyTimes; i++)
    {
        randomNumber = coinToss();
        if (randomNumber == 1)
            headTail = "heads";
        else
            headTail = "tails";
        cout << headTail << endl;
        
    }
}
