#include "stdafx.h" 
#include "ConcreteSubject.h"

void ConcreteSubject::SetState(float s)
{
	subjectState = s;
	Notify();
}

float ConcreteSubject::GetState()
{
	return subjectState;
}
