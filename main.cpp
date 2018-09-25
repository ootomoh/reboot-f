#include <fstream>
#include <iostream>

const std::string cs = "sub";

int main(){
	std::cout<<"-- REBOOT --"<<std::endl;
	std::cout<<"Press Ctrl-C after some minutes"<<std::endl;
	for(auto c : cs){
		std::ofstream ofs("/proc/sysrq-trigger");
		ofs<<c;
		ofs.close();
	}
}
