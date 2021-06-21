#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <Windows.h>

// 카드 리스트 ** S>D>H>C **
// !!숫자 10 해결해야함!! -> 출력할 때만 바꿔서 출력 10 index 값: 9
const char Spade_Cards[13] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'J', 'Q', 'K' };
const char Dia_Cards[13] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'J', 'Q', 'K' };
const char Heart_Cards[13] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'J', 'Q', 'K' };
const char Clover_Cards[13] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'J', 'Q', 'K' };

void main()
{
	//printf("돈이나 가치 있는 소유물을 걸고 결과가 불확실한 사건에 내기를 거는 행위를 도박이라고 합니다.\n도박은 경쟁을 포함하는 놀이이고, 금전을 추구하는 행위이며, \n승패가 대체로 우연성에 의해 결정되기 때문에 그 결과가 언제나 불확실합니다.\n도박중독은 도박으로 인하여 본인, 가족 및 대인관계의 갈등과 재정적·사회적·법적 문제가 발생하고 있음에도 불구하고, \n자신의 의지로 도박행위를 조절하지 못하고 지속적으로 도박을 하게 되는 것을 말합니다.\n도박 행동 자체가 잘못은 아니지만 \n자신이 감당할 수 있는 시간과 돈의 한계를 넘어서 자제하지 못하고 반복적으로 도박을 한다면 도박중독입니다.\n 도박중독을 치료하기 위해선 한국도박문제관리센터를 이용해 주십시오. 감사합니다. \n");
	printf("---------------------------------\n");
	printf("-            FOUR 커            -\n");
	printf("---------------------------------\n");
	Sleep(1000);
	printf("안녕하십니까 포커게임에 오신것을 환영합니다.\n");
	Sleep(1500);
	printf("이 게임은 랜덤으로 받은 카드들로 패를 조합하여 그 패의 족보를 알려주는 게임입니다.\n");
	Sleep(2500);
	printf("게임방법!\n");
	Sleep(1500);
	printf("1. 랜덤으로 카드 4장을 받는다.\n");
	Sleep(1500);
	printf("2. 4장 중에 한 장을 선택해서 버린다.\n");
	Sleep(1500);
	printf("3. 3장의 카드를, 가지고 랜덤으로 다시 4장을 받아온다.\n");
	Sleep(1500);
	printf("4. 7장의 카드들 중 조합이 가장 좋은 카드 5장을 선택한다.\n");
	Sleep(1500);
	printf("5. 그 조합이 무엇인지 출력해준다.\n");
	Sleep(1500);
	printf("\n");
	printf("\n");
	printf("!포커 패 조합!\n");
	printf("1. 로얄 스트레이트 플러시 : 5장의 카드의 랭크가 10, J, Q, K, A 이면서 무늬가 플러시일 때\n");
	printf("                            ex) 10♠ J♠ Q♠ K♠ A♠\n");
	printf("2. 스트레이트 플러시      : 5장의 카드의 랭크가 스트레이트이고 무늬가 플러시일 때\n");
	printf("                            ex) 3♠ 4♠ 5♠ 6♠ 7♠ \n");
	printf("3. 포카드                 : 5장 중 4장의 카드의 랭크가 모두 같을 때\n");
	printf("                            ex) 3♠ 3◆ 3♥ 3♣ 7♠\n");
	printf("4. 풀 하우스              : 5장 중 3장의 카드의 랭크가 같고 나머지 2장의 카드의 랭크가 같을 때\n");
	printf("                            ex) 3♠ 3◆ 3♥ 7◆ 7♠\n");
	printf("5. 플러시                 : 5장의 카드의 무늬가 모두 같을 때\n");
	printf("                            ex)6♠ 2♠ J♠ 10♠ 8♠\n");
	printf("6. 백스트레이트           : 5장의 카드의 랭크가 A, 2, 3, 4, 5 일 때\n");
	printf("                            ex) A♠ 2◆ 3♥ 4◆ 5♠\n");
	printf("7. 마운틴                 : 5장의 카드의 랭크가 10, J, Q, K, A 일 때\n");
	printf("                            ex) 10♠ J◆ Q♥ K◆ A♠\n");
	printf("8. 스트레이트             : 5장의 카드들의 랭크가 순차적으로 1씩 클 때\n");
	printf("                            ex) 5♠ 6◆ 7♥ 8◆ 9♠\n");
	printf("9. 트리플                 : 5장 중 3장의 카드의 랭크가 같을 때\n");
	printf("                            ex) 3♠ 3◆ 3♥\n");
	printf("10. 투페어                : 5장 중 2장의 카드의 랭크가 같고 나머지 카드들 중 2장의 카드의 랭크가 같을 때\n");
	printf("                            ex) 10♠ 10◆ Q♥ Q◆\n");
	printf("11. 원페어                : 5장 중 2장의 카드의 랭크가 같을 때\n");
	printf("                            ex) 3♠ 3◆\n");
	printf("\n");
	printf("\n");
	printf("게임을 진행하려면 엔터키를 누르세요\n");
	int ch;
	ch = getchar();
	printf("로딩중\n");
	Sleep(2000);
	printf("\n");

	srand(time(0));

	int wh = 1;

	while ( wh )
	{
		printf("--------------게임 스타트--------------\n");

		char type_choice[7];
		char rank_choice[7];
		int count_number1 = 0;
		int count_number2 = 0;

		// 1. 카드 4장 나눠주기
		while ( count_number1 < 4 )
		{
			int trash_num1 = 0;

			trash_num1 = rand() % 4;

			if ( trash_num1 == 0 ) // 스페이드
			{
				trash_num1 = rand() % 13;

				type_choice[count_number1] = 'S';
				rank_choice[count_number1] = Spade_Cards[trash_num1];
			}
			if ( trash_num1 == 1 ) // 다이아
			{
				trash_num1 = rand() % 13;

				type_choice[count_number1] = 'D';
				rank_choice[count_number1] = Dia_Cards[trash_num1];
			}
			if ( trash_num1 == 2 ) // 하트
			{
				trash_num1 = rand() % 13;

				type_choice[count_number1] = 'H';
				rank_choice[count_number1] = Heart_Cards[trash_num1];
			}
			if ( trash_num1 == 3 ) // 클로버
			{
				trash_num1 = rand() % 13;

				type_choice[count_number1] = 'C';
				rank_choice[count_number1] = Clover_Cards[trash_num1];
			}

			// 중복카드 제거
			if ( count_number2 >= 1 )
			{
				for ( int i = 1; i <= count_number2; i++ )
				{
					while ( type_choice[count_number1] == type_choice[count_number1 - i] && rank_choice[count_number1] == rank_choice[count_number1 - i] )
					{
						trash_num1 = rand() % 4;

						if ( trash_num1 == 0 ) // 스페이드
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'S';
							rank_choice[count_number1] = Spade_Cards[trash_num1];
						}
						if ( trash_num1 == 1 ) // 다이아
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'D';
							rank_choice[count_number1] = Dia_Cards[trash_num1];
						}
						if ( trash_num1 == 2 ) // 하트
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'H';
							rank_choice[count_number1] = Heart_Cards[trash_num1];
						}
						if ( trash_num1 == 3 ) // 클로버
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'C';
							rank_choice[count_number1] = Clover_Cards[trash_num1];
						}
					}// while 문
				}// for 문
			}// if 문

			count_number1 = count_number1 + 1;
			count_number2 = count_number2 + 1;
		}

		printf("먼저 네 장의 카드를 받습니다.\n");
		Sleep(1000);
		if ( rank_choice[0] == '0' )
		{
			printf("첫 번째 카드(1) : 10");
		}
		else
		{
			printf("첫 번째 카드(1) : %c", rank_choice[0]);
		}
		if ( type_choice[0] == 'S' )
		{
			printf("♠\n");
		}
		else if ( type_choice[0] == 'D' )
		{
			printf("◆\n");
		}
		else if ( type_choice[0] == 'H' )
		{
			printf("♥\n");
		}
		else if ( type_choice[0] == 'C' )
		{
			printf("♣\n");
		}
		Sleep(1000);
		if ( rank_choice[1] == '0' )
		{
			printf("두 번째 카드(2) : 10");
		}
		else
		{
			printf("두 번째 카드(2) : %c", rank_choice[1]);
		}
		if ( type_choice[1] == 'S' )
		{
			printf("♠\n");
		}
		else if ( type_choice[1] == 'D' )
		{
			printf("◆\n");
		}
		else if ( type_choice[1] == 'H' )
		{
			printf("♥\n");
		}
		else if ( type_choice[1] == 'C' )
		{
			printf("♣\n");
		}
		Sleep(1000);
		if ( rank_choice[2] == '0' )
		{
			printf("세 번째 카드(3) : 10");
		}
		else
		{
			printf("세 번째 카드(3) : %c", rank_choice[2]);
		}
		if ( type_choice[2] == 'S' )
		{
			printf("♠\n");
		}
		else if ( type_choice[2] == 'D' )
		{
			printf("◆\n");
		}
		else if ( type_choice[2] == 'H' )
		{
			printf("♥\n");
		}
		else if ( type_choice[2] == 'C' )
		{
			printf("♣\n");
		}
		Sleep(1000);
		if ( rank_choice[3] == '0' )
		{
			printf("네 번째 카드(4) : 10");
		}
		else
		{
			printf("네 번째 카드(4) : %c", rank_choice[3]);
		}
		if ( type_choice[3] == 'S' )
		{
			printf("♠\n");
		}
		else if ( type_choice[3] == 'D' )
		{
			printf("◆\n");
		}
		else if ( type_choice[3] == 'H' )
		{
			printf("♥\n");
		}
		else if ( type_choice[3] == 'C' )
		{
			printf("♣\n");
		}
		Sleep(1000);

		// 2. 한장 버리기

		int trash_num2 = 0;
		char type_pr = '0';
		char rank_pr = '0';

		printf("버릴 카드를 선택해 주세요(1~4)\n");

		scanf("%d", &trash_num2);

		// 배열 덮어쓰기 형식으로 배열 값 삭제, strcmp 말고 그냥 trash == 1 로 하면됨
		if ( trash_num2 == 1 ) // 첫 번째 카드 버리기(배열에서 지정값 삭제)
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
		else if ( trash_num2 == 2 ) // 두 번째 카드 버리기(배열에서 지정값 삭제)
		{
			type_pr = type_choice[1];
			rank_pr = rank_choice[1];


			type_choice[1] = type_choice[2];
			type_choice[2] = type_choice[3];

			rank_choice[1] = rank_choice[2];
			rank_choice[2] = rank_choice[3];
		}
		else if ( trash_num2 == 3 ) // 세 번째 카드 버리기(배열에서 지정값 삭제)
		{
			type_pr = type_choice[2];
			rank_pr = rank_choice[2];


			type_choice[2] = type_choice[3];

			rank_choice[2] = rank_choice[3];
		}
		else if ( trash_num2 == 4 ) // 네 번째 카드 버리기(배열에서 지정값 삭제)
		{
			type_pr = type_choice[3];
			rank_pr = rank_choice[3];
		}
		else
		{
			printf("Invaild Value\n");
		}

		printf("남은 카드\n");
		if ( rank_choice[0] == '0' )
		{
			printf("첫 번째 카드(1) : 10");
		}
		else
		{
			printf("첫 번째 카드(1) : %c", rank_choice[0]);
		}
		if ( type_choice[0] == 'S' )
		{
			printf("♠\n");
		}
		else if ( type_choice[0] == 'D' )
		{
			printf("◆\n");
		}
		else if ( type_choice[0] == 'H' )
		{
			printf("♥\n");
		}
		else if ( type_choice[0] == 'C' )
		{
			printf("♣\n");
		}
		if ( rank_choice[1] == '0' )
		{
			printf("두 번째 카드(2) : 10");
		}
		else
		{
			printf("두 번째 카드(2) : %c", rank_choice[1]);
		}
		if ( type_choice[1] == 'S' )
		{
			printf("♠\n");
		}
		else if ( type_choice[1] == 'D' )
		{
			printf("◆\n");
		}
		else if ( type_choice[1] == 'H' )
		{
			printf("♥\n");
		}
		else if ( type_choice[1] == 'C' )
		{
			printf("♣\n");
		}
		if ( rank_choice[2] == '0' )
		{
			printf("세 번째 카드(3) : 10");
		}
		else
		{
			printf("세 번째 카드(3) : %c", rank_choice[2]);
		}
		if ( type_choice[2] == 'S' )
		{
			printf("♠\n");
		}
		else if ( type_choice[2] == 'D' )
		{
			printf("◆\n");
		}
		else if ( type_choice[2] == 'H' )
		{
			printf("♥\n");
		}
		else if ( type_choice[2] == 'C' )
		{
			printf("♣\n");
		}
		Sleep(1000);

		// 3. 다시 4장 나눠주기
		count_number1 = 3;
		count_number2 = 3;

		while ( count_number1 < 7 )
		{
			int trash_num1 = 0;

			trash_num1 = rand() % 4;

			if ( trash_num1 == 0 ) // 스페이드
			{
				trash_num1 = rand() % 13;

				type_choice[count_number1] = 'S';
				rank_choice[count_number1] = Spade_Cards[trash_num1];
			}
			if ( trash_num1 == 1 ) // 다이아
			{
				trash_num1 = rand() % 13;

				type_choice[count_number1] = 'D';
				rank_choice[count_number1] = Dia_Cards[trash_num1];
			}
			if ( trash_num1 == 2 ) // 하트
			{
				trash_num1 = rand() % 13;

				type_choice[count_number1] = 'H';
				rank_choice[count_number1] = Heart_Cards[trash_num1];
			}
			if ( trash_num1 == 3 ) // 클로버
			{
				trash_num1 = rand() % 13;

				type_choice[count_number1] = 'C';
				rank_choice[count_number1] = Clover_Cards[trash_num1];
			}

			// 중복카드 제거

			// 버린카드도 중복으로 치고 제거 해줘야함!
			// type_pr, rank_pr 이용
			if ( count_number2 >= 3 )
			{
				for ( int i = 1; i <= count_number2; i++ )
				{
					// 버린 카드랑 같으면 안됨
					while ( type_choice[count_number1] == type_pr && rank_choice[count_number1] == rank_pr )
					{
						trash_num1 = rand() % 4;

						if ( trash_num1 == 0 ) // 스페이드
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'S';
							rank_choice[count_number1] = Spade_Cards[trash_num1];
						}
						if ( trash_num1 == 1 ) // 다이아
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'D';
							rank_choice[count_number1] = Dia_Cards[trash_num1];
						}
						if ( trash_num1 == 2 ) // 하트
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'H';
							rank_choice[count_number1] = Heart_Cards[trash_num1];
						}
						if ( trash_num1 == 3 ) // 클로버
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'C';
							rank_choice[count_number1] = Clover_Cards[trash_num1];
						}
					}

					while ( type_choice[count_number1] == type_choice[count_number1 - i] && rank_choice[count_number1] == rank_choice[count_number1 - i] )
					{
						trash_num1 = rand() % 4;

						if ( trash_num1 == 0 ) // 스페이드
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'S';
							rank_choice[count_number1] = Spade_Cards[trash_num1];
						}
						if ( trash_num1 == 1 ) // 다이아
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'D';
							rank_choice[count_number1] = Dia_Cards[trash_num1];
						}
						if ( trash_num1 == 2 ) // 하트
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'H';
							rank_choice[count_number1] = Heart_Cards[trash_num1];
						}
						if ( trash_num1 == 3 ) // 클로버
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'C';
							rank_choice[count_number1] = Clover_Cards[trash_num1];
						}

						// 버린 카드랑 같으면 안됨
						while ( type_choice[count_number1] == type_pr && rank_choice[count_number1] == rank_pr )
						{
							trash_num1 = rand() % 4;

							if ( trash_num1 == 0 ) // 스페이드
							{
								trash_num1 = rand() % 13;

								type_choice[count_number1] = 'S';
								rank_choice[count_number1] = Spade_Cards[trash_num1];
							}
							if ( trash_num1 == 1 ) // 다이아
							{
								trash_num1 = rand() % 13;

								type_choice[count_number1] = 'D';
								rank_choice[count_number1] = Dia_Cards[trash_num1];
							}
							if ( trash_num1 == 2 ) // 하트
							{
								trash_num1 = rand() % 13;

								type_choice[count_number1] = 'H';
								rank_choice[count_number1] = Heart_Cards[trash_num1];
							}
							if ( trash_num1 == 3 ) // 클로버
							{
								trash_num1 = rand() % 13;

								type_choice[count_number1] = 'C';
								rank_choice[count_number1] = Clover_Cards[trash_num1];
							}
						}
					}// while 문
				}// for 문
			}// if 문

			count_number1 = count_number1 + 1;
			count_number2 = count_number2 + 1;
		}

		printf("\n");
		printf("다음으로 네 장의 카드를 받습니다.\n");
		Sleep(1000);
		if ( rank_choice[0] == '0' )
		{
			printf("첫 번째 카드(1) : 10");
		}
		else
		{
			printf("첫 번째 카드(1) : %c", rank_choice[0]);
		}
		if ( type_choice[0] == 'S' )
		{
			printf("♠\n");
		}
		else if ( type_choice[0] == 'D' )
		{
			printf("◆\n");
		}
		else if ( type_choice[0] == 'H' )
		{
			printf("♥\n");
		}
		else if ( type_choice[0] == 'C' )
		{
			printf("♣\n");
		}
		if ( rank_choice[1] == '0' )
		{
			printf("두 번째 카드(2) : 10");
		}
		else
		{
			printf("두 번째 카드(2) : %c", rank_choice[1]);
		}
		if ( type_choice[1] == 'S' )
		{
			printf("♠\n");
		}
		else if ( type_choice[1] == 'D' )
		{
			printf("◆\n");
		}
		else if ( type_choice[1] == 'H' )
		{
			printf("♥\n");
		}
		else if ( type_choice[1] == 'C' )
		{
			printf("♣\n");
		}
		if ( rank_choice[2] == '0' )
		{
			printf("세 번째 카드(3) : 10");
		}
		else
		{
			printf("세 번째 카드(3) : %c", rank_choice[2]);
		}
		if ( type_choice[2] == 'S' )
		{
			printf("♠\n");
		}
		else if ( type_choice[2] == 'D' )
		{
			printf("◆\n");
		}
		else if ( type_choice[2] == 'H' )
		{
			printf("♥\n");
		}
		else if ( type_choice[2] == 'C' )
		{
			printf("♣\n");
		}
		Sleep(1000);
		if ( rank_choice[3] == '0' )
		{
			printf("네 번째 카드(4) : 10");
		}
		else
		{
			printf("네 번째 카드(4) : %c", rank_choice[3]);
		}
		if ( type_choice[3] == 'S' )
		{
			printf("♠\n");
		}
		else if ( type_choice[3] == 'D' )
		{
			printf("◆\n");
		}
		else if ( type_choice[3] == 'H' )
		{
			printf("♥\n");
		}
		else if ( type_choice[3] == 'C' )
		{
			printf("♣\n");
		}
		Sleep(1000);
		if ( rank_choice[4] == '0' )
		{
			printf("다섯 번째 카드(5) : 10");
		}
		else
		{
			printf("다섯 번째 카드(5) : %c", rank_choice[4]);
		}
		if ( type_choice[4] == 'S' )
		{
			printf("♠\n");
		}
		else if ( type_choice[4] == 'D' )
		{
			printf("◆\n");
		}
		else if ( type_choice[4] == 'H' )
		{
			printf("♥\n");
		}
		else if ( type_choice[4] == 'C' )
		{
			printf("♣\n");
		}
		Sleep(1000);
		if ( rank_choice[5] == '0' )
		{
			printf("여섯 번째 카드(6) : 10");
		}
		else
		{
			printf("여섯 번째 카드(6) : %c", rank_choice[5]);
		}
		if ( type_choice[5] == 'S' )
		{
			printf("♠\n");
		}
		else if ( type_choice[5] == 'D' )
		{
			printf("◆\n");
		}
		else if ( type_choice[5] == 'H' )
		{
			printf("♥\n");
		}
		else if ( type_choice[5] == 'C' )
		{
			printf("♣\n");
		}
		Sleep(1000);
		if ( rank_choice[6] == '0' )
		{
			printf("일곱 번째 카드(7) : 10");
		}
		else
		{
			printf("일곱 번째 카드(7) : %c", rank_choice[6]);
		}
		if ( type_choice[6] == 'S' )
		{
			printf("♠\n");
		}
		else if ( type_choice[6] == 'D' )
		{
			printf("◆\n");
		}
		else if ( type_choice[6] == 'H' )
		{
			printf("♥\n");
		}
		else if ( type_choice[6] == 'C' )
		{
			printf("♣\n");
		}
		Sleep(1000);


		for ( int i = 1; i < 7; i++ )
		{
			while ( type_choice[6] == type_choice[6 - i] && rank_choice[6] == rank_choice[6 - i] )
			{
				printf("\n");
				printf("엇?? 카드가 중복이 나왔네요ㅎ\n");
				Sleep(1000);
				printf("이것은 프로그램 오류가 아닙니다.\n");
				Sleep(1000);
				printf("도박의 위험성을 알리는 프로그램이였습니다.!!\n");
				Sleep(1000);
				printf("돈이나 가치 있는 소유물을 걸고 결과가 불확실한 사건에 내기를 거는 행위를 도박이라고 합니다.\n도박은 경쟁을 포함하는 놀이이고, 금전을 추구하는 행위이며, \n승패가 대체로 우연성에 의해 결정되기 때문에 그 결과가 언제나 불확실합니다.\n도박중독은 도박으로 인하여 본인, 가족 및 대인관계의 갈등과 재정적·사회적·법적 문제가 발생하고 있음에도 불구하고, \n자신의 의지로 도박행위를 조절하지 못하고 지속적으로 도박을 하게 되는 것을 말합니다.\n도박 행동 자체가 잘못은 아니지만 \n자신이 감당할 수 있는 시간과 돈의 한계를 넘어서 자제하지 못하고 반복적으로 도박을 한다면 도박중독입니다.\n도박중독을 치료하기 위해선 한국도박문제관리센터를 이용해 주십시오. 감사합니다. \n");
				printf("\n");
				exit(0);
			}
		}


		// 4. 사용할 카드 선택
		char fin_type_pr[5];
		char fin_rank_pr[5];
		int ch1 = 0, ch2 = 0, ch3 = 0, ch4 = 0, ch5 = 0;

		printf("조합에 이용 할 5장의 카드를 선택해 주세요(_ _ _ _ _ 형식으로 선택)\n");

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
		printf("최종 카드!\n");
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
			printf("♠ ");
		}
		else if ( fin_type_pr[0] == 'D' )
		{
			printf("◆ ");
		}
		else if ( fin_type_pr[0] == 'H' )
		{
			printf("♥ ");
		}
		else if ( fin_type_pr[0] == 'C' )
		{
			printf("♣ ");
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
			printf("♠ ");
		}
		else if ( fin_type_pr[1] == 'D' )
		{
			printf("◆ ");
		}
		else if ( fin_type_pr[1] == 'H' )
		{
			printf("♥ ");
		}
		else if ( fin_type_pr[1] == 'C' )
		{
			printf("♣ ");
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
			printf("♠ ");
		}
		else if ( fin_type_pr[2] == 'D' )
		{
			printf("◆ ");
		}
		else if ( fin_type_pr[2] == 'H' )
		{
			printf("♥ ");
		}
		else if ( fin_type_pr[2] == 'C' )
		{
			printf("♣ ");
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
			printf("♠ ");
		}
		else if ( fin_type_pr[3] == 'D' )
		{
			printf("◆ ");
		}
		else if ( fin_type_pr[3] == 'H' )
		{
			printf("♥ ");
		}
		else if ( fin_type_pr[3] == 'C' )
		{
			printf("♣ ");
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
			printf("♠\n");
		}
		else if ( fin_type_pr[4] == 'D' )
		{
			printf("◆\n");
		}
		else if ( fin_type_pr[4] == 'H' )
		{
			printf("♥\n");
		}
		else if ( fin_type_pr[4] == 'C' )
		{
			printf("♣\n");
		}
		Sleep(1000);

		// % rank int화 %
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

		// % type int화 %
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

		// 5. 패 분석

		//#### 중복제거 오류!! 중복제거 할때 처음거 패스되면 다음에 처음거랑 비교 불가

		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		// 스트레이트 플러시 판별
		int cha_rank_sf[5] = { fin_rank[0], fin_rank[1], fin_rank[2], fin_rank[3], fin_rank[4] };

		// 배열 정렬
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

		// 로얄 스트레이트 플러시
		if ( cha_rank_sf[0] == 1 && cha_rank_sf[1] == 10 && cha_rank_sf[2] == 11 && cha_rank_sf[3] == 12 && cha_rank_sf[4] == 13 && fin_type[0] == fin_type[1] && fin_type[1] == fin_type[2] && fin_type[2] == fin_type[3] && fin_type[3] == fin_type[4] )
		{
			printf("!!!★로얄 스트레이트 플러시★!!!\n");
		}
		// 스트레이트 플러시
		else if ( cha_rank_sf[1] == cha_rank_sf[0] + 1 && cha_rank_sf[2] == cha_rank_sf[0] + 2 && cha_rank_sf[3] == cha_rank_sf[0] + 3 && cha_rank_sf[4] == cha_rank_sf[0] + 4 && fin_type[0] == fin_type[1] && fin_type[1] == fin_type[2] && fin_type[2] == fin_type[3] && fin_type[3] == fin_type[4] )
		{
			printf("★스트레이트 플러시★\n");
		}
		else
		{
			//포카드 판별
			int cha_rank_four[5] = { fin_rank[0], fin_rank[1], fin_rank[2], fin_rank[3], fin_rank[4] };

			// 배열 정렬
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
				printf("포카드★!!\n");
			}
			else if ( cha_rank_four[1] == cha_rank_four[2] && cha_rank_four[2] == cha_rank_four[3] && cha_rank_four[3] == cha_rank_four[4] )
			{
				printf("포카드★!!\n");
			}
			else
			{
				// 풀하우스 판별
				int cha_rank_f[5] = { fin_rank[0], fin_rank[1], fin_rank[2], fin_rank[3], fin_rank[4] };

				// 배열 정렬
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
					printf("풀하우스★!\n");
				}
				else if ( cha_rank_f[2] == cha_rank_f[3] && cha_rank_f[3] == cha_rank_f[4] && cha_rank_f[0] == cha_rank_f[1] )
				{
					printf("풀하우스★!\n");
				}
				else
				{
					// 플러시 판별
					if ( fin_type[0] == fin_type[1] && fin_type[1] == fin_type[2] && fin_type[2] == fin_type[3] && fin_type[3] == fin_type[4] )
					{
						printf("플러시!!!!!\n");
					}
					else
					{
						// 스트레이트 판별
						int cha_rank[5] = { fin_rank[0], fin_rank[1], fin_rank[2], fin_rank[3], fin_rank[4] };

						// 배열 정렬
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

						// 백스트레이트
						if ( cha_rank[0] == 1 && cha_rank[1] == 2 && cha_rank[2] == 3 && cha_rank[3] == 4 && cha_rank[4] == 5 )
						{
							printf("백스트레이트!!!!\n");
						}
						// 마운틴
						else if ( cha_rank[0] == 1 && cha_rank[1] == 10 && cha_rank[2] == 11 && cha_rank[3] == 12 && cha_rank[4] == 13 )
						{
							printf("마운틴!!!!\n");
						}
						// 스트레이트
						else if ( cha_rank[1] == cha_rank[0] + 1 && cha_rank[2] == cha_rank[0] + 2 && cha_rank[3] == cha_rank[0] + 3 && cha_rank[4] == cha_rank[0] + 4 )
						{
							printf("스트레이트!!!!\n");
						}
						else
						{
							// 트리플 판별
							/////////////////////////////////////////////////////////////////////
							/////////////////////////////////////////////////////////////////////
							/////////////////////////////////////////////////////////////////////
							// 오류 ㅅㅂ
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
										}// 속에있는 j for
									}
								}// k for
							}// i for

							if ( index_t1 != 100 && index_t2 != 100 && index_t3 != 100 )
							{
								printf("트리플!!!\n");
							}
							else
							{
								// 투페어 판별
								int index_b1 = 100, index_b2 = 100;
								int index_a1 = 100, index_a2 = 100;

								// 처음페어 판별
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

								 // 두번째페어 판별
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
									printf("투페어!!\n");
								}
								else
								{
									// 원페어 판별
									int index1 = 100, index2 = 100;

									// 원페어 판별
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
										printf("원페어!\n");
									}
									else
									{
										// 탑 판별
										int max_num = 0;
										int index = 0;

										// 숫자구분
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

										printf("탑\n");
										// 탑
									}// 원페어
								}// 투페어
							}// 트리플
						}// 스트레이트
					}// 플러시
				}// 풀하우스
			}// 포카드
		}// 스트레이트 플러시
		Sleep(2000);
		printf("\n게임을 다시 하시겠습니까?\n");
		printf("1. 다시한다\n");
		printf("2. 그만한다\n");

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


	}// while 문
}