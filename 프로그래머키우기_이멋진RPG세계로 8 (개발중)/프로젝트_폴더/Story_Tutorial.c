#include <stdio.h> 
#include <windows.h>
#include <string.h> 
#include <ctype.h>
//사용할 함수 선언 
void Story_Tutorial();
void Story_Tutorial_1();
extern void Main_Game(); 
//전역 변수 선언 
char Player_Name[10] = "가나다라"; // 닉네임의 최대 길이는 5글자 
//Story_Tutorial 함수 
void Story_Tutorial(){
	// 복붙하기 편하게 저장 -> 『    』 
	printf("『 나는 3류 프로그래머다. \n");
	Sleep(1000);
	printf("  전염병 때문에 밖에 나가지도 못하고,\n  허구한 날 방구석에서 유튜브나 보고 있다. 』\n\n");	
	Sleep(3500); // 1000ms = 1s	
	printf("『 하.. 재미도 없고, 감동도 없고..』\n\n");
	Sleep(2000);
	printf("[그 때, 모니터에 레드 스크린과 함께 경고음이 울렸다.] \n\n");
	Sleep(2000);
	printf("『또 그녀석 이네..』\n");
	Sleep(1000);
	printf("[내 서버는 하루하루 간신히 저 공격자로부터 버티고 있다.]\n\n");
	Sleep(2000);
	printf("[그래도, 내가 만든 '리비' 덕분에 아직까지 버티고 있는 것이다.]\n\n");
	Sleep(2000);
	printf("[그렇다, 사실 나는 세계 3대 기업 중 한 곳인 Zerosoft에서 인공지능을 만들고 있다.]\n\n");
	Sleep(2000);
	printf("『흥.. 내가 털리게 가만히 놔둘것 같냐!\n");
	Sleep(2000);
	printf("  네 녀석이 한번 더 접근하면\n  그땐 네 녀석의 컴퓨터 자체를 날려 보내주겠어!!』\n\n");
	Sleep(3000);
	printf("[그때, 뚝. 뚝. 빨간 무언가가 떨어졌다.]\n\n");
	Sleep(2000);
	printf("[어디서 떨어지는 거지?]\n\n");
	Sleep(2000);
	printf("[옆에 있는 거울을 보니, 코피가 나고 있던 것이었다.]\n\n");
	Sleep(2000);
	printf("『하긴.. 최근에 잠을 못자긴 했지.』\n\n");
	Sleep(2000);
	printf("[그래? 그럼 푹 쉬게 해줄게 ~ ♡]\n\n");
	Sleep(2000);
	printf("[여자아이의 목소리가 내게 속삭였다.]\n\n");
	Sleep(2000);
	printf("『이젠 환청까지 들리네..』\n\n");
	Sleep(2000);
	printf("『그래! 이제는 진짜 자야겠어!』\n\n");
	Sleep(4000);
	printf("[그 날,");
	Sleep(2000);
	printf("나는 죽었다.]\n");
	Sleep(4000);
	system("cls");
	Story_Tutorial_1();
}


