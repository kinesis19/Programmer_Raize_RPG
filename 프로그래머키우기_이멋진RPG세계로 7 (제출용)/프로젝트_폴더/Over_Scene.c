#include <stdio.h>
#include <windows.h>
void Goto_Over_Scene();

void Goto_Over_Scene(){
	
	int i; //for문 용;
    //프로그램 기본 설정 
    system("title 프로그래머 키우기 : 이 멋진 RPG 세계로");
    system("echo off");
    system("mode con cols=68 lines=45"); 
    system("color e");
	Load_Story_title();
    printf("┌──────────────────────────『GAME OVER』──────────────────────────┐\n");
    printf("│\t\t\t\t\t\t\t\t  │\n"); 
    //In Top Bar 
    printf("│─────────────────────────────────────────────────────────────────│\n"); 
    for(i=1;i<=2;i++){ //  
        printf("│\t\t\t\t\t\t\t\t  │\n"); 
    }    
    printf("│\t\t◆당신은 이 세계를 구하지 못했습니다◆\t\t  │\n");
        printf("│\t\t\t\t\t\t\t\t  │\n"); 
        printf("│\t\t\t\t\t\t\t\t  │\n"); 
    printf("│\t  잘 가요..\t\t\t\t\t\t  │ \n│\t  내 최고의 프로그래머여..\t\t\t\t  │\n"); 

    for(i=1;i<=5;i++){
        printf("│\t\t\t\t\t\t\t\t  │\n"); 
    }  
    
    printf("└─────────────────────────────────────────────────────────────────┘\n");

}
