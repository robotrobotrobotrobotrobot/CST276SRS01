#include "stdafx.h"
#include "Subject.h"
#include <algorithm>

using namespace std;

void Subject::Attach(Observer *o)
{
	list.push_back(o);
}
void Subject::Detach(Observer *o)
{
	list.erase(std::remove(list.begin(), list.end(), o), list.end());
}

void Subject::Notify()
{
	for (vector<Observer*>::const_iterator iter = list.begin(); iter != list.end(); ++iter)
	{
		if (*iter != 0)
		{
			(*iter)->Update();
		}
	}
}