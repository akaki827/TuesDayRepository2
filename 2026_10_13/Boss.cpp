#include "Boss.h"
#include<iostream>
using namespace std;
Boss::Boss(string name):Character(name){}

void Boss::Attack()
{
	cout << "エターナルフォースブリザード　相手は死ぬ" << endl;
}