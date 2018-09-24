#include <cstdlib>

int main(){
	std::system("echo s > /proc/sysrq-trigger && echo u > /proc/sysrq-trigger && echo b > /proc/sysrq-trigger");
}
