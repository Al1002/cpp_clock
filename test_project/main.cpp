#include <clock/clock.hpp>
#include <iostream>

int main() {
    Clock myClock, delay;

    // Simulate a game loop or an application loop
    for (int i = 0; i < 10; ++i) {
        // Simulate a delay
        delay.delta_time(1);
        // Print elapsed time each second
        std::cout << "Elapsed time: " << myClock.get_time() << " seconds\n";
    }

    return 0;
}
