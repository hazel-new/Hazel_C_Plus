#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main()
{
	//void* ptr = 0; //����һ��ָ�룬��ָ����ڴ��ַ��0����ʾ��Чָ�룬Ҳ����д��NULL��nullptr

	//int var = 8;
	//int* ptr = &var; //ptr = 0x0113fbb8	
	//*ptr = 10; // var = 10
	//LOG(var);

	//char* buffer = new char[8];       //����8�ֽڵ��ڴ棬������һ��ָ���ǿ��ڴ濪ʼ��ָ��
	//memset(buffer, 0, 8);
	//char** ptr = &buffer; //˫ָ�룬һ��ָ��ָ����һ��ָ��
	//delete[] buffer;

	int a = 5;
	int& ref = a; //ref�Ǵ��������ã�alias�Ĺ�ϵ��ref����a���ڴ�����ʵû��ref��
	ref = 2;
	LOG(a);

	

	std::cin.get();
}