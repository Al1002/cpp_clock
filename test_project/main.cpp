#include <clock/clock.hpp>
#include <iostream>

int main() {
    Clock myClock;

    // Simulate a game loop or an application loop
    for (int i = 0; i < 10; ++i) {
        // Simulate frame delay
        
        // Print elapsed time each second
        std::cout << "Elapsed time: " << myClock.get_time() << " seconds\n";
    }

    return 0;
}
