#include <iostream>
//#include <ctime>

using namespace std;

int main() {
    const int RED_DURATION = 3;
    const int YELLOW_DURATION = 1;
    const int GREEN_DURATION = 3;

    int lightState = 0; // 0: Red, 1: Yellow, 2: Green

    while (true) {
        switch (lightState) {
            case 0: // Red light
                cout << "Red light\n";
                for (int timer = RED_DURATION; timer > 0; --timer) {
                    for (int i = 0; i < 1000000000; ++i) {
                        // kindly wait
                    }
                }
                lightState = 1; // Change to Yellow
                break;

            case 1: // Yellow light
                cout << "Yellow light\n";
                for (int timer = YELLOW_DURATION; timer > 0; --timer) {
                    for (int i = 0; i < 1000000000; ++i) {
                        // Kindly wait
                    }
                }
                lightState = 2; // Change to Green
                break;

            case 2: // Green light
                cout << "Green light\n";
                for (int timer = GREEN_DURATION; timer > 0; --timer) {
                    for (int i = 0; i < 1000000000; ++i) {
                        // Kindly wait
                    }
                }
                lightState = 0; // Change to Red
                break;
        }
    }

    return 0;
}


