//////////////////////////////////////////////////////////////////////////
//  ��Ԫģʽ
//  2023��2��13��15:56:00
//////////////////////////////////////////////////////////////////////////
#include "ConcreteFlyweight.h"
#include "FlyweightFactory.h"
#include "Flyweight.h"

#include <iostream>

int main(int argc, char* argv[])
{
	FlyweightFactory factory;
	Flyweight* fw1 = factory.GetFlyweightFactory("one");
	fw1->Operation();

	Flyweight* fw2 = factory.GetFlyweightFactory("two");
	fw2->Operation();

	Flyweight* fw3 = factory.GetFlyweightFactory("one");
	fw3->Operation();

	return 0;
}