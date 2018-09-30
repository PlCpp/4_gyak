#include <iostream>
#include <stdio.h>

char conv(char ch) {
	static const char cnv[] = {'z', 'y', 'x', 'w', 'v', 'u', 'o', 'n', 'm'};
	return cnv[ch&9];
}

char conv_2(char ch) {
	switch(ch) {
		case 'A': return 't'; break;
		case 'H': return 'x'; break;
		case 'm': return 'a'; break;
		default: return 'p';
	}
}

struct Pair {
	char from;
	char to;
	
	Pair(char from, char to) {
		this->from = from;
		this->to = to;
	}
};

int main() {
	printf("%d\n", 'ű');
	char ch = 'ű';
	std::cout << (ch&0xff) <<std::endl;
	std::cout << conv(ch) << std::endl;
	
	std::cout << conv_2('m') << std::endl;
	
	//Pair p; fordítási hiba
	
	Pair p('a', 'b');
	std::cout << p.from << std::endl;
	return 0;
}
