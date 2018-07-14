#include "stdafx.h"
#include "ConcreteObserver.h"

ConcreteObserver::ConcreteObserver(ConcreteSubject * s)
{
	s->Attach(this);
	std::cout << "attack this to subject.";
	refSub = s;
	
}

void ConcreteObserver::Update()
{
	observerState = refSub->GetState();

	//Lets print on console just to test the working
	std::cout << "SubjectState is now: " << observerState << "\n";
}
