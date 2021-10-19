#pragma once
#include "Language.h"

class Functional : public Language
{
public:
	enum typification {
		STRICT,
		DYNAMIC
	};

	Functional() {}

	void InData(ifstream& ifst); // ввод
	void Out(ofstream& ofst); // вывод
	
	typification GetmType() { return mType; };
	
<<<<<<< HEAD
	void SetmType(typification mType) { this->mType = mType; };
	unsigned short int GetmLazyCalculations() { return mLazyCalculations; }
	void SetmLazyCalculations(unsigned short int mLazyCalculations) { this->mLazyCalculations = mLazyCalculations; }
=======
	void SetmType(typification mType) { 
		this->mType = mType; 
	};
	unsigned short int GetmLazyCalculations() { 
		return mLazyCalculations;
	}
	void SetmLazyCalculations(unsigned short int mLazyCalculations) { 
		this->mLazyCalculations = mLazyCalculations; 
	}
>>>>>>> 2_3

private:
	unsigned short int mLazyCalculations;
	typification mType;


};