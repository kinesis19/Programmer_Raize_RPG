#include <stdio.h>
#include <windows.h>
void Goto_Store();
extern char Player_Name[10];
extern int Player_money;
extern int Player_exp;
extern void Main_Game(); 

void Goto_Store(){
	
	int i; //for문 용;
	int Player_Input3;
    //프로그램 기본 설정 
    system("title 프로그래머 키우기 : 이 멋진 RPG 세계로");
    system("echo off");
    system("mode con cols=68 lines=45"); 
    system("color e");
	Load_Story_title();
    printf("┌────────────────────────『맬리스의 상점』────────────────────────┐\n");
    printf("│\t\t\t\t\t\t\t\t  │\n"); 
    //In Top Bar 
    printf("│─────────────────────────────────────────────────────────────────│\n"); 
    for(i=1;i<=2;i++){ //  
        printf("│\t\t\t\t\t\t\t\t  │\n"); 
    }    
    printf("│\t\t◆어서오세요, <%s>님 !!◆\t\t\t  │\n", Player_Name); 
        printf("│\t\t\t\t\t\t\t\t  │\n"); 
    printf("│\t\t◆10코인을 주시면 exp 1개를 올려드릴게요^^7!◆\t  │\n");
        printf("│\t\t\t\t\t\t\t\t  │\n"); 
        printf("│\t\t\t\t\t\t\t\t  │\n");  
    printf("│\t\t◆구매 : 1번 버튼◆\t\t\t          │\n");
        printf("│\t\t\t\t\t\t\t\t  │\n"); 
        printf("│\t\t\t\t\t\t\t\t  │\n");  
    printf("│\t\t◆돌아가기 : 5번 버튼◆\t\t\t          │\n"); 
    

    for(i=1;i<=5;i++){
        printf("│\t\t\t\t\t\t\t\t  │\n"); 
    }  
    
    printf("└─────────────────────────────────────────────────────────────────┘\n");
	printf("입력 : ");
	scanf(" %d", &Player_Input3);
	
	if(Player_Input3==1){
		if(Player_money>=10){
			Player_money = Player_money - 10;
			Player_exp = Player_exp + 1;	
    		printf("\t\t◆구매 완료 했삼 !◆\t\t\t  │\n\n\n"); 
		}else{	
   			printf("\t\t◆프로그래머님.. 코인이 부족 해요 T.T◆\t\t\t  │\n\n\n");
   			Sleep(2500);
			Goto_Store();  
		}
	}else if(Player_Input3==5){
		system("cls");
		Main_Game();
	}

		
}
