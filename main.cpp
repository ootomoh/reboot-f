#include <fstream>
#include <iostream>
#include <unistd.h>

const std::string cs = "sub";

int main(int argc, char** argv){
	if(argc > 1 && std::string("-h").compare(argv[1]) == 0){
		std::cout<<"reboot-f help"<<std::endl
			<<"See https://github.com/ootomoh/reboot-f"<<std::endl;
		return 0;
	}
	std::cout<<"-- REBOOT --"<<std::endl;
	std::cout<<"Press Ctrl-C after some minutes"<<std::endl;

	constexpr std::size_t buffer_size = 256;
	char username[buffer_size];
	char hostname[buffer_size];
	getlogin_r(username, buffer_size);
	gethostname(hostname, buffer_size);
	std::cout<<username<<" : "<<hostname<<std::endl;

	std::ofstream log_ofs("/home/user/reboot-f.log", std::ios::app);
	log_ofs << username <<" ,"<< hostname << "\n";
	log_ofs.close();


	for(auto c : cs){
		std::ofstream ofs("/proc/sysrq-trigger");
		ofs<<c;
		ofs.close();
	}
}
