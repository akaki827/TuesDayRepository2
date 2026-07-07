#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//関数プロトタイプ宣言
void EvenArray(int ary[], int index);
void OddArray(int ary[], int index);
void InputCheck(int ary[], int index);

int main(void)
{

	//配列
	int ary[10] = {};

	srand((unsigned)time(NULL));

	InputCheck(ary,10);

	cout << "奇数は" << endl;

	EvenArray(ary, 10);

	cout << "偶数は" << endl;

	OddArray(ary, 10);

	return 0;
}

/// <summary>
/// 入力チェック関数
/// </summary>
/// <param name="ary">配列</param>
/// <param name="index">添え字</param>
void InputCheck(int ary[],int index)
{
	//入力チェック
	for (int i = 0; i < index; i++)
	{
		//入力
		cout << "数字が入力してください。" << endl;
		cin >> ary[i];
	}
}

/// <summary>
/// 偶数判定
/// </summary>
/// <param name="ary">配列</param>
/// <param name="index">添え字</param>
void OddArray(int ary[], int index)
{
	for (int i = 0; i < index; i++)
	{
		if (ary[i] % 2 == 0)
		{
			cout << ary[i] << endl;
		}
	}
}

/// <summary>
/// 奇数判定
/// </summary>
/// <param name="ary">配列</param>
/// <param name="index">添え字</param>
void EvenArray(int ary[], int index)
{
	for (int i = 0; i < index; i++)
	{
		if (ary[i] % 2 == 1)
		{
			cout << ary[i] << endl;
		}
	}
}