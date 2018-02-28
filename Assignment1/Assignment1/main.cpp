// this is a test file
//lets test the conflicts

#include <iostream>

struct sendHelp
{
	void print() {

		std::cout << "please\n";
	}
	
};


int main() {

	sendHelp s;
	s.print();

	getchar();
	return 0;
}