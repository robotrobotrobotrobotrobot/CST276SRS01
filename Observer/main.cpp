// GOF OBSERVER PATTERN
#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
//GOF OBSERVER PATTERN
#include "Observer.h"
#include "Subject.h"
#include "ConcreteObserver.h"
#include "ConcreteSubject.h"
using namespace std;

int main(void)
{
	ConcreteSubject product;
	ConcreteObserver shop1(&product);
	ConcreteObserver shop2(&product);
	product.SetState(23.0f);
	product.Detach(&shop2);
	product.SetState(26.0f);
	getchar();
	return 0;
}
