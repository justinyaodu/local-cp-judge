#include <algorithm>
#include <iostream>
#include <string>

int main()
{
	int a, b;
	std::string s;

	std::cin >> a >> b >> s;

	std::reverse(s.begin(), s.end());

	std::cout << a + b << '\n' << s << std::endl;
}
