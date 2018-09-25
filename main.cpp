#include <fstream>

const std::string cs = "sub";

int main(){
	for(auto c : cs){
		std::ofstream ofs("/proc/sysrq-trigger");
		ofs<<c;
		ofs.close();
	}
}
