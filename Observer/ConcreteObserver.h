//GOF OBSERVER PATTERN
#ifndef CONCRETEOBSERVER_H
#define CONCRETEOBSERVER_H

#include "stdafx.h"
#include "ConcreteSubject.h"
#include <iostream>
#include <string>
#include "Observer.h"

class ConcreteObserver : Observer
{
private:
	float observerState;
	ConcreteSubject * refSub = nullptr;
public:
	ConcreteObserver(ConcreteSubject * s);
	void Update();
};


#endif // !CURRENT_H