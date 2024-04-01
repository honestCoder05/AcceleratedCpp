#include<iostream>
#include<string>

int main()
{
	// 1.1
	//std::string hello = "Hello";
	//const std::string message = hello + ", world" + "! ";
	//std::cout << message;

	// 1.2
	//const std::string exclam = "!";
	//const std::string message = "Hello" + "world" + exclam; // is not valid, "hello" and "world" are literal -strings
	// not std::string so cannot concat with +
	//std::cout << message;

	// 1.3 -- Valid
	//{
	//	const std::string s = "a string";
	//	std::cout << s << std::endl;
	//}
	//{
	//	const std::string s = "another string";
	//	std::cout << s << std::endl;
	//}
	//return 0;

	// 1.4
	//{
	//	const std::string s = "a string";
	//	std::cout << s << std::endl;
	//	{
	//		const std::string s = "another string";
	//		std::cout << s << std::endl;
	//	}
	//	return 0;
	//}

	// 1.5 -- Not Valid
	//{
	//	std::string s = "a string";
	//	{
	//		std::string x = s + ", really";
	//		std::cout << s << std::endl;
	//	}
	//	std::cout << x << std::endl;
	//}
}