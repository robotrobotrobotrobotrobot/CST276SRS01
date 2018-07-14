// Observer.cpp : Defines the entry point for the console application.
//
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

	// We have four shops wanting to keep updated price set by product owner
	ConcreteObserver shop1(&product);
	ConcreteObserver shop2(&product);


	//Now lets try changing the products price, this should update the shops automatically
	product.SetState(23.0f);

	//Now shop2 is not interested in new prices so they unsubscribe
	//product.Detach(shop2);

	//Now lets try changing the products price again
	product.SetState(26.0f);

	getchar();
	return 0;
}
