#include <stdio.h>
#include <windows.h>
#include <string.h>
extern char *Story_Level[3];
int chapter = 0, episode = 0; 
//몹 스탯 불러오기 
extern int Mob_choose;
extern int Mob_Level;
extern char *Mob_Name1;
extern char *Mob_Name2;
extern char *Mob_Name3;
extern char *Mob_Name4;
extern char *Mob_Name5;
extern char *Mob_Name6;
extern char *Mob_Name7;
extern char *Mob_Name8;
extern char *Mob_Name9;
extern char *Mob_Name10;
extern char *Mob_Name11;
extern char *Mob_Name12;
extern int Mob_hp;
extern int Mob_atk;
extern int Mob_def;
//Player 스탯 불러오기 
extern int Player_Level;
extern char Player_Name[10];
extern int Player_hp;
extern int Player_atk;
extern int Player_def;
void Load_Story_title(){ // 스토리 불러오기 
	if(strcmp(*Story_Level,"1-1")==0){
    	chapter = 1; 
		episode = 1;
	}else if(strcmp(*Story_Level,"1-2")==0){
    	chapter = 1; 
		episode = 2;
	}else if(strcmp(*Story_Level,"1-3")==0){
    	chapter = 1; 
		episode = 3;
	}else if(strcmp(*Story_Level,"1-4")==0){
    	chapter = 1; 
		episode = 4;
	}else if(strcmp(*Story_Level,"1-5")==0){
    	chapter = 1; 
		episode = 5;
	}else if(strcmp(*Story_Level,"2-1")==0){
    	chapter = 2; 
		episode = 1;
	}else if(strcmp(*Story_Level,"2-2")==0){
    	chapter = 2; 
		episode = 2;
	}else if(strcmp(*Story_Level,"2-3")==0){
    	chapter = 2; 
		episode = 3;
	}else if(strcmp(*Story_Level,"2-4")==0){
    	chapter = 2; 
		episode = 4;
	}else if(strcmp(*Story_Level,"2-5")==0){
    	chapter = 2; 
		episode = 5;
	}else if(strcmp(*Story_Level,"3-1")==0){
    	chapter = 3; 
		episode = 1;
	}else if(strcmp(*Story_Level,"3-2")==0){
    	chapter = 3; 
		episode = 2;
	}else if(strcmp(*Story_Level,"3-3")==0){
    	chapter = 3; 
		episode = 3;
	}else if(strcmp(*Story_Level,"3-4")==0){
    	chapter = 3; 
		episode = 4;
	}else if(strcmp(*Story_Level,"3-5")==0){
    	chapter = 3; 
		episode = 5;
	}else if(strcmp(*Story_Level,"4-1")==0){
    	chapter = 4; 
		episode = 1;
	}else if(strcmp(*Story_Level,"4-2")==0){
    	chapter = 4; 
		episode = 2;
	}else if(strcmp(*Story_Level,"4-3")==0){
    	chapter = 4; 
		episode = 3;
	}else if(strcmp(*Story_Level,"4-4")==0){
    	chapter = 4; 
		episode = 4;
	}else if(strcmp(*Story_Level,"4-5")==0){
    	chapter = 4; 
		episode = 5;
	}
}
void Load_Mob_Ui(){
	printf("│\t\t\t\t\t\t Lv.%d \t\t  │\n", Mob_Level);
	if(Mob_choose==1){
    	printf("│\t\t\t\t\t       <%s>\t\t  │\n", Mob_Name1); 
	}else if(Mob_choose==2){
    	printf("│\t\t\t\t\t       <%s>\t\t  │\n", Mob_Name2); 
	}else if(Mob_choose==3){
    	printf("│\t\t\t\t\t        <%s>\t\t  │\n", Mob_Name3); 
	}else if(Mob_choose==4){
    	printf("│\t\t\t\t\t       <%s>\t\t  │\n", Mob_Name4); 
	}else if(Mob_choose==5){
    	printf("│\t\t\t\t\t       <%s>\t\t  │\n", Mob_Name5); 
	}else if(Mob_choose==6){
    	printf("│\t\t\t\t\t        <%s>\t\t  │\n", Mob_Name6); 
	}else if(Mob_choose==7){
    	printf("│\t\t\t\t\t       <%s>\t\t  │\n", Mob_Name7); 
	}else if(Mob_choose==8){
    	printf("│\t\t\t\t\t         <%s>\t\t  │\n", Mob_Name8); 
	}else if(Mob_choose==9){
    	printf("│\t\t\t\t\t        <%s>\t\t  │\n", Mob_Name9); 
	}else if(Mob_choose==10){
    	printf("│\t\t\t\t\t       <%s>\t\t  │\n", Mob_Name10); 
	}else if(Mob_choose==11){
    	printf("│\t\t\t\t\t       <%s>\t\t  │\n", Mob_Name11); 
	}else if(Mob_choose==12){
    	printf("│\t\t\t\t\t       <%s>\t\t  │\n", Mob_Name12); 
	}
    printf("│\t\t\t\t\t\t\t\t  │\n"); 
    printf("│\t\t\t\t\t       hp : %d\t\t  │\n", Mob_hp);  
    printf("│\t\t\t\t\t\t\t\t  │\n"); 
    printf("│\t\t\t\t\t   공격력 : %d\t\t  │\n", Mob_atk);  
    printf("│\t\t\t\t\t\t\t\t  │\n"); 
    printf("│\t\t\t\t\t   방어력 : %d\t\t  │\n", Mob_def); 
}
void Load_Player_Ui(){
	printf("│\t\tLv.%d \t\t\t\t\t          │\n", Player_Level);
	if(strlen(Player_Name)==2){
    	printf("│\t\t<%s>\t\t\t\t\t\t  │\n", Player_Name); 
	}else if(strlen(Player_Name)==4){
    	printf("│\t       <%s>\t\t\t\t\t\t  │\n", Player_Name); 
	}else if(strlen(Player_Name)==6){
		printf("│\t      <%s>\t\t\t\t\t\t  │\n", Player_Name);
	}else if(strlen(Player_Name)==8){
		printf("│\t     <%s>\t\t\t\t\t\t  │\n", Player_Name);
	}else if(strlen(Player_Name)==10){
    	printf("│\t    <%s>\t\t\t\t\t  │\n", Player_Name); 
		
	}
    printf("│\t\t\t\t\t\t\t\t  │\n"); 
    printf("│\t      hp : %d\t\t\t\t\t\t  │\n", Player_hp);  
    printf("│\t\t\t\t\t\t\t\t  │\n"); 
    printf("│\t  공격력 : %d\t\t\t\t\t\t  │\n", Player_atk);  
    printf("│\t\t\t\t\t\t\t\t  │\n"); 
    printf("│\t  방어력 : %d\t\t\t\t\t\t  │\n", Player_def);  
}
