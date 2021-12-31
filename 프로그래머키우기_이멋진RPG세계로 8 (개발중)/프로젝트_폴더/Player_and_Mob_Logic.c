//Player Logic  - 함수 용도 
#include <stdio.h>
#include <windows.h>
//함수 선언 
void Drap_exp();
void Dead_Mob();
void Dead_Player();
void Player_hp_reset();
void Player_Attack();
void Mob_Attack();
void Player_Use_Skill1();
void Player_Use_Skill2();
void Player_Use_Skill3();
void Skill1_time();
void Skill2_time();
void Skill3_time();
void Skill_all_time();
//함수 불러오기
extern void Main_Game(); 
extern void Goto_Field();
extern void Goto_Over_Scene(); 
//Player Data Load
extern int Player_Level;
extern int Player_hp;
extern int Player_atk;
extern int Player_def;
extern int Player_exp;
extern int Player_maxexp;
extern int Player_money;
extern int Player_heart;
extern void Load_Player_Exp_Checker(); 
extern void Goto_Over_Scene();
//Mob Data Load
extern int Mob_Level;
extern char *Mob_Name;
extern int Mob_hp;
extern int Mob_atk;
extern int Mob_def;
extern void Mob_Chooser();
//스킬별 쿨타임 변수 선언
int Skill1_cooldown = 2; // -> 2턴 제한. 
int Skill2_cooldown = 3;
int Skill3_cooldown = 7;

 
//나갔다가 오면 초기화 되게 하는 시스템
void Player_Mob_Reset(){
	Load_Player_Exp_Checker();
	Mob_Chooser();
} 
//몹 처치 시
void Dead_Mob(){
	if(Mob_hp<=0){
		Drap_exp();
		printf("\n♬바이러스를 처치 하셨습니다.\n♬3초후 메인 화면으로 이동 합니다..");
		Sleep(3000);
		Main_Game();
	}
}
void Drap_exp(){
	if(Mob_Level==1){
		Player_exp = Player_exp + 1;
		Player_money = Player_money + 1;
	}else if(Mob_Level==2){
		Player_exp = Player_exp + 2;
		Player_money = Player_money + 1;
	}else if(Mob_Level==3){
		Player_exp = Player_exp + 3;
		Player_money = Player_money + 1;
	}else if(Mob_Level==4){
		Player_exp = Player_exp + 4;
		Player_money = Player_money + 1;
	}else if(Mob_Level==5){
		Player_exp = Player_exp + 5;
		Player_money = Player_money + 1;
	}else if(Mob_Level==6){
		Player_exp = Player_exp + 5;
		Player_money = Player_money + 2;
	}else if(Mob_Level==7){
		Player_exp = Player_exp + 7;
		Player_money = Player_money + 2;
	}else if(Mob_Level==8){
		Player_exp = Player_exp + 9;
		Player_money = Player_money + 1;
	}else if(Mob_Level==9){
		Player_exp = Player_exp + 9;
		Player_money = Player_money + 1;
	}else if(Mob_Level==10){
		Player_exp = Player_exp + 10;
		Player_money = Player_money + 1;
	}else if(Mob_Level==11){
		Player_exp = Player_exp + 13;
		Player_money = Player_money + 4;
	}else if(Mob_Level==12){
		Player_exp = Player_exp + 15;
		Player_money = Player_money + 2;
	}
}

//플레이어 사망 시 실행 
void Dead_Player(){
	
	if(Player_hp<=0){
		Player_heart = Player_heart - 1;
		if(Player_heart>0){
			printf("\n\n\t♬바이러스를 처치하지 못했습니다.\n\t♬3초후 메인 화면으로 이동 합니다..");
			Player_hp_reset();
			Sleep(3000);
			system("cls"); 
			Main_Game();
		}else if(Player_heart<=0){
			printf("GAME OVER : %d", Player_heart); 
			Sleep(3000);  // 진입 성공 
			system("cls");
			Goto_Over_Scene(); // 씬 전환이 안 됨 
		}
	}else if(Player_hp>0){
		Sleep(2000);
		Goto_Field();
	}
}

//몹 공격
void Mob_Attack(){
	Player_hp = Player_hp - Mob_atk;
	Dead_Player();
} 
 
 
//Player 기본 공격 
void Player_Attack(){
	if(Player_heart==0){
		printf("GAMEOVER 라고");
		system("cls");
		Goto_Over_Scene();
	}
	Mob_hp = Mob_hp - Player_atk;
	Dead_Mob();
}

void Player_Use_Skill1(){ //디 페이저
	if(Player_heart==0){
		printf("GAMEOVER 라고");
		system("cls");
		Goto_Over_Scene();
	} 
	int Skill1_atk = Player_atk;
	int Skill1 = 0;
	Skill1 = Skill1_atk + (Skill1_atk/2);
	Mob_hp = Mob_hp - Skill1;
	Skill1_time();
	Dead_Mob();
}
void Player_Use_Skill2(){ //세인트 실
	if(Player_heart==0){
		printf("GAMEOVER 라고");
		system("cls");
		Goto_Over_Scene();
	} 
	int Skill2_hp = Player_hp;
	int Skill2 = 0;
	Skill2 = Player_hp * Player_Level;
	Player_hp = Player_hp + Skill2;
	Skill2_time();
	Dead_Mob();
}
void Player_Use_Skill3(){ //라스트 커맨드
	if(Player_heart==0){
		printf("GAMEOVER 라고");
		system("cls");
		Goto_Over_Scene();
	} 
	Player_atk = Player_atk * 5;
	Player_hp = Player_hp + 50;
	Skill3_time();
	Dead_Mob();
}

void Skill1_time(){ // 스킬 쿨타임 전용 함수 
	Skill1_cooldown = Skill1_cooldown - 1;
	if(Skill1_cooldown<0){
		Skill1_cooldown = 2;
	}
} 
void Skill2_time(){ // 스킬 쿨타임 전용 함수 
	Skill2_cooldown = Skill2_cooldown - 1;
	if(Skill2_cooldown<0){
		Skill2_cooldown = 3;
	}
} 
void Skill3_time(){ // 스킬 쿨타임 전용 함수 
	Skill3_cooldown = Skill3_cooldown - 1;
	if(Skill3_cooldown<0){
		Skill3_cooldown = 7;
	}
} 

void Skill_all_time(){
	Skill1_time();
	Skill2_time();
	Skill3_time();
}

// 몹 처치 or Player가 처치 당할 때 Player의 hp reset 시스템 + 스킬 쿨타임도 reset 
void Player_hp_reset(){
	if(Player_Level==1){
			Player_hp = 10;
			Skill1_cooldown = 2;
			Skill2_cooldown = 3;
			Skill3_cooldown = 7;
		}else if(Player_Level==2){
			Player_hp = 18;
			Skill1_cooldown = 2;
			Skill2_cooldown = 3;
			Skill3_cooldown = 7;
		}else if(Player_Level==3){
			Player_hp = 25;
			Skill1_cooldown = 2;
			Skill2_cooldown = 3;
			Skill3_cooldown = 7;
		}else if(Player_Level==4){
			Player_hp = 32;
			Skill1_cooldown = 2;
			Skill2_cooldown = 3;
			Skill3_cooldown = 7;
		}else if(Player_Level==5){
			Player_hp = 40;
			Skill1_cooldown = 2;
			Skill2_cooldown = 3;
			Skill3_cooldown = 7;
		}
} 
 





