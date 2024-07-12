#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
/*
int main() {
	std::ifstream infile("states.txt");
	if (not infile.is_open()){
		std::cout << "Cannot open file \n" << std::endl;
		return 1;
	}

	std::string line;
	std::vector<std::string> adjacent_States;
	
	
	while (std::getline(infile, line)){
		adjacent_States.clear();

		std::string state;
		std::stringstream txt(line);

		while (txt >> state) {
			adjacent_States.push_back(state);
		}

		std::cout << "State:\n" 
			<< adjacent_States[0] << std::endl;

		std::cout << "Adjacent States:\n";
		for (int i = 1; i < adjacent_States.size(); ++i) {
			std::cout << adjacent_States[i] << std::endl;
		}
	}
	infile.close();

}
*/