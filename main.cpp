#include <iostream>
#include "ClientsQueue.h"

int main()
{
	ClientsQueue<5> test;
	test.push({ "a" });
	cout << test.peek().getFullName() << endl;
	test.pop();
}
