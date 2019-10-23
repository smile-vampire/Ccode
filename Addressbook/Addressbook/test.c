#include "AddressBook.h"

void TestAddressBook()
{
	AddressBook addressbook;
	AddressBookInit(&addressbook);
	AddressInfo info1 = { "�߲�", "110", 18, Man };
	AddressBookAdd(&addressbook, &info1);

	AddressInfo info2 = { "С��", "111", 19, Man };
	AddressBookAdd(&addressbook, &info2);
}

int main()
{
	TestAddressBook();

	return 0;
}