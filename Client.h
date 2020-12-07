#pragma once
#include <string>
using namespace std;

class Client
{
private:
	string fullName;
public:
	Client(string fullName = "") : fullName(fullName) {};
	auto& getFullName() { return fullName; };
};

