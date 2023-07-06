#include <iostream>
#include <thread>
#include <chrono>

void increase() {};

void slip(int duration) {
	// simulate expensive operation
	std::this_thread::sleep_for(std::chrono::seconds(duration));
};

int main() {
	setlocale(LC_ALL, "rus");
std::cout << "starting first thread...\n";
	std::thread th1(slip, 1);

	std::cout << "starting second thread...\n";
	std::thread th2(slip, 2);

	std::cout << "waiting for threads to finish...\n";

	th1.join();
	std::cout << "the first thread finished\n";

	th2.join();
	std::cout << "the second thread finished\n";

	std::cout << "done\n";
    return 0;
}