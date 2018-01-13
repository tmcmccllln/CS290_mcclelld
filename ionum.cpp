#include <iostream>


int getnum()
{
	int num;
	std::cin >> num;
	return num;
}



int main()
{
	int len, wid, hit /*,vol*/;
	
	std::cout << "Put in a length: " << std::endl;
	len = getnum();
	
	std::cout << "Put in a width: " << std::endl;
	wid = getnum();
	
	std::cout << "Put in a height " << std::endl;
	hit = getnum();
	
	//vol = len * wid * hig;
	
	std::cout << "The volume of the rectangle is: " << len * wid * hit << std::endl;
	
	return 0;
}