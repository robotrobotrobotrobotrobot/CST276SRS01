//GOF OBSERVER PATTERN

#ifndef SUBJECT_H
#define SUBJECT_H
#include "stdafx.h"
#include <vector>
#include <list>
#include "Observer.h"
#include <algorithm>
using namespace std;
class Subject
{
	std::vector<Observer *> list;
public:
	void Attach(Observer *product);
	void Detach(Observer *product);
	void Notify();
};
#endif // !SUBJECT_H
