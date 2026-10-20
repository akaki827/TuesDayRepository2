#include"Gojo.h"
#include"Megumi.h"
#include"Inumaki.h"

int main(void)
{
	Gojo gojo;
	Megumi megumi;
	Inumaki inumaki;

	Sorcerer* character[3] ={ &gojo,&megumi,&inumaki };

	for (int i = 0; i < 3; i++)
	{
		character[i]->ShowStatus();
		character[i]->UseTechnique();
	}
	return 0;
}