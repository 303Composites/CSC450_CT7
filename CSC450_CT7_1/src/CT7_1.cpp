/*
 * CT7_1.cpp
 *
 *  Created on: Jun 27, 2020
 *      Author: 303 Composites
 */

#include <iostream>
#include <thread>

int count = -1; //Starting the counter at 0

void countUp() {
	std::cout << "Counting up to 20" << std::endl;
	while (count <= 19) {
		count++; //count up by 1
		std::cout << count << std::endl;
	}
}

void countDown() {
	std::cout << "Counting Down to 0" << std::endl;
	while (count >= 0) {
		std::cout << count << std::endl;
		count--; //count down by 1
	}
}

int main() {
	std::thread t1(countUp);
	t1.join(); //starting the first thread to count from 0-20
	std::thread t2(countDown); //Continuing the program to the second thread
	t2.join(); //repeating the process
	return 0;

}
