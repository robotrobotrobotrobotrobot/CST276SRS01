#ifndef CONCRETESUBJECT_H
#define CONCRETESUBJECT_H
#include "stdafx.h"
#include <vector>
#include "Observer.h"
#include "Subject.h"
using namespace std;

class ConcreteSubject : public Subject
{
public:
	void SetState(float s);
	float GetState();
private:
	float subjectState;
};
#endif // !ConcreteSubject_H