#pragma once
#include <stdio.h>
#include <assert.h>
#include<string.h>
enum SEX
{
	Man,
	Woman,
};

typedef struct AddressInfo
{
	char _name[24];
	char _tel[24];
	int  _age;
	enum SEX  _sex;
}AddressInfo;

#define MAX_SIZE  100

typedef struct AddressBook
{
	AddressInfo _AIArray[MAX_SIZE];
	size_t _size;
}AddressBook;

void AddressBookInit(AddressBook* pbook);
void AddressBookAdd(AddressBook* pbook, AddressInfo* pinfo);
void AddressBookDel(AddressBook* pbook, const char* name);
AddressInfo* AddressBookFind(AddressBook* pbook, const char* name);
