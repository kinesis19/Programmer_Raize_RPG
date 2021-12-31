#include <stdio.h>
extern char Player_Name[10]; // Player_Name은 Story_Tutorial에서 선언 함. 
//Player Level이 1일 때 
int Player_Level = 1;
int Player_hp = 10;
int Player_atk = 4;  
int Player_def = 0;
int Player_exp = 0;
int Player_maxexp = 10;
// 
int Player_money = 0; //
int Player_heart = 3; //목숨 대신 '코어' 라는 단어 사용. 
// heart ≠hp  heart는 3개. 
//Player가 몹한테 죽으면(Player_hp<=0) heart는 1개 씩 감소됨. 
//heart가 0개면 게임 오버
char *Story_Level = "1-1"; //크기는 3글자 각각 1개씩 



void Load_Player_Exp_Checker(){
	
	if(Player_maxexp==10&&Player_exp>=Player_maxexp){ //레벨 1에서 2로 넘어갈 때 실행 됨. 
		Player_Level = 2;
		Player_hp = 18;
		Player_atk = 4;  
		Player_def = 0;
		Player_exp = 0;
		Player_maxexp = 20;
	}else if(Player_maxexp==20&&Player_exp>=Player_maxexp){
		Player_Level = 3;
		Player_hp = 25;
		Player_atk = 6;  
		Player_def = 0;
		Player_exp = 0;
		Player_maxexp = 30;
	}else if(Player_maxexp==30&&Player_exp>=Player_maxexp){
		Player_Level = 4;
		Player_hp = 32;
		Player_atk = 6;  
		Player_def = 0;
		Player_exp = 0;
		Player_maxexp = 40;
	}else if(Player_maxexp==40&&Player_exp>=Player_maxexp){
		Player_Level = 5;
		Player_hp = 40;
		Player_atk = 8;  
		Player_def = 0;
		Player_exp = 0;
		Player_maxexp = 50;
	} 
}

