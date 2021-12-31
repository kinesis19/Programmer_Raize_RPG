#include <stdio.h>
extern void Story_Tutorial();
extern void Story_Tutorial_1();
void Start_Game(){
    int i;
	char Player_Input; 
    //프로그램 기본 설정 
    system("title 프로그래머 키우기 : 이 멋진 RPG 세계로");
    system("echo off");
    system("mode con cols=68 lines=45"); 
    system("color 7");
    printf("┌──────────── 『프로그래머 키우기 : 이 멋진 RPG 세계로』──────────┐");
    for(i=1;i<=3;i++){ //  
        printf("\n");
        printf("│\t\t\t\t\t\t\t\t  │\n"); 
    }
    printf("\t\t\t 개발자 : Kinesis\n\n\n");
    printf("\t\t\t 게임 버전 : v1.0.1-release1\n");
    for(i=1;i<=10;i++){
        printf("\n");
        printf("│\t\t\t\t\t\t\t\t  │\n"); 
    }
    printf("└─────────────────────────────────────────────────────────────────┘\n");
	system("color e");
	printf("\t      게임을 시작하시려면 's'키를 입력해 주세요.\n\n");
	printf("\t     스토리를 스킵하시려면 'p'키를 입력해 주세요.\n");
	printf("입력 : "); 
	scanf("%c", &Player_Input);
	if(Player_Input=='s'){
		system("cls");
		Story_Tutorial(); //튜토리얼 스토리로 이동 . 나중에 주석 취소 요망 
	}else if(Player_Input='p'){
		system("cls");
		Story_Tutorial_1();
	}else{
		system("exit");
	}
}

