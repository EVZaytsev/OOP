#define _CRT_SECURE_NO_WARNINGS
#include "Language.h"
#include "Procedural.h"
#include "ObjectOriented.h"
#include <ctime>

#include <string>
#include "Functional.h"
Language* Language::In(ifstream& ifst)
{
	int k;
	Language* lg;
	ifst >> k;
	switch (k)
	{
	case 1:
		lg = new Procedural();
		break;
	case 2:
		lg = new ObjectOriented();
		break;
	case 3:
		lg = new Functional();
		break;
	default:
		char b;
		ifst >> b;
		//������� �� ����� ������
<<<<<<< HEAD
		while (!ifst.eof() && ifst.peek() != '\n')
		{
=======
		while (!ifst.eof() && ifst.peek() != '\n') {
>>>>>>> 2_3
			ifst >> b;
		}
		return NULL;
	}
	lg->InData(ifst);
	return lg;
};

<<<<<<< HEAD
void Language::InCommon(ifstream& ifst)
=======
void Language::InCommon(ifstream& ifst) {
	ifst >> mData >> mRef;
};
void Language::OutCommon(ofstream& ofst)
>>>>>>> 2_3
{
	ofst << "\nYear of programming language: " << mData << endl;
	ofst << "Number of mentions of the language on the Internet: " << mRef << endl;
};
<<<<<<< HEAD
void Language::OutCommon(ofstream& ofst)
{
	ofst << "\nYear of programming language: " << mData << endl;
};
=======
>>>>>>> 2_3
int Language::YearsPassed()
{
	time_t seconds = time(NULL);
	tm* timeinfo = localtime(&seconds);
	return (timeinfo->tm_year + 1900) - mData;
};

bool Language::Compare(Language& second)
{
	return YearsPassed() < second.YearsPassed();

}

