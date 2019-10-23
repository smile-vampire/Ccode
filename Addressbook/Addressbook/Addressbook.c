#include "AddressBook.h"

void AddressBookInit(AddressBook* pbook)
{
	assert(pbook);
	pbook->_size = 0;
	for (size_t i = 0; i < MAX_SIZE; ++i)
	{
		pbook->_AIArray[i]._name[0] = '\0';
		pbook->_AIArray[i]._tel[0] = '\0';

		pbook->_AIArray[i]._age = 0;
		pbook->_AIArray[i]._sex = Man;
	}
}

void AddressBookAdd(AddressBook* pbook, AddressInfo* pinfo)
{
	assert(pbook);
	assert(pinfo);

	if (pbook->_size == MAX_SIZE)
	{
		printf("Address Book Full\n");
	}
	else
	{
		strcpy(pbook->_AIArray[pbook->_size]._name, pinfo->_name);
		strcpy(pbook->_AIArray[pbook->_size]._tel, pinfo->_tel);
		pbook->_AIArray[pbook->_size]._age = pinfo->_age;
		pbook->_AIArray[pbook->_size]._sex = pinfo->_sex;
		pbook->_size++;
	}
}

void AddressBookDel(AddressBook* pbook, const char* name)
{}

AddressInfo* AddressBookFind(AddressBook* pbook, const char* name)
{
	return NULL;
}