#include"Dog.h"
#include<iostream>

using namespace std;

void Dog::Nameset()
{
	cout << "君の名は";

	cin >> Name;
}
void Dog::ShowProfile()
{
	cout << Name << "かい？贅沢な名だねぇ今日からお前はA-001だよ！";
}