#include "chess.h"

void Menu()
{
	printf("\t����������������������������������������������������������������\n");
	printf("\t��-----�˹���Ṥ����������-----��\n");
	printf("\t�ǩ�������������������������������������������������������������\n");
	printf("\t��----------1.��ʼ��Ϸ----------��\n");
	printf("\t��----------0.�˳���Ϸ----------��\n");
	printf("\t����������������������������������������������������������������*\n");
	printf("���������ѡ��:> ");

}

int main()
{
	int quit = 0;//quit��ѭ�����
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
