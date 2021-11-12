#pragma once
#include <string>
#include <iostream>
#include "Manager.h"
#include "Customer.h"

using namespace std;

class Office
{
public:
	Office();

	void CreateOffer(Manager& manager, Customer& customer);

	string GetLogo();


private:
	string Logo;
};
