#include <stdio.h>
#include <windows.h>
#include <string.h>
extern char *Story_Level[3];
extern char Player_Name[10];
extern void Main_Game();

void Load_Scenario(){ // 시나리오 불러오기 
    //프로그램 기본 설정
    system("color 7");
	if(strcmp(*Story_Level,"1-1")==0){
		Sleep(1500); 
		printf("『 윽..여긴 어디지?』\n\n");
		Sleep(3000); 
		printf("[깨어나셨군요! 최고의 프로그래머이시여] \n\n");
		Sleep(1500); 
		printf("[푸른 머리카락에 아름다운 눈동자!] \n\n");
		Sleep(1500); 
		printf("『내 이름은 %s! 그쪽 이름은?』\n\n", Player_Name);
		Sleep(2500); 
		printf("[제 이름은 \'아라일라\', 루비님을 모시고 있습니다.] \n\n");
		Sleep(1500); 
		printf("『아라일라, 이 세계에 대한 정보를 알려줘.』\n\n");
		Sleep(2000); 
		printf("[네, 알겠어요.] \n\n");
		system("cls"); //시나리오 길이 정리
		printf("[이곳, \'엘리아스\'는 평화롭고 인류 문명이 발전된 세계 입니다.] \n\n");
		Sleep(2000);  
		printf("[학생들은 아카데미에서 프로그래밍과 컴퓨팅 사고력을 키우는 방법을 배우곤 합니다.] \n\n");
		Sleep(2000);   
		printf("[어느날, 아카데미 연구실에서 개발 중인 인공지능, \'벨로투\'가 폭주하여 세계를 위험에 빠트렸습니다.] \n\n");
		Sleep(2000);   
		printf("[그로 인해 이 세계에 알려져선 안 될 벨로투의 바이러스 프로그램들이 이 세계를 정복하고 있습니다.] \n\n");
		Sleep(2000);   
		printf("[%s께서는 벨로투의 바이러스 프로그램들을 모두 제거하시고, 이 사단의 원흉인 \'벨로투\'를 이 세계에서 제거해 주셔야 합니다.] \n\n", Player_Name);
		Sleep(4000);   
		printf("[마침 저기 바이러스가 보이네요! 잡아보러 갈까요?] \n\n");
		Sleep(3000);   
		printf("★메인 화면으로 돌아갑니다..★ \n\n");
		Sleep(3000);
		system("cls");
		Main_Game();
		//필드로 이동 	
	}else if(strcmp(*Story_Level,"1-2")==0){
	}else if(strcmp(*Story_Level,"1-3")==0){
	}else if(strcmp(*Story_Level,"1-4")==0){
	}else if(strcmp(*Story_Level,"1-5")==0){
	}else if(strcmp(*Story_Level,"2-1")==0){
	}else if(strcmp(*Story_Level,"2-2")==0){
	}else if(strcmp(*Story_Level,"2-3")==0){
	}else if(strcmp(*Story_Level,"2-4")==0){
	}else if(strcmp(*Story_Level,"2-5")==0){
	}else if(strcmp(*Story_Level,"3-1")==0){
	}else if(strcmp(*Story_Level,"3-2")==0){
	}else if(strcmp(*Story_Level,"3-3")==0){
	}else if(strcmp(*Story_Level,"3-4")==0){
	}else if(strcmp(*Story_Level,"3-5")==0){
	}else if(strcmp(*Story_Level,"4-1")==0){
	}else if(strcmp(*Story_Level,"4-2")==0){
	}else if(strcmp(*Story_Level,"4-3")==0){
	}else if(strcmp(*Story_Level,"4-4")==0){
	}else if(strcmp(*Story_Level,"4-5")==0){
	}
}
