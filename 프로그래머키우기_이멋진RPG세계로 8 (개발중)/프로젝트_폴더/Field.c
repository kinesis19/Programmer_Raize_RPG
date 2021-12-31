#include <stdio.h>
#include <windows.h> 
#include <string.h>
extern char *Story_Level[3];
extern void Load_Story_title();
extern void Load_Mob_Ui();
extern void Load_Player_Ui();
extern void Load_Player_Info();
extern void Load_Player_Exp_Checker();
extern int Player_heart;
//Player Logic 불러오기
extern int Player_hp;
extern int Player_atk;
extern void Player_Attack(); 
extern void Player_Use_Skill1();
extern void Player_Use_Skill2();
extern void Player_Use_Skill3();

extern int Mob_hp;
extern int Mob_atk;
extern void Mob_Attack(); 
//스킬 별 쿨타임 함수 불러오기
extern int Skill1_cooldown;
extern int Skill2_cooldown;
extern int Skill3_cooldown;
extern void Skill1_time();
extern void Skill2_time();
extern void Skill3_time();
extern void Skill_all_time(); // 사용 중지 
void Goto_Field(){
	if(Player_heart==0){
		printf("GAMEOVER 라고");
		system("cls");
		Goto_Over_Scene();
	}else{
		Load_Player_Exp_Checker();
    int i; //for문 용;
	int Player_Input; 
    //프로그램 기본 설정 
    system("title 프로그래머 키우기 : 이 멋진 RPG 세계로");
    system("echo off");
    system("mode con cols=68 lines=45"); 
    system("color e");
	Load_Story_title();
    printf("┌─────────────────────────── 『필 드』────────────────────────────┐\n");
    printf("│\t\t\t\t\t\t\t\t  │\n"); 
    //몹 UI 불러옴
    Load_Mob_Ui(); 
    for(i=1;i<=2;i++){ //  
        printf("│\t\t\t\t\t\t\t\t  │\n"); 
    }    
    printf("│─────────────────────────────────────────────────────────────────│\n");
    printf("│\t\t\t\t\t\t\t\t  │\n"); 
    //Player UI 불러옴 
	Load_Player_Ui();
    for(i=1;i<=2;i++){ //  
        printf("│\t\t\t\t\t\t\t\t  │\n"); 
    }
    printf("│─────────────────────────────────────────────────────────────────│\n"); 
    printf("│        ①기본공격 ②1번스킬 ③2번스킬 ④3번스킬 ⑤탈출하기\t  │\n");    
    printf("│─────────────────────────────────────────────────────────────────│\n");
    // 변화 체크 
    for(i=1;i<=5;i++){
        printf("│\t\t\t\t\t\t\t\t  │\n"); 
    }
    printf("└─────────────────────────────────────────────────────────────────┘\n");
	//프로그램 UI 생성하기 끝 
	 
	printf("입력 : "); 
	scanf(" %d", &Player_Input); // White Space -> 가끔식 입력 오류 뜰 때 해결방안 
	switch (Player_Input){

		//기본 공격 
		case 1 : 
		if(Player_heart==0){
		printf("GAMEOVER 라고");
		system("cls");
		Goto_Over_Scene();
		}
		printf("\n\t내가 공격하는 중..\n");
		Player_Attack();
		printf("\t적에게 가한 피해량 : %d / 적 남은 hp : %d\n", Player_atk, Mob_hp);
		Sleep(1500);
		if(Skill1_cooldown!=2){
			Skill1_time();
		}
		if(Skill2_cooldown!=3){
			Skill2_time();
		} 
		if(Skill3_cooldown!=7){
			Skill3_time();
		}
		printf("\n\t바이러스가 공격하는 중..\n");
		Mob_Attack();
		Sleep(1500);
		printf("\t내가 받은 피해량 : %d / 내 hp : %d\n", Mob_atk, Player_hp);
		Sleep(7500);
		system("cls");
		
		
		//1번 스킬 공격 
		case 2 : 
		if(Player_heart==0){
		printf("GAMEOVER 라고");
		system("cls");
		Goto_Over_Scene();
		}
		if(Skill1_cooldown==2){
			printf("\n\t[♠스킬 \"디 페이져\"를 사용 합니다.♠]\n");
			printf("\n\t내가 공격하는 중..\n");
			Sleep(1500);
			Player_Use_Skill1();
			if(Skill2_cooldown!=3){
			Skill2_time();
			} 
			if(Skill3_cooldown!=7){
			Skill3_time();
			}
			printf("\n\t바이러스가 공격하는 중..");
			Sleep(1500);
			Mob_Attack();
			system("cls");	
		}else if(Skill1_cooldown!=2){
			printf("\n\t스킬 재사용 대기 턴 : %d\n", Skill1_cooldown);
			Sleep(1500);
			system("cls");
			Goto_Field();
		}
		//2번 스킬 공격	
		case 3 : 
		if(Player_heart==0){
		printf("GAMEOVER 라고");
		system("cls");
		Goto_Over_Scene();
		}
		if(Skill2_cooldown==3){
			printf("\n\t[♠스킬 \"세인트 실\"을 사용 합니다.♠]\n");
			printf("\n\thp를 회복하는 중..\n");
			Sleep(1500);
			Player_Use_Skill2();
			if(Skill1_cooldown!=2){
			Skill1_time();
			}
			if(Skill3_cooldown!=7){
			Skill3_time();
			}
			printf("\n\t바이러스가 공격하는 중..");
			Sleep(1500);
			Mob_Attack();
			system("cls");	
		}else if(Skill2_cooldown!=3){
			printf("\n\t스킬 재사용 대기 턴 : %d\n", Skill2_cooldown);
			Sleep(1500);
			system("cls");
			Goto_Field();
		} 
		//3번 스킬 공격 
		case 4 :  
		if(Player_heart==0){
		printf("GAMEOVER 라고");
		system("cls");
		Goto_Over_Scene();
		}
		if(Skill3_cooldown==7){
			printf("\n\t[♠스킬 \"라스트 커맨드\"를 사용 합니다.♠]\n");
			printf("\n\t라스트 커맨드를 사용하는  중..\n");
			Sleep(1500);
			Player_Use_Skill3();
			if(Skill1_cooldown!=2){
			Skill1_time();
			}
			if(Skill2_cooldown!=3){
			Skill2_time();
			}
			printf("\n\t바이러스가 공격하는 중..");
			Sleep(1500);
			Mob_Attack();
			system("cls");	
		}else if(Skill3_cooldown!=7){
			printf("\n\t스킬 재사용 대기 턴 : %d\n", Skill3_cooldown);
			Sleep(1500);
			system("cls");
			Goto_Field();
		} 
		//메인 화면으로 이동 
		case 5:
		Main_Game(); 
		
	}
	}
	
}

