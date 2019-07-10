// 2_11.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

enum GameResult {WIN, LOSE, TIE, CANCEL}; // {1, 2, 3, 4}

int main(){
	GameResult result; // 枚举类型定义方式1，可不加enum
	enum GameResult omit = CANCEL; // 枚举类型定义方式2，完整形式
	for (int count = WIN; count <= CANCEL; count++) { // 枚举类型可以向整型赋值，两者也可以进行比较
		result = GameResult(count); // 整型向枚举类型赋值要先做类型转换，且不能超出枚举范围
		if (result == omit)
			cout << "The game was cancelled" << endl;
		else {
			cout << "The game was played";
			if (result == WIN) cout << "and we won!";
			if (result == LOSE) cout << "and we lost.";
			cout << endl;
		}
	}
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
