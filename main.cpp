#include <fstream>
#include <iostream>

const std::string cs = "sub";

int main(int argc, char** argv){
	if(argc > 1 && std::string("-h").compare(argv[1]) == 0){
		std::cout<<"reboot-f help"<<std::endl
			<<"See https://github.com/ootomoh/reboot-f"<<std::endl;
		return 0;
	}
	std::cout<<"-- REBOOT --"<<std::endl;
	std::cout<<"Press Ctrl-C after some minutes"<<std::endl;
	for(auto c : cs){
		std::ofstream ofs("/proc/sysrq-trigger");
		ofs<<c;
		ofs.close();
	}
}
