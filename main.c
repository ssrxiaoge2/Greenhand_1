#include "chess.h"

void Menu()
{
	printf("\t┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("\t┃-----岱斯特尼工作室三子棋-----┃\n");
	printf("\t┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
	printf("\t┃----------1.开始游戏----------┃\n");
	printf("\t┃----------0.退出游戏----------┃\n");
	printf("\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛*\n");
	printf("请输入你的选择:> ");

}

int main()
{
	int quit = 0;//quit做循环标记
	while (!quit) {
		int select = 0;
		Menu();
		scanf("%d", &select);

		switch (select) {
		case 1:
			system("cls");
			Game();
			break;
		case 0:
			quit = 1;
			break;
		default:
			printf("Enter Error!\n");
			break;
		}
	}

	return 0;
}
