#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <Windows.h>

// ī�� ����Ʈ ** S>D>H>C **
// !!���� 10 �ذ��ؾ���!! -> ����� ���� �ٲ㼭 ��� 10 index ��: 9
const char Spade_Cards[13] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'J', 'Q', 'K' };
const char Dia_Cards[13] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'J', 'Q', 'K' };
const char Heart_Cards[13] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'J', 'Q', 'K' };
const char Clover_Cards[13] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'J', 'Q', 'K' };

void main()
{
	//printf("���̳� ��ġ �ִ� �������� �ɰ� ����� ��Ȯ���� ��ǿ� ���⸦ �Ŵ� ������ �����̶�� �մϴ�.\n������ ������ �����ϴ� �����̰�, ������ �߱��ϴ� �����̸�, \n���а� ��ü�� �쿬���� ���� �����Ǳ� ������ �� ����� ������ ��Ȯ���մϴ�.\n�����ߵ��� �������� ���Ͽ� ����, ���� �� ���ΰ����� ����� ����������ȸ�������� ������ �߻��ϰ� �������� �ұ��ϰ�, \n�ڽ��� ������ ���������� �������� ���ϰ� ���������� ������ �ϰ� �Ǵ� ���� ���մϴ�.\n���� �ൿ ��ü�� �߸��� �ƴ����� \n�ڽ��� ������ �� �ִ� �ð��� ���� �Ѱ踦 �Ѿ �������� ���ϰ� �ݺ������� ������ �Ѵٸ� �����ߵ��Դϴ�.\n �����ߵ��� ġ���ϱ� ���ؼ� �ѱ����ڹ����������͸� �̿��� �ֽʽÿ�. �����մϴ�. \n");
	printf("---------------------------------\n");
	printf("-            FOUR Ŀ            -\n");
	printf("---------------------------------\n");
	Sleep(1000);
	printf("�ȳ��Ͻʴϱ� ��Ŀ���ӿ� ���Ű��� ȯ���մϴ�.\n");
	Sleep(1500);
	printf("�� ������ �������� ���� ī���� �и� �����Ͽ� �� ���� ������ �˷��ִ� �����Դϴ�.\n");
	Sleep(2500);
	printf("���ӹ��!\n");
	Sleep(1500);
	printf("1. �������� ī�� 4���� �޴´�.\n");
	Sleep(1500);
	printf("2. 4�� �߿� �� ���� �����ؼ� ������.\n");
	Sleep(1500);
	printf("3. 3���� ī�带, ������ �������� �ٽ� 4���� �޾ƿ´�.\n");
	Sleep(1500);
	printf("4. 7���� ī��� �� ������ ���� ���� ī�� 5���� �����Ѵ�.\n");
	Sleep(1500);
	printf("5. �� ������ �������� ������ش�.\n");
	Sleep(1500);
	printf("\n");
	printf("\n");
	printf("!��Ŀ �� ����!\n");
	printf("1. �ξ� ��Ʈ����Ʈ �÷��� : 5���� ī���� ��ũ�� 10, J, Q, K, A �̸鼭 ���̰� �÷����� ��\n");
	printf("                            ex) 10�� J�� Q�� K�� A��\n");
	printf("2. ��Ʈ����Ʈ �÷���      : 5���� ī���� ��ũ�� ��Ʈ����Ʈ�̰� ���̰� �÷����� ��\n");
	printf("                            ex) 3�� 4�� 5�� 6�� 7�� \n");
	printf("3. ��ī��                 : 5�� �� 4���� ī���� ��ũ�� ��� ���� ��\n");
	printf("                            ex) 3�� 3�� 3�� 3�� 7��\n");
	printf("4. Ǯ �Ͽ콺              : 5�� �� 3���� ī���� ��ũ�� ���� ������ 2���� ī���� ��ũ�� ���� ��\n");
	printf("                            ex) 3�� 3�� 3�� 7�� 7��\n");
	printf("5. �÷���                 : 5���� ī���� ���̰� ��� ���� ��\n");
	printf("                            ex)6�� 2�� J�� 10�� 8��\n");
	printf("6. �齺Ʈ����Ʈ           : 5���� ī���� ��ũ�� A, 2, 3, 4, 5 �� ��\n");
	printf("                            ex) A�� 2�� 3�� 4�� 5��\n");
	printf("7. ����ƾ                 : 5���� ī���� ��ũ�� 10, J, Q, K, A �� ��\n");
	printf("                            ex) 10�� J�� Q�� K�� A��\n");
	printf("8. ��Ʈ����Ʈ             : 5���� ī����� ��ũ�� ���������� 1�� Ŭ ��\n");
	printf("                            ex) 5�� 6�� 7�� 8�� 9��\n");
	printf("9. Ʈ����                 : 5�� �� 3���� ī���� ��ũ�� ���� ��\n");
	printf("                            ex) 3�� 3�� 3��\n");
	printf("10. �����                : 5�� �� 2���� ī���� ��ũ�� ���� ������ ī��� �� 2���� ī���� ��ũ�� ���� ��\n");
	printf("                            ex) 10�� 10�� Q�� Q��\n");
	printf("11. �����                : 5�� �� 2���� ī���� ��ũ�� ���� ��\n");
	printf("                            ex) 3�� 3��\n");
	printf("\n");
	printf("\n");
	printf("������ �����Ϸ��� ����Ű�� ��������\n");
	int ch;
	ch = getchar();
	printf("�ε���\n");
	Sleep(2000);
	printf("\n");

	srand(time(0));

	int wh = 1;

	while ( wh )
	{
		printf("--------------���� ��ŸƮ--------------\n");

		char type_choice[7];
		char rank_choice[7];
		int count_number1 = 0;
		int count_number2 = 0;

		// 1. ī�� 4�� �����ֱ�
		while ( count_number1 < 4 )
		{
			int trash_num1 = 0;

			trash_num1 = rand() % 4;

			if ( trash_num1 == 0 ) // �����̵�
			{
				trash_num1 = rand() % 13;

				type_choice[count_number1] = 'S';
				rank_choice[count_number1] = Spade_Cards[trash_num1];
			}
			if ( trash_num1 == 1 ) // ���̾�
			{
				trash_num1 = rand() % 13;

				type_choice[count_number1] = 'D';
				rank_choice[count_number1] = Dia_Cards[trash_num1];
			}
			if ( trash_num1 == 2 ) // ��Ʈ
			{
				trash_num1 = rand() % 13;

				type_choice[count_number1] = 'H';
				rank_choice[count_number1] = Heart_Cards[trash_num1];
			}
			if ( trash_num1 == 3 ) // Ŭ�ι�
			{
				trash_num1 = rand() % 13;

				type_choice[count_number1] = 'C';
				rank_choice[count_number1] = Clover_Cards[trash_num1];
			}

			// �ߺ�ī�� ����
			if ( count_number2 >= 1 )
			{
				for ( int i = 1; i <= count_number2; i++ )
				{
					while ( type_choice[count_number1] == type_choice[count_number1 - i] && rank_choice[count_number1] == rank_choice[count_number1 - i] )
					{
						trash_num1 = rand() % 4;

						if ( trash_num1 == 0 ) // �����̵�
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'S';
							rank_choice[count_number1] = Spade_Cards[trash_num1];
						}
						if ( trash_num1 == 1 ) // ���̾�
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'D';
							rank_choice[count_number1] = Dia_Cards[trash_num1];
						}
						if ( trash_num1 == 2 ) // ��Ʈ
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'H';
							rank_choice[count_number1] = Heart_Cards[trash_num1];
						}
						if ( trash_num1 == 3 ) // Ŭ�ι�
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'C';
							rank_choice[count_number1] = Clover_Cards[trash_num1];
						}
					}// while ��
				}// for ��
			}// if ��

			count_number1 = count_number1 + 1;
			count_number2 = count_number2 + 1;
		}

		printf("���� �� ���� ī�带 �޽��ϴ�.\n");
		Sleep(1000);
		if ( rank_choice[0] == '0' )
		{
			printf("ù ��° ī��(1) : 10");
		}
		else
		{
			printf("ù ��° ī��(1) : %c", rank_choice[0]);
		}
		if ( type_choice[0] == 'S' )
		{
			printf("��\n");
		}
		else if ( type_choice[0] == 'D' )
		{
			printf("��\n");
		}
		else if ( type_choice[0] == 'H' )
		{
			printf("��\n");
		}
		else if ( type_choice[0] == 'C' )
		{
			printf("��\n");
		}
		Sleep(1000);
		if ( rank_choice[1] == '0' )
		{
			printf("�� ��° ī��(2) : 10");
		}
		else
		{
			printf("�� ��° ī��(2) : %c", rank_choice[1]);
		}
		if ( type_choice[1] == 'S' )
		{
			printf("��\n");
		}
		else if ( type_choice[1] == 'D' )
		{
			printf("��\n");
		}
		else if ( type_choice[1] == 'H' )
		{
			printf("��\n");
		}
		else if ( type_choice[1] == 'C' )
		{
			printf("��\n");
		}
		Sleep(1000);
		if ( rank_choice[2] == '0' )
		{
			printf("�� ��° ī��(3) : 10");
		}
		else
		{
			printf("�� ��° ī��(3) : %c", rank_choice[2]);
		}
		if ( type_choice[2] == 'S' )
		{
			printf("��\n");
		}
		else if ( type_choice[2] == 'D' )
		{
			printf("��\n");
		}
		else if ( type_choice[2] == 'H' )
		{
			printf("��\n");
		}
		else if ( type_choice[2] == 'C' )
		{
			printf("��\n");
		}
		Sleep(1000);
		if ( rank_choice[3] == '0' )
		{
			printf("�� ��° ī��(4) : 10");
		}
		else
		{
			printf("�� ��° ī��(4) : %c", rank_choice[3]);
		}
		if ( type_choice[3] == 'S' )
		{
			printf("��\n");
		}
		else if ( type_choice[3] == 'D' )
		{
			printf("��\n");
		}
		else if ( type_choice[3] == 'H' )
		{
			printf("��\n");
		}
		else if ( type_choice[3] == 'C' )
		{
			printf("��\n");
		}
		Sleep(1000);

		// 2. ���� ������

		int trash_num2 = 0;
		char type_pr = '0';
		char rank_pr = '0';

		printf("���� ī�带 ������ �ּ���(1~4)\n");

		scanf("%d", &trash_num2);

		// �迭 ����� �������� �迭 �� ����, strcmp ���� �׳� trash == 1 �� �ϸ��
		if ( trash_num2 == 1 ) // ù ��° ī�� ������(�迭���� ������ ����)
		{
			type_pr = type_choice[0];
			rank_pr = rank_choice[0];


			type_choice[0] = type_choice[1];
			type_choice[1] = type_choice[2];
			type_choice[2] = type_choice[3];

			rank_choice[0] = rank_choice[1];
			rank_choice[1] = rank_choice[2];
			rank_choice[2] = rank_choice[3];
		}
		else if ( trash_num2 == 2 ) // �� ��° ī�� ������(�迭���� ������ ����)
		{
			type_pr = type_choice[1];
			rank_pr = rank_choice[1];


			type_choice[1] = type_choice[2];
			type_choice[2] = type_choice[3];

			rank_choice[1] = rank_choice[2];
			rank_choice[2] = rank_choice[3];
		}
		else if ( trash_num2 == 3 ) // �� ��° ī�� ������(�迭���� ������ ����)
		{
			type_pr = type_choice[2];
			rank_pr = rank_choice[2];


			type_choice[2] = type_choice[3];

			rank_choice[2] = rank_choice[3];
		}
		else if ( trash_num2 == 4 ) // �� ��° ī�� ������(�迭���� ������ ����)
		{
			type_pr = type_choice[3];
			rank_pr = rank_choice[3];
		}
		else
		{
			printf("Invaild Value\n");
		}

		printf("���� ī��\n");
		if ( rank_choice[0] == '0' )
		{
			printf("ù ��° ī��(1) : 10");
		}
		else
		{
			printf("ù ��° ī��(1) : %c", rank_choice[0]);
		}
		if ( type_choice[0] == 'S' )
		{
			printf("��\n");
		}
		else if ( type_choice[0] == 'D' )
		{
			printf("��\n");
		}
		else if ( type_choice[0] == 'H' )
		{
			printf("��\n");
		}
		else if ( type_choice[0] == 'C' )
		{
			printf("��\n");
		}
		if ( rank_choice[1] == '0' )
		{
			printf("�� ��° ī��(2) : 10");
		}
		else
		{
			printf("�� ��° ī��(2) : %c", rank_choice[1]);
		}
		if ( type_choice[1] == 'S' )
		{
			printf("��\n");
		}
		else if ( type_choice[1] == 'D' )
		{
			printf("��\n");
		}
		else if ( type_choice[1] == 'H' )
		{
			printf("��\n");
		}
		else if ( type_choice[1] == 'C' )
		{
			printf("��\n");
		}
		if ( rank_choice[2] == '0' )
		{
			printf("�� ��° ī��(3) : 10");
		}
		else
		{
			printf("�� ��° ī��(3) : %c", rank_choice[2]);
		}
		if ( type_choice[2] == 'S' )
		{
			printf("��\n");
		}
		else if ( type_choice[2] == 'D' )
		{
			printf("��\n");
		}
		else if ( type_choice[2] == 'H' )
		{
			printf("��\n");
		}
		else if ( type_choice[2] == 'C' )
		{
			printf("��\n");
		}
		Sleep(1000);

		// 3. �ٽ� 4�� �����ֱ�
		count_number1 = 3;
		count_number2 = 3;

		while ( count_number1 < 7 )
		{
			int trash_num1 = 0;

			trash_num1 = rand() % 4;

			if ( trash_num1 == 0 ) // �����̵�
			{
				trash_num1 = rand() % 13;

				type_choice[count_number1] = 'S';
				rank_choice[count_number1] = Spade_Cards[trash_num1];
			}
			if ( trash_num1 == 1 ) // ���̾�
			{
				trash_num1 = rand() % 13;

				type_choice[count_number1] = 'D';
				rank_choice[count_number1] = Dia_Cards[trash_num1];
			}
			if ( trash_num1 == 2 ) // ��Ʈ
			{
				trash_num1 = rand() % 13;

				type_choice[count_number1] = 'H';
				rank_choice[count_number1] = Heart_Cards[trash_num1];
			}
			if ( trash_num1 == 3 ) // Ŭ�ι�
			{
				trash_num1 = rand() % 13;

				type_choice[count_number1] = 'C';
				rank_choice[count_number1] = Clover_Cards[trash_num1];
			}

			// �ߺ�ī�� ����

			// ����ī�嵵 �ߺ����� ġ�� ���� �������!
			// type_pr, rank_pr �̿�
			if ( count_number2 >= 3 )
			{
				for ( int i = 1; i <= count_number2; i++ )
				{
					// ���� ī��� ������ �ȵ�
					while ( type_choice[count_number1] == type_pr && rank_choice[count_number1] == rank_pr )
					{
						trash_num1 = rand() % 4;

						if ( trash_num1 == 0 ) // �����̵�
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'S';
							rank_choice[count_number1] = Spade_Cards[trash_num1];
						}
						if ( trash_num1 == 1 ) // ���̾�
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'D';
							rank_choice[count_number1] = Dia_Cards[trash_num1];
						}
						if ( trash_num1 == 2 ) // ��Ʈ
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'H';
							rank_choice[count_number1] = Heart_Cards[trash_num1];
						}
						if ( trash_num1 == 3 ) // Ŭ�ι�
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'C';
							rank_choice[count_number1] = Clover_Cards[trash_num1];
						}
					}

					while ( type_choice[count_number1] == type_choice[count_number1 - i] && rank_choice[count_number1] == rank_choice[count_number1 - i] )
					{
						trash_num1 = rand() % 4;

						if ( trash_num1 == 0 ) // �����̵�
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'S';
							rank_choice[count_number1] = Spade_Cards[trash_num1];
						}
						if ( trash_num1 == 1 ) // ���̾�
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'D';
							rank_choice[count_number1] = Dia_Cards[trash_num1];
						}
						if ( trash_num1 == 2 ) // ��Ʈ
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'H';
							rank_choice[count_number1] = Heart_Cards[trash_num1];
						}
						if ( trash_num1 == 3 ) // Ŭ�ι�
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'C';
							rank_choice[count_number1] = Clover_Cards[trash_num1];
						}

						// ���� ī��� ������ �ȵ�
						while ( type_choice[count_number1] == type_pr && rank_choice[count_number1] == rank_pr )
						{
							trash_num1 = rand() % 4;

							if ( trash_num1 == 0 ) // �����̵�
							{
								trash_num1 = rand() % 13;

								type_choice[count_number1] = 'S';
								rank_choice[count_number1] = Spade_Cards[trash_num1];
							}
							if ( trash_num1 == 1 ) // ���̾�
							{
								trash_num1 = rand() % 13;

								type_choice[count_number1] = 'D';
								rank_choice[count_number1] = Dia_Cards[trash_num1];
							}
							if ( trash_num1 == 2 ) // ��Ʈ
							{
								trash_num1 = rand() % 13;

								type_choice[count_number1] = 'H';
								rank_choice[count_number1] = Heart_Cards[trash_num1];
							}
							if ( trash_num1 == 3 ) // Ŭ�ι�
							{
								trash_num1 = rand() % 13;

								type_choice[count_number1] = 'C';
								rank_choice[count_number1] = Clover_Cards[trash_num1];
							}
						}
					}// while ��
				}// for ��
			}// if ��

			count_number1 = count_number1 + 1;
			count_number2 = count_number2 + 1;
		}

		printf("\n");
		printf("�������� �� ���� ī�带 �޽��ϴ�.\n");
		Sleep(1000);
		if ( rank_choice[0] == '0' )
		{
			printf("ù ��° ī��(1) : 10");
		}
		else
		{
			printf("ù ��° ī��(1) : %c", rank_choice[0]);
		}
		if ( type_choice[0] == 'S' )
		{
			printf("��\n");
		}
		else if ( type_choice[0] == 'D' )
		{
			printf("��\n");
		}
		else if ( type_choice[0] == 'H' )
		{
			printf("��\n");
		}
		else if ( type_choice[0] == 'C' )
		{
			printf("��\n");
		}
		if ( rank_choice[1] == '0' )
		{
			printf("�� ��° ī��(2) : 10");
		}
		else
		{
			printf("�� ��° ī��(2) : %c", rank_choice[1]);
		}
		if ( type_choice[1] == 'S' )
		{
			printf("��\n");
		}
		else if ( type_choice[1] == 'D' )
		{
			printf("��\n");
		}
		else if ( type_choice[1] == 'H' )
		{
			printf("��\n");
		}
		else if ( type_choice[1] == 'C' )
		{
			printf("��\n");
		}
		if ( rank_choice[2] == '0' )
		{
			printf("�� ��° ī��(3) : 10");
		}
		else
		{
			printf("�� ��° ī��(3) : %c", rank_choice[2]);
		}
		if ( type_choice[2] == 'S' )
		{
			printf("��\n");
		}
		else if ( type_choice[2] == 'D' )
		{
			printf("��\n");
		}
		else if ( type_choice[2] == 'H' )
		{
			printf("��\n");
		}
		else if ( type_choice[2] == 'C' )
		{
			printf("��\n");
		}
		Sleep(1000);
		if ( rank_choice[3] == '0' )
		{
			printf("�� ��° ī��(4) : 10");
		}
		else
		{
			printf("�� ��° ī��(4) : %c", rank_choice[3]);
		}
		if ( type_choice[3] == 'S' )
		{
			printf("��\n");
		}
		else if ( type_choice[3] == 'D' )
		{
			printf("��\n");
		}
		else if ( type_choice[3] == 'H' )
		{
			printf("��\n");
		}
		else if ( type_choice[3] == 'C' )
		{
			printf("��\n");
		}
		Sleep(1000);
		if ( rank_choice[4] == '0' )
		{
			printf("�ټ� ��° ī��(5) : 10");
		}
		else
		{
			printf("�ټ� ��° ī��(5) : %c", rank_choice[4]);
		}
		if ( type_choice[4] == 'S' )
		{
			printf("��\n");
		}
		else if ( type_choice[4] == 'D' )
		{
			printf("��\n");
		}
		else if ( type_choice[4] == 'H' )
		{
			printf("��\n");
		}
		else if ( type_choice[4] == 'C' )
		{
			printf("��\n");
		}
		Sleep(1000);
		if ( rank_choice[5] == '0' )
		{
			printf("���� ��° ī��(6) : 10");
		}
		else
		{
			printf("���� ��° ī��(6) : %c", rank_choice[5]);
		}
		if ( type_choice[5] == 'S' )
		{
			printf("��\n");
		}
		else if ( type_choice[5] == 'D' )
		{
			printf("��\n");
		}
		else if ( type_choice[5] == 'H' )
		{
			printf("��\n");
		}
		else if ( type_choice[5] == 'C' )
		{
			printf("��\n");
		}
		Sleep(1000);
		if ( rank_choice[6] == '0' )
		{
			printf("�ϰ� ��° ī��(7) : 10");
		}
		else
		{
			printf("�ϰ� ��° ī��(7) : %c", rank_choice[6]);
		}
		if ( type_choice[6] == 'S' )
		{
			printf("��\n");
		}
		else if ( type_choice[6] == 'D' )
		{
			printf("��\n");
		}
		else if ( type_choice[6] == 'H' )
		{
			printf("��\n");
		}
		else if ( type_choice[6] == 'C' )
		{
			printf("��\n");
		}
		Sleep(1000);


		for ( int i = 1; i < 7; i++ )
		{
			while ( type_choice[6] == type_choice[6 - i] && rank_choice[6] == rank_choice[6 - i] )
			{
				printf("\n");
				printf("��?? ī�尡 �ߺ��� ���Գ׿䤾\n");
				Sleep(1000);
				printf("�̰��� ���α׷� ������ �ƴմϴ�.\n");
				Sleep(1000);
				printf("������ ���輺�� �˸��� ���α׷��̿����ϴ�.!!\n");
				Sleep(1000);
				printf("���̳� ��ġ �ִ� �������� �ɰ� ����� ��Ȯ���� ��ǿ� ���⸦ �Ŵ� ������ �����̶�� �մϴ�.\n������ ������ �����ϴ� �����̰�, ������ �߱��ϴ� �����̸�, \n���а� ��ü�� �쿬���� ���� �����Ǳ� ������ �� ����� ������ ��Ȯ���մϴ�.\n�����ߵ��� �������� ���Ͽ� ����, ���� �� ���ΰ����� ����� ����������ȸ�������� ������ �߻��ϰ� �������� �ұ��ϰ�, \n�ڽ��� ������ ���������� �������� ���ϰ� ���������� ������ �ϰ� �Ǵ� ���� ���մϴ�.\n���� �ൿ ��ü�� �߸��� �ƴ����� \n�ڽ��� ������ �� �ִ� �ð��� ���� �Ѱ踦 �Ѿ �������� ���ϰ� �ݺ������� ������ �Ѵٸ� �����ߵ��Դϴ�.\n�����ߵ��� ġ���ϱ� ���ؼ� �ѱ����ڹ����������͸� �̿��� �ֽʽÿ�. �����մϴ�. \n");
				printf("\n");
				exit(0);
			}
		}


		// 4. ����� ī�� ����
		char fin_type_pr[5];
		char fin_rank_pr[5];
		int ch1 = 0, ch2 = 0, ch3 = 0, ch4 = 0, ch5 = 0;

		printf("���տ� �̿� �� 5���� ī�带 ������ �ּ���(_ _ _ _ _ �������� ����)\n");

		scanf("%d %d %d %d %d", &ch1, &ch2, &ch3, &ch4, &ch5);

		fin_type_pr[0] = type_choice[ch1 - 1];
		fin_rank_pr[0] = rank_choice[ch1 - 1];
		fin_type_pr[1] = type_choice[ch2 - 1];
		fin_rank_pr[1] = rank_choice[ch2 - 1];
		fin_type_pr[2] = type_choice[ch3 - 1];
		fin_rank_pr[2] = rank_choice[ch3 - 1];
		fin_type_pr[3] = type_choice[ch4 - 1];
		fin_rank_pr[3] = rank_choice[ch4 - 1];
		fin_type_pr[4] = type_choice[ch5 - 1];
		fin_rank_pr[4] = rank_choice[ch5 - 1];


		printf("\n");
		printf("\n");
		printf("���� ī��!\n");
		if ( fin_rank_pr[0] == '0' )
		{
			printf(" 10");
		}
		else
		{
			printf(" %c", fin_rank_pr[0]);
		}
		if ( fin_type_pr[0] == 'S' )
		{
			printf("�� ");
		}
		else if ( fin_type_pr[0] == 'D' )
		{
			printf("�� ");
		}
		else if ( fin_type_pr[0] == 'H' )
		{
			printf("�� ");
		}
		else if ( fin_type_pr[0] == 'C' )
		{
			printf("�� ");
		}
		if ( fin_rank_pr[1] == '0' )
		{
			printf("10");
		}
		else
		{
			printf("%c", fin_rank_pr[1]);
		}
		if ( fin_type_pr[1] == 'S' )
		{
			printf("�� ");
		}
		else if ( fin_type_pr[1] == 'D' )
		{
			printf("�� ");
		}
		else if ( fin_type_pr[1] == 'H' )
		{
			printf("�� ");
		}
		else if ( fin_type_pr[1] == 'C' )
		{
			printf("�� ");
		}
		if ( fin_rank_pr[2] == '0' )
		{
			printf("10");
		}
		else
		{
			printf("%c", fin_rank_pr[2]);
		}
		if ( fin_type_pr[2] == 'S' )
		{
			printf("�� ");
		}
		else if ( fin_type_pr[2] == 'D' )
		{
			printf("�� ");
		}
		else if ( fin_type_pr[2] == 'H' )
		{
			printf("�� ");
		}
		else if ( fin_type_pr[2] == 'C' )
		{
			printf("�� ");
		}
		if ( fin_rank_pr[3] == '0' )
		{
			printf("10");
		}
		else
		{
			printf("%c", fin_rank_pr[3]);
		}
		if ( fin_type_pr[3] == 'S' )
		{
			printf("�� ");
		}
		else if ( fin_type_pr[3] == 'D' )
		{
			printf("�� ");
		}
		else if ( fin_type_pr[3] == 'H' )
		{
			printf("�� ");
		}
		else if ( fin_type_pr[3] == 'C' )
		{
			printf("�� ");
		}
		if ( fin_rank_pr[4] == '0' )
		{
			printf("10");
		}
		else
		{
			printf("%c", fin_rank_pr[4]);
		}
		if ( fin_type_pr[4] == 'S' )
		{
			printf("��\n");
		}
		else if ( fin_type_pr[4] == 'D' )
		{
			printf("��\n");
		}
		else if ( fin_type_pr[4] == 'H' )
		{
			printf("��\n");
		}
		else if ( fin_type_pr[4] == 'C' )
		{
			printf("��\n");
		}
		Sleep(1000);

		// % rank intȭ %
		int fin_rank[5];
		int fin_type[5];

		for ( int i = 0; i < 5; i++ )
		{
			if ( fin_rank_pr[i] == '1' )
			{
				fin_rank[i] = 1;
			}
			else if ( fin_rank_pr[i] == '2' )
			{
				fin_rank[i] = 2;
			}
			else if ( fin_rank_pr[i] == '3' )
			{
				fin_rank[i] = 3;
			}
			else if ( fin_rank_pr[i] == '4' )
			{
				fin_rank[i] = 4;
			}
			else if ( fin_rank_pr[i] == '5' )
			{
				fin_rank[i] = 5;
			}
			else if ( fin_rank_pr[i] == '6' )
			{
				fin_rank[i] = 6;
			}
			else if ( fin_rank_pr[i] == '7' )
			{
				fin_rank[i] = 7;
			}
			else if ( fin_rank_pr[i] == '8' )
			{
				fin_rank[i] = 8;
			}
			else if ( fin_rank_pr[i] == '9' )
			{
				fin_rank[i] = 9;
			}
			else if ( fin_rank_pr[i] == '0' )
			{
				fin_rank[i] = 10;
			}
			else if ( fin_rank_pr[i] == 'J' )
			{
				fin_rank[i] = 11;
			}
			else if ( fin_rank_pr[i] == 'Q' )
			{
				fin_rank[i] = 12;
			}
			else if ( fin_rank_pr[i] == 'K' )
			{
				fin_rank[i] = 13;
			}
		}

		// % type intȭ %
		for ( int i = 0; i < 5; i++ )
		{
			if ( fin_type_pr[i] == 'S' )
			{
				fin_type[i] = 4;
			}
			else if ( fin_type_pr[i] == 'D' )
			{
				fin_type[i] = 3;
			}
			else if ( fin_type_pr[i] == 'H' )
			{
				fin_type[i] = 2;
			}
			else if ( fin_type_pr[i] == 'C' )
			{
				fin_type[i] = 1;
			}
		}

		// 5. �� �м�

		//#### �ߺ����� ����!! �ߺ����� �Ҷ� ó���� �н��Ǹ� ������ ó���Ŷ� �� �Ұ�

		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		// ��Ʈ����Ʈ �÷��� �Ǻ�
		int cha_rank_sf[5] = { fin_rank[0], fin_rank[1], fin_rank[2], fin_rank[3], fin_rank[4] };

		// �迭 ����
		for ( int i = 0; i < 4; i++ )
		{
			for ( int j = 0; j < 4 - i; j++ )
			{
				if ( cha_rank_sf[j] > cha_rank_sf[j + 1] )
				{
					int t = cha_rank_sf[j];
					cha_rank_sf[j] = cha_rank_sf[j + 1];
					cha_rank_sf[j + 1] = t;
				}
			}
		}

		// �ξ� ��Ʈ����Ʈ �÷���
		if ( cha_rank_sf[0] == 1 && cha_rank_sf[1] == 10 && cha_rank_sf[2] == 11 && cha_rank_sf[3] == 12 && cha_rank_sf[4] == 13 && fin_type[0] == fin_type[1] && fin_type[1] == fin_type[2] && fin_type[2] == fin_type[3] && fin_type[3] == fin_type[4] )
		{
			printf("!!!�ڷξ� ��Ʈ����Ʈ �÷��á�!!!\n");
		}
		// ��Ʈ����Ʈ �÷���
		else if ( cha_rank_sf[1] == cha_rank_sf[0] + 1 && cha_rank_sf[2] == cha_rank_sf[0] + 2 && cha_rank_sf[3] == cha_rank_sf[0] + 3 && cha_rank_sf[4] == cha_rank_sf[0] + 4 && fin_type[0] == fin_type[1] && fin_type[1] == fin_type[2] && fin_type[2] == fin_type[3] && fin_type[3] == fin_type[4] )
		{
			printf("�ڽ�Ʈ����Ʈ �÷��á�\n");
		}
		else
		{
			//��ī�� �Ǻ�
			int cha_rank_four[5] = { fin_rank[0], fin_rank[1], fin_rank[2], fin_rank[3], fin_rank[4] };

			// �迭 ����
			for ( int i = 0; i < 4; i++ )
			{
				for ( int j = 0; j < 4 - i; j++ )
				{
					if ( cha_rank_four[j] > cha_rank_four[j + 1] )
					{
						int t = cha_rank_four[j];
						cha_rank_four[j] = cha_rank_four[j + 1];
						cha_rank_four[j + 1] = t;
					}
				}
			}

			if ( cha_rank_four[0] == cha_rank_four[1] && cha_rank_four[1] == cha_rank_four[2] && cha_rank_four[2] == cha_rank_four[3] )
			{
				printf("��ī���!!\n");
			}
			else if ( cha_rank_four[1] == cha_rank_four[2] && cha_rank_four[2] == cha_rank_four[3] && cha_rank_four[3] == cha_rank_four[4] )
			{
				printf("��ī���!!\n");
			}
			else
			{
				// Ǯ�Ͽ콺 �Ǻ�
				int cha_rank_f[5] = { fin_rank[0], fin_rank[1], fin_rank[2], fin_rank[3], fin_rank[4] };

				// �迭 ����
				for ( int i = 0; i < 4; i++ )
				{
					for ( int j = 0; j < 4 - i; j++ )
					{
						if ( cha_rank_f[j] > cha_rank_f[j + 1] )
						{
							int t = cha_rank_f[j];
							cha_rank_f[j] = cha_rank_f[j + 1];
							cha_rank_f[j + 1] = t;
						}
					}
				}

				if ( cha_rank_f[0] == cha_rank_f[1] && cha_rank_f[1] == cha_rank_f[2] && cha_rank_f[3] == cha_rank_f[4] )
				{
					printf("Ǯ�Ͽ콺��!\n");
				}
				else if ( cha_rank_f[2] == cha_rank_f[3] && cha_rank_f[3] == cha_rank_f[4] && cha_rank_f[0] == cha_rank_f[1] )
				{
					printf("Ǯ�Ͽ콺��!\n");
				}
				else
				{
					// �÷��� �Ǻ�
					if ( fin_type[0] == fin_type[1] && fin_type[1] == fin_type[2] && fin_type[2] == fin_type[3] && fin_type[3] == fin_type[4] )
					{
						printf("�÷���!!!!!\n");
					}
					else
					{
						// ��Ʈ����Ʈ �Ǻ�
						int cha_rank[5] = { fin_rank[0], fin_rank[1], fin_rank[2], fin_rank[3], fin_rank[4] };

						// �迭 ����
						for ( int i = 0; i < 4; i++ )
						{
							for ( int j = 0; j < 4 - i; j++ )
							{
								if ( cha_rank[j] > cha_rank[j + 1] )
								{
									int t = cha_rank[j];
									cha_rank[j] = cha_rank[j + 1];
									cha_rank[j + 1] = t;
								}
							}
						}

						// �齺Ʈ����Ʈ
						if ( cha_rank[0] == 1 && cha_rank[1] == 2 && cha_rank[2] == 3 && cha_rank[3] == 4 && cha_rank[4] == 5 )
						{
							printf("�齺Ʈ����Ʈ!!!!\n");
						}
						// ����ƾ
						else if ( cha_rank[0] == 1 && cha_rank[1] == 10 && cha_rank[2] == 11 && cha_rank[3] == 12 && cha_rank[4] == 13 )
						{
							printf("����ƾ!!!!\n");
						}
						// ��Ʈ����Ʈ
						else if ( cha_rank[1] == cha_rank[0] + 1 && cha_rank[2] == cha_rank[0] + 2 && cha_rank[3] == cha_rank[0] + 3 && cha_rank[4] == cha_rank[0] + 4 )
						{
							printf("��Ʈ����Ʈ!!!!\n");
						}
						else
						{
							// Ʈ���� �Ǻ�
							/////////////////////////////////////////////////////////////////////
							/////////////////////////////////////////////////////////////////////
							/////////////////////////////////////////////////////////////////////
							// ���� ����
							int index_t1 = 100, index_t2 = 100, index_t3 = 100;

							for ( int i = 0; i < 5; i++ )
							{
								for ( int k = 0; k < 5; k++ )
								{
									if ( i != k )
									{
										for ( int j = 0; j < 5; j++ )
										{
											if ( i != j && k != j )
											{
												if ( fin_rank[i] == fin_rank[k] && fin_rank[k] == fin_rank[j] )
												{
													index_t1 = i;
													index_t2 = k;
													index_t3 = j;
													break;
												}
											}
										}// �ӿ��ִ� j for
									}
								}// k for
							}// i for

							if ( index_t1 != 100 && index_t2 != 100 && index_t3 != 100 )
							{
								printf("Ʈ����!!!\n");
							}
							else
							{
								// ����� �Ǻ�
								int index_b1 = 100, index_b2 = 100;
								int index_a1 = 100, index_a2 = 100;

								// ó����� �Ǻ�
								for ( int i = 0; i < 5; i++ )
								{
									for ( int k = 0; k < 5; k++ )
									{
										if ( i != k )
										{
											if ( fin_rank[i] == fin_rank[k] )
											{
												index_b1 = i;
												index_b2 = k;
											}
										}
									}// k for
								}// i for

								 // �ι�°��� �Ǻ�
								for ( int i = 0; i < 5; i++ )
								{
									for ( int k = 0; k < 5; k++ )
									{
										if ( i != k )
										{
											if ( fin_rank[i] == fin_rank[k] )
											{
												if ( index_b1 == i && index_b2 == k )
												{
												}
												else if ( index_b1 == k && index_b2 == i )
												{
												}
												else
												{
													index_a1 = i;
													index_a2 = k;
												}
											}
										}
									}// k for
								}// i for


								if ( index_b1 != 100 && index_b2 != 100 && index_a1 != 100 && index_a2 != 100 )
								{
									printf("�����!!\n");
								}
								else
								{
									// ����� �Ǻ�
									int index1 = 100, index2 = 100;

									// ����� �Ǻ�
									for ( int i = 0; i < 5; i++ )
									{
										for ( int k = 0; k < 5; k++ )
										{
											if ( i != k )
											{
												if ( fin_rank[i] == fin_rank[k] )
												{
													index1 = i;
													index2 = k;
												}
											}
										}// k for
									}// i for


									if ( index1 != 100 && index2 != 100 )
									{
										printf("�����!\n");
									}
									else
									{
										// ž �Ǻ�
										int max_num = 0;
										int index = 0;

										// ���ڱ���
										for ( int i = 0; i < 5; i++ )
										{
											if ( fin_rank[i] > max_num )
											{
												max_num = fin_rank[i];
												index = i;
											}
										}
										for ( int i = 0; i < 5; i++ )
										{
											if ( fin_rank[i] = 1 )
											{
												index = i;
											}
										}

										printf("ž\n");
										// ž
									}// �����
								}// �����
							}// Ʈ����
						}// ��Ʈ����Ʈ
					}// �÷���
				}// Ǯ�Ͽ콺
			}// ��ī��
		}// ��Ʈ����Ʈ �÷���
		Sleep(2000);
		printf("\n������ �ٽ� �Ͻðڽ��ϱ�?\n");
		printf("1. �ٽ��Ѵ�\n");
		printf("2. �׸��Ѵ�\n");

		scanf("%d", &ch);

		if ( ch == 1 )
		{
			continue;
		}
		else if ( ch == 2 )
		{
			exit(0);
		}
		else
		{
			printf("Invaild Value\n");
		}


	}// while ��
}