void Story_Tutorial_1(){ 
	char Player_Input; // Player_Input = Player의 입력 값 
	
	//스토리-튜토리얼1 시작 
	Sleep(1000);
	printf("[안녕? 난 이 세계의 주인 루비야♡]\n\n");
	Sleep(2000);
	printf("[네가 필요해서 불렀지만, 아직 이름을 모르겠어♡]\n\n");
	Sleep(2500);
	printf("[네 이름은 뭐야? ♡]\n\n");
	Sleep(1000);
	printf("*한글은 최대 5글자 까지 입력 가능합니다(공백 제외).*\n 숫자 닉네임 사용 불가\n\n");
	//영어 닉네임 검출은 버그로 인해 사용 중지 
	printf("입력 : ");
	scanf("%s", Player_Name);
	//닉네임 조건 검사
	 
	if((Player_Name[0] >= '0' && Player_Name[0] <= '9')||(Player_Name[1] >= '0' && Player_Name[1] <= '9')||(Player_Name[2] >= '0' && Player_Name[2] <= '9')||(Player_Name[3] >= '0' && Player_Name[3] <= '9')||(Player_Name[4] >= '0' && Player_Name[4] <= '9')||(Player_Name[5] >= '0' && Player_Name[5] <= '9')||(Player_Name[6] >= '0' && Player_Name[6] <= '9')||(Player_Name[7] >= '0' && Player_Name[7] <= '9')||(Player_Name[8] >= '0' && Player_Name[8] <= '9')||(Player_Name[9] >= '0' && Player_Name[9] <= '9')){
		printf("\n[숫자는 안 된다구.. ]\n[다음에 다시 보길 바래♡]");
		system("exit");
	}else{
		if(Player_Name[0] & 0x80 || Player_Name[1] & 0x80 || Player_Name[2] & 0x80 || Player_Name[3] & 0x80 || Player_Name[4] & 0x80|| Player_Name[5] & 0x80|| Player_Name[6] & 0x80|| Player_Name[7] & 0x80|| Player_Name[8] & 0x80|| Player_Name[9] & 0x80){ // 닉네임이 한글인지 영어인지 판별 
			//닉네임이 한글일 때 
			if(strlen(Player_Name)>10){ //닉네임 길이가 5초과 시, 게임 종료  (한글은 1글자당 2공간 차지함. 
				printf("\n[5글자를 넘기셨군요.. ]\n[당신은 제가 초대하지 않은 불청객 입니다.]");
				system("exit");
			}else{
				Sleep(2000);
				printf("\n[%s..", Player_Name);
				Sleep(2000);
				printf("좋은 이름이네!]\n\n");
				Sleep(2000);
				printf("[\"최고의 프로그래머 %s, 업무 스트레스로 인해 자살을 택하다.\"]\n\n", Player_Name);
				Sleep(2000);
				printf("[내일이 되면 이 기사가 세계에 퍼지겠지]\n\n");
				Sleep(2000);
				printf("『넌 대체 누구지?\n  누군진 몰라도 날 원래 세계에 다시 보내줘!』\n\n");
				Sleep(2000);
				printf("[정말 다시 가고 싶어?]\n\n");
				Sleep(2000);
				printf("『그래, 날 원래있던 세계로 보내달라고!!』\n\n");
				Sleep(2000);
				printf("[안됐지만, 할 수 없어.]\n\n");
				Sleep(2000);
				printf("『어째서? 날 이곳으로 불렀으면 다시 보낼 줄도 알거아니야!』\n\n");
				Sleep(2000);
				printf("[원래 세계에 있던 네 육체는 죽었어.]\n\n");
				Sleep(2000);
				printf("[그러지 말고 나랑 게임하는 건 어때?]\n\n");
				Sleep(2000);
				printf("『무슨 게임인데?』\n\n");
				Sleep(2000);
				printf("[RPG세계로 보내줄게]\n\n");
				Sleep(2000);
				printf("[그곳에서 최종보스를 제거하면 네 승리야! ♡]\n\n");
				Sleep(2000);
				printf("『내가 승리하면 나에게 득이 되는건 뭐지?』\n\n");
				Sleep(2000);
				printf("[새로운 육체를 만들어 네가 원래 있던 세계로 보내줄게! ♡]\n\n");
				Sleep(2000);
				printf("[어때? 구미가 좀 당겨 ?]\n\n");
				Sleep(2000);
				printf("[나쁘지 않은 제안이다.. 승리하면 원래 세계로 돌아갈 수 있으니.\n무조건 수락하는 거다!]\n\n");
				Sleep(2000);
				printf("『좋다! 그 게임을 수락한다!!』\n\n");
				Sleep(2000);
				printf("[그럼.. 무운을 빌게, 최고의 프로그래머♡]\n\n");
				Sleep(4000);
				Main_Game();
			}
				
		}else{//영어가 섞여 있을 떄 
			printf("\n[닉네임 규칙 지키라 했죠!!]\n[당신은 이 세계에 올 자격이 없습니다.]");
			
			
		}
	}	
}






