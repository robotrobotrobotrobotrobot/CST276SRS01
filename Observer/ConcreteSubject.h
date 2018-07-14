#ifndef CONCRETESUBJECT_H
#define CONCRETESUBJECT_H
#include "stdafx.h"
#include <chrono>
#include "Observer.h"
#include "Subject.h"

#include <vector>
#include <cassert>
using namespace std;

class ConcreteSubject : public Subject
{
public:
	void SetState(float s) {
		subjectState = s;
		Notify();
	}
	float GetState() {
		return subjectState;
	}
private:
	
	float subjectState;
};
#endif // !ConcreteSubject_H