#include <stdio.h>
#include <windows.h> 
#include <string.h>
extern void Goto_Field();
extern void Mob_Chooser();
extern int Mob_choose;

void Select_Field(){
    int i; //for문 용;
	int Player_Input; 
    //프로그램 기본 설정 
    system("title 프로그래머 키우기 : 이 멋진 RPG 세계로");
    system("echo off");
    system("mode con cols=68 lines=45"); 
    system("color e");
	Load_Story_title();
    printf("┌───────────────────── 『필 드 : 선택의 영역』────────────────────┐\n");
    printf("│\t\t\t\t\t\t\t\t  │\n"); 
    //In Top Bar 
    printf("│─────────────────────────────────────────────────────────────────│\n"); 
    printf("│   ① : Lv.1 크리퍼  │   ② : Lv.2 브레인  │  ③ : Lv.3 13일\t  │\n");
    printf("│\t\t      │\t\t\t    │\t\t          │\n");
    printf("│   ④ : Lv.4 비엔나  │   ⑤ : Lv.5 스톤드  │  ⑥ : Lv.6 폭포\t  │\n");
    printf("│\t\t      │\t\t\t    │\t\t          │\n");
    printf("│   ⑦ : Lv.7 어벤저  │   ⑧ : Lv.8 LBC     │  ⑨ : Lv.9 조쉬\t  │\n");
    printf("│\t\t      │\t\t\t    │\t\t          │\n");
    printf("│   ⑩ : Lv.10 DIR-Ⅱ │   ⑪ : Lv.11 미켈란 │  ⑫ : Lv.12 카지노  │\n");
    for(i=1;i<=2;i++){ //  
        printf("│\t\t\t\t\t\t\t\t  │\n"); 
    }    
    printf("│\t\t\t\t\t\t\t\t  │\n");

    for(i=1;i<=5;i++){
        printf("│\t\t\t\t\t\t\t\t  │\n"); 
    }
    
    printf("│\t\t\t   ┌───────────┐\t\t\t  │\n");
    printf("│\t\t\t   │ 〔커맨드〕│\t\t\t  │\n"); 
	printf("│──────────────────────────└───────────┘──────────────────────────│\n"); 
	printf("│\t\t\t    90 : 탈출하기\t\t\t  │\n");    
    
    printf("└─────────────────────────────────────────────────────────────────┘\n");
	//프로그램 UI 생성하기 끝 
	 
	printf("입력 : "); 
	scanf(" %d", &Player_Input); // White Space -> 가끔식 입력 오류 뜰 때 해결방안 
	printf("%d", Player_Input);
	switch (Player_Input){

		case 1 : Mob_choose = 1; Mob_Chooser(); system("cls");Goto_Field();
		case 2 : Mob_choose = 2; Mob_Chooser(); system("cls");Goto_Field();
		case 3 : Mob_choose = 3; Mob_Chooser(); system("cls");Goto_Field(); 
		case 4 : Mob_choose = 4; Mob_Chooser(); system("cls");Goto_Field(); 
		case 5 : Mob_choose = 5; Mob_Chooser(); system("cls");Goto_Field(); 
		case 6 : Mob_choose = 6; Mob_Chooser(); system("cls");Goto_Field(); 
		case 7 : Mob_choose = 7; Mob_Chooser(); system("cls");Goto_Field(); 
		case 8 : Mob_choose = 8; Mob_Chooser(); system("cls");Goto_Field(); 
		case 9 : Mob_choose = 9; Mob_Chooser(); system("cls");Goto_Field(); 
		case 10 : Mob_choose = 10; Mob_Chooser(); system("cls");Goto_Field(); 
		case 11 : Mob_choose = 11; Mob_Chooser(); system("cls");Goto_Field(); 
		case 12 : Mob_choose = 12; Mob_Chooser(); system("cls");Goto_Field();
		//메인 화면으로 이동 
		case 90 :
		Main_Game(); 
		
	}
}

