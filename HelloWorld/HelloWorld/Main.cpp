#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main()
{
	//void* ptr = 0; //创建一个指针，给指针的内存地址是0，表示无效指针，也可以写成NULL，nullptr

	//int var = 8;
	//int* ptr = &var; //ptr = 0x0113fbb8	
	//*ptr = 10; // var = 10
	//LOG(var);

	//char* buffer = new char[8];       //分配8字节的内存，并返回一个指向那块内存开始的指针
	//memset(buffer, 0, 8);
	//char** ptr = &buffer; //双指针，一个指针指向另一个指针
	//delete[] buffer;

	int a = 5;
	int& ref = a; //ref是创建的引用，alias的关系，ref就是a，内存中其实没有ref。
	ref = 2;
	LOG(a);

	

	std::cin.get();
}