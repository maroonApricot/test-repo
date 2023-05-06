#include <iostream>
using namespace std;

int main(){
    enum Emotion{kHungry, kTired, kEnergetic, kStudious};

    int emotion = kHungry; //example when hungry

    switch(emotion) {
        case kHungry:
            cout << "Amanda should go eat pizza.";
            break;
        case kTired:
            cout << "Amanda should go take a nap.";
            break;
        case kEnergetic:
            cout << "Amanda should go on a run.";
            break;
        case kStudious:
            cout << "Amanda should go finish her homework";
            break;
        default:
            cout << "What emotion?";
            break;
        }
}
