#include <stdio.h>
char *Mob_Name1 = "크리퍼";
char *Mob_Name2 = "브레인";
char *Mob_Name3 = "13일";
char *Mob_Name4 = "비엔나";
char *Mob_Name5 = "스톤드";
char *Mob_Name6 = "폭포";
char *Mob_Name7 = "어벤저";
char *Mob_Name8 = "LBC";
char *Mob_Name9 = "조쉬";
char *Mob_Name10 = "DIR-Ⅱ";
char *Mob_Name11 = "미켈란";
char *Mob_Name12 = "카지노";
int Mob_Level = 1; 
int Mob_hp = 10;
int	Mob_atk = 3;
int Mob_def = 0;
int Mob_choose = 1;
int Mob_drap_coin = 1;



void Mob_Chooser(){ // 몹을 선택하여 선택한 몹의 data만 추출해 Field로 감 
	
	if(Mob_choose==1){
		Mob_Level = 1; 
		Mob_hp = 10;
		Mob_atk = 2;
		Mob_def = 0;
		Mob_drap_coin = 1;
	}else if(Mob_choose==2){
		Mob_Level = 2; 
		Mob_hp = 20;
		Mob_atk = 3;
		Mob_def = 0;
		Mob_drap_coin = 1;
	}else if(Mob_choose==3){
		Mob_Level = 3; 
		Mob_hp = 25;
		Mob_atk = 4;
		Mob_def = 0;
		Mob_drap_coin = 1;
	}else if(Mob_choose==4){
		Mob_Level = 4; 
		Mob_hp = 30;
		Mob_atk = 5;
		Mob_def = 0;
		Mob_drap_coin = 1;
	}else if(Mob_choose==5){
		Mob_Level = 5; 
		Mob_hp = 50;
		Mob_atk = 5;
		Mob_def = 0;
		Mob_drap_coin = 1;
	}else if(Mob_choose==6){
		Mob_Level = 6; 
		Mob_hp = 65;
		Mob_atk = 5;
		Mob_def = 5;
		Mob_drap_coin = 1;
	}else if(Mob_choose==7){
		Mob_Level = 7; 
		Mob_hp = 80;
		Mob_atk = 5;
		Mob_def = 5;
		Mob_drap_coin = 1;
	}else if(Mob_choose==8){
		Mob_Level = 8; 
		Mob_hp = 100;
		Mob_atk = 5;
		Mob_def = 5;
		Mob_drap_coin = 1;
	}else if(Mob_choose==9){
		Mob_Level = 9; 
		Mob_hp = 120;
		Mob_atk = 5;
		Mob_def = 5;
		Mob_drap_coin = 1;
	}else if(Mob_choose==10){
		Mob_Level = 10; 
		Mob_hp = 140;
		Mob_atk = 7;
		Mob_def = 5;
		Mob_drap_coin = 1;
	}else if(Mob_choose==11){
		Mob_Level = 11; 
		Mob_hp = 170;
		Mob_atk = 8;
		Mob_def = 5;
		Mob_drap_coin = 2;
	}else if(Mob_choose==12){
		Mob_Level = 12; 
		Mob_hp = 180;
		Mob_atk = 9;
		Mob_def = 5;
		Mob_drap_coin = 2;
	}  
	
}
