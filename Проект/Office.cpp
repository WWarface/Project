#include "Office.h"

Office::Office()
	:Logo("NVIDIA")
{
}

void Office::CreateOffer(Manager& manager, Customer& customer)
{
	customer.SendOffer(manager);
}

string Office::GetLogo()
{
	return Logo;
}
