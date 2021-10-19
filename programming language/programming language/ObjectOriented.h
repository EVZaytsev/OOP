#pragma once
#include "Language.h"
<<<<<<< HEAD
class ObjectOriented : public Language
{
=======
class ObjectOriented : public Language {
>>>>>>> 2_3
public:

	enum inheritance {
		SINGLE,
		MULTIPLE,
		INTERFACE
	};

	void InData(ifstream& ifst); // ввод
	void Out(ofstream& ofst); // вывод

	ObjectOriented() {};

	inheritance GetmInher() { 
		return mInher;
	}

	void SetmInher(inheritance mInher) { 
		this->mInher = mInher; 
	}

private:
	inheritance mInher;
};