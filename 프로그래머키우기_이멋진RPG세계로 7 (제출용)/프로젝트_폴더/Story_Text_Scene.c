//스토리 단계별로 진행함
//스토리에서 전투가 필요한 씬은 'Field'으로 씬 전환 됨. 
#include <stdio.h>
#include <windows.h> 
#include <string.h>
extern char *Story_Level[3];
extern void Load_Story_title();
extern void Load_Scenario(); 
extern int chapter, episode;
void Goto_Story(){
    int i; //for문 용;
	int Player_Input; 
    //프로그램 기본 설정 
    system("title 프로그래머 키우기 : 이 멋진 RPG 세계로");
    system("echo off");
    system("mode con cols=68 lines=45"); 
    system("color 7");
	Load_Story_title();
    printf("┌──────────────────────── 『제 %d장 : %d화』────────────────────────┐\n", chapter, episode);
    for(i=1;i<=3;i++){ //  
        printf("│\t\t\t\t\t\t\t\t  │\n"); 
    }
    printf("│\t\t\t제목 : 던바튼 마을로\t\t\t  │\n");
    printf("│\t\t\t\t\t\t\t\t  │\n"); 
    printf("┘\t\t\t\t\t\t\t\t  └\n"); 
    //스토리 불러오기 
	Load_Scenario(); 
    printf("┐\t\t\t\t\t\t\t\t  ┌\n"); 
    for(i=1;i<=19;i++){
        printf("│\t\t\t\t\t\t\t\t  │\n"); 
    }
    printf("└─────────────────────────────────────────────────────────────────┘\n");
	system("color e");
}

