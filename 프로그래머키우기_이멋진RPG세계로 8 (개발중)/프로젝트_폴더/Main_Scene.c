#define _CRT_SECURE_NO_WARNINGS    // sprintf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <windows.h>
#include <string.h>
//씬 전환시 넘어갈 씬 불러오기 
extern void Goto_Story();
extern void Goto_Store();
//extern void Goto_Field();
extern void Select_Field();
//Player 정보 불러오기 
extern char Player_Name[10];
extern int Player_Level;
extern int Player_hp;
extern int Player_atk;
extern int Player_def;
extern int Player_exp;
extern int Player_maxexp;
extern int Player_money;
extern int Player_heart;
extern char *Story_Level[3];
extern char *Player_title[6];
//Player 정보 업데이트
extern void Load_Player_Exp_Checker(); 
extern void Player_hp_reset();
extern void Dead_Player();
extern void Goto_Over_Scene();
//
void Main_Game(){
	if(Player_heart==0){
		printf("GAMEOVER 라고");
		system("cls");
		Goto_Over_Scene();
	}else{
	Load_Player_Exp_Checker();
	Player_hp_reset();
	char dummy_exp_length[10];
	char dummy_maxexp_length[10];
	char dummy_hp_length[10];
	char dummy_money_length[10];
	
    int i;
	int Player_Input; 
    //프로그램 기본 설정 
    system("title 프로그래머 키우기 : 이 멋진 RPG 세계로");
    system("echo off");
    system("mode con cols=68 lines=45"); 
    system("color 7");
    printf("┌─────────────────────── 『엘시아스 세계』────────────────────────┐");
    for(i=1;i<=2;i++){ //  
        printf("\n");
        printf("│\t\t\t\t\t\t\t\t  │"); 
    }
    printf("\n");
    printf("│\t\t\t\tLv.%d\t\t\t\t  │\n", Player_Level); 
    //닉네임 길이에 따른 위치 조정 
    if(strlen(Player_Name)==2){ //닉네임이 1글자 일 때 
    	printf("│\t\t\t\t[%s]\t\t\t\t  │\n",Player_Name);	
        printf("│\t\t\t\t\t\t\t\t  │"); 
	}else if(strlen(Player_Name)==4){//닉네임이 2글자 일 때 
		printf("│\t\t\t       [%s]\t\t\t\t  │\n",Player_Name);
        printf("│\t\t\t\t\t\t\t\t  │"); 	
	}else if(strlen(Player_Name)==6){//닉네임이 3글자 일 때 
		printf("│\t\t\t      [%s]\t\t\t\t  │\n",Player_Name);
        printf("│\t\t\t\t\t\t\t\t  │"); 	
	}else if(strlen(Player_Name)==8){//닉네임이 4글자 일 때 
		printf("│\t\t\t     [%s]\t\t\t\t  │\n",Player_Name);
        printf("│\t\t\t\t\t\t\t\t  │"); 	
	}else if(strlen(Player_Name)==10){//닉네임이 5글자 일 때 
		printf("│\t\t\t    [%s]\t\t\t  │\n",Player_Name);
        printf("│\t\t\t\t\t\t\t\t  │"); 	
	}
	//Player 형태 
	printf("\n"); 
	printf("│\t\t\t       □□□\t\t\t\t  │\n");  //1번 라인 
	printf("│\t\t\t       □■□\t\t\t\t  │\n"); 
	printf("│\t\t\t       □□□\t\t\t\t  │\n"); 
	printf("│\t\t\t □□□□□□□□□\t\t\t  │\n"); 
	printf("│\t\t\t □■□■■■□■□\t\t\t  │\n"); 
	printf("│\t\t\t □■□■■■□■□\t\t\t  │\n"); 
	printf("│\t\t\t □■□■■■□■□\t\t\t  │\n"); 
	printf("│\t\t\t □□□■■■□□□\t\t\t  │\n"); 
	printf("│\t\t\t       □□□\t\t\t\t  │\n"); 
	printf("│\t\t\t       □■□\t\t\t\t  │\n"); 
	printf("│\t\t\t       □■□\t\t\t\t  │\n"); 
	printf("│\t\t\t       □■□\t\t\t\t  │\n"); 
	printf("│\t\t\t       □■□\t\t\t\t  │\n"); 
	//라인 bar 
	printf("│\t\t────────────────────────────────────\t\t  │\n");
	//Player 스탯 ui - 스탯의 크기에 따라서 각각 조절
	sprintf(dummy_hp_length, "%d", Player_hp); //Player_hp의 길이를 가져와서 dummy에 지정함. 
	if(strlen(dummy_hp_length)==2){ // hp가 두 자릿수 일 때 
		if(Player_heart==3){
			printf("│\t\t\thp : %d  │ 남은 코어 : ♥♥♥\t\t  │ \n", Player_hp);	
		}else if(Player_heart==2){
			printf("│\t\t\thp : %d  │ 남은 코어 : ♥♥\t\t  │ \n", Player_hp);	
		}else if(Player_heart==1){
			printf("│\t\t\thp : %d  │ 남은 코어 : ♥\t\t  │ \n", Player_hp);		
		}
	}else if(strlen(dummy_hp_length)==3){ // hp가 세 자릿수 일 때 
		if(Player_heart==3){
			printf("│\t\t\thp : %d │ 남은 코어 : ♥♥♥\t\t  │ \n", Player_hp);	
		}else if(Player_heart==2){
			printf("│\t\t\thp : %d │ 남은 코어 : ♥♥\t\t  │ \n", Player_hp);	
		}else if(Player_heart==1){
			printf("│\t\t\thp : %d │ 남은 코어 : ♥\t\t  │ \n", Player_hp);		
		}
	}
	printf("│\t\t\t\t │\t\t\t\t  │\n");
	printf("│\t\t    공격력 : %d\t │ 현재 스토리 : %s\t\t  │ \n", Player_atk, *Story_Level);	
	printf("│\t\t\t\t │\t\t\t\t  │\n");
	//Player의 exp와 Player의 maxexp값의 크기를 문자열로 변경하여
	//크기별로 UI를 재 지정 함. 
	sprintf(dummy_exp_length, "%d", Player_exp);
	sprintf(dummy_maxexp_length, "%d", Player_maxexp);
	if(strlen(dummy_exp_length)==1&&strlen(dummy_maxexp_length)==2||strlen(dummy_exp_length)==2&&strlen(dummy_maxexp_length)==2){
		printf("│\t\t    방어력 : %d\t │ EXP : %d/%d\t\t\t  │ \n", Player_def,Player_exp, Player_maxexp);			
	}else if(strlen(dummy_exp_length)==1&&strlen(dummy_maxexp_length)==3||strlen(dummy_exp_length)==2&&strlen(dummy_maxexp_length)==3){
		printf("│\t\t    방어력 : %d\t │ EXP : %d/%d\t\t\t  │ \n", Player_def,Player_exp, Player_maxexp);	
	}else if(strlen(dummy_exp_length)==3&&strlen(dummy_maxexp_length)==3){
		printf("│\t\t    방어력 : %d\t │ EXP : %d/%d\t\t  │ \n", Player_def,Player_exp, Player_maxexp);		
	}
    printf("│\t\t\t\t\t\t\t\t  │\n"); 
    sprintf(dummy_money_length, "%d", Player_money); //dummy에 money의 길이 값 저장 
    if(strlen(dummy_money_length)==1||strlen(dummy_money_length)==2){
		printf("│\t\t\t    코인 : %d \t\t\t\t  │\n", Player_money); 	
	}else if(strlen(dummy_money_length)>=3){ // 천원 이상부터 아래 명령문으로 지정 함. ** 게임 특성상 코인 수급률이 낮기에 Player가 얻을 수 있는 최대 금액을 10만원으로 예상  중 
		printf("│\t\t\t    코인 : %d \t\t\t  │\n", Player_money); 	
	}

    for(i=1;i<=5;i++){
        printf("│\t\t\t\t\t\t\t\t  │\n"); 
    }
    printf("│    ┌───────────────┐   ┌───────────────┐   ┌───────────────┐\t  │\n");
    printf("│    │   ① : 스토리 │   │   ② : 던전   │   │   ③ : 상점   │\t  │\n"); 
    printf("│    └───────────────┘   └───────────────┘   └───────────────┘\t  │\n");
	for(i=1;i<=3;i++){
        printf("│\t\t\t\t\t\t\t\t  │\n"); 
    }
    printf("└─────────────────────────────────────────────────────────────────┘\n");
	system("color e");
	printf("\t 상호작용 시, 각각 알맞는 숫자(키)을 입력해 주세요.\n\n");
	printf("입력 : "); 
	scanf(" %d", &Player_Input);
	
	switch(Player_Input){
		
		case 1 :
		system("cls");
		Goto_Story();
		case 2 : 
		system("cls");
		Select_Field();
		
		case 3 :
		system("cls");
		Goto_Store();
	}
}
}

