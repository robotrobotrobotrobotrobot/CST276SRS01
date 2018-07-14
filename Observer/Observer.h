//GOF OBSERVER PATTERN
#ifndef  OBSERVER_H
#define  OBSERVER_H
#include "stdafx.h"
class Subject;

class Observer
{
public:
	 Observer() {};
	~ Observer() {};
	virtual void Update() = 0;
};
#endif // !IOBSERVER_H