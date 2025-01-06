#include <iostream>
#include <string>
#include <fstream>

std::string	processLine(std::string line, std::string search, std::string replace) {
	std::size_t	found;
	std::size_t	start;
	std::string	ret = "";

	start = 0;
	found = line.find(search);
	while (found != std::string::npos) {
		ret += line.substr(start, found - start) + replace;
		start = found + search.size();
		found = line.find(search, start);
	}
	ret += line.substr(start, line.size() - start);
	return ret;
}

int	main(int argc, char *argv[]) {
	if (argc != 4) {
		std::cerr << "3 aguments are needed." << std::endl;
		return 1;
	}
	if (argv[2][0] == 0) {
		std::cerr << "Second argument must not be empty." << std::endl;
		return 1;
	}
	std::ifstream	readFile(argv[1]);
	if (readFile.fail()) {
		std::cerr << argv[1] << ": file open failed " << argv[1] << std::endl;
		return 1;
	}
	std::string	line;
	std::string	whole = "";
	while (std::getline(readFile, line)) {
		whole += processLine(line, std::string(argv[2]), std::string(argv[3]));
		if (!readFile.eof()) whole += '\n';
	}
	readFile.close();
	std::ofstream	writeFile((std::string(argv[1]) + ".replace").c_str());
	if (writeFile.fail()) {
		std::cerr << argv[1] << ": file open failed " << argv[1] << std::endl;
		return 1;
	}
	writeFile << whole;
	writeFile.close();
}
