#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<string.h> 
#include<conio.h> 
#include<math.h>
#include<MMSystem.h>//��������ͷ�ļ�
#pragma comment(lib,"winmm.lib")

//�ֻ���������ʱ
void one();
//�ֻ����˵�ѡ��
void mainmenu();
//���
void waiguan();
//��¼
void login();

//�û�����ʱ��
void shijian();
//�˵���ʾʱ��
void menushijian();
//������ʾ
void power();
//�˵�
void menu();
//�û�����
void setmenu();
//�û���������
void setreg();
//������
void tool();
//�绰��
void dianhuabu();
void query();
void showClientMenu();
void add();
void d();
void lookup();
int tmp=1; 
//����
void bohao();
//������
void jisuanqi();
void jia();
void jian();
void cheng();
void chu();
//����
void music();
void face();
void chosemusic();
void chosemusic1();
void chosemenu();

void chosemenu1();//����ѡ��˵�1
void chosemenu2();//2
void chosemenu3();
void chosemenu4();//3

void chosemenu1_1();//��һ��
void chosemenu1_2();
void chosemenu1_3();

void chosemenu1_10();//��һ��
void chosemenu1_20();
void chosemenu1_30();

void downmusic();

//���꺯��
void gotoxy(int x,int y){
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

/*int color(int c){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),c);	
	return 0;
}*/
//���ع��
void HideCursor(){
CONSOLE_CURSOR_INFO cursor_info = {1, 0};
SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}

//�����û���¼
struct Emp{
	char name[20];
	char pwd[10];
};

struct Emp emps[]={
	{"523","123456"},0,0
};

//�ֻ���ϵ��
struct Client{
	int t;
	char name[20];
	char phone[20];
};
struct Client loginedClient;


	void main(){
		system("color FC");
		
		login();
	
	
		
		getch();
	 }

	void mainmenu(){
		
		char key;
		HideCursor();
	    menushijian();
		power();
		while(1){
		gotoxy(1,11);
		printf("7.�˵�                      9.�ػ�");
		key=getch();
		if(key=='7'){
			system("cls");
			menu();
			break;
		}if(key=='9'){
			system("cls");
			printf("�ټ�\n");
			Sleep(500);
			gotoxy(5,8);
		    printf("�ֻ�����3���ػ�");
				Sleep(500);
			system("cls");
			one();
			exit(0);
			break;
		}
	}
	}
	void power(){
		int power=100,cpu=50;
		char t='%';
		power--;cpu++;
		gotoxy(1,2);
		printf("����:%d%c             �ڴ�ʹ��:%d%c ",power,t,cpu,t);
}
 
    
//�˵�
void menu(){
	
	int key;
	system("cls");
	waiguan();
	while(1){
	gotoxy(1,2);
	printf("�� ��:");
	//power();
	gotoxy(12,4);
	printf("1.�绰��");
	gotoxy(12,5);
	printf("2.����");
	gotoxy(12,6);
	printf("3.������");
	gotoxy(12,7);
	printf("4.����ʱ��");
	gotoxy(12,8);
	printf("5.����");
	key=getch();

		if(key=='1'){
		  dianhuabu();
		   break;
		}else if(key=='2'){
		   bohao();
		  break;
		}else if(key=='3'){
		  tool();
		    break;
		}else if(key=='4'){
             shijian();
			break;
		}else if(key=='5'){
			system("cls");
			mainmenu();
			break;
		}
	}
}
//������
	void tool(){
	char key;
	system("cls");
	waiguan();
	while(1){
	gotoxy(1,2);
	printf("������:");
	gotoxy(12,6);
	printf("1.��������");
	gotoxy(12,7);
	printf("2.������");
	gotoxy(12,8);
	printf("3.����");
	key=getch();

	if(key=='1'){
		music();
		break;
	}else if(key=='2'){
		jisuanqi();
		break;
	}else if(key=='3'){
		menu();
		break;
	}	
	}	
}
	//����
/*	void setmenu(){
	char key;
	system("cls");
	waiguan();
	while(1){
	gotoxy(1,2);
	printf("�� ��:");
	gotoxy(12,6);
	printf("1.ʱ����ʾ");
	gotoxy(12,7);
	printf("2.�޸ĵ�¼����");
	gotoxy(12,8);
	printf("3.����");
	key=getch();

	if(key=='1'){
		shijian();
		break;
	}else if(key=='2'){
		
	}else if(key=='3'){
		
		menu();
		break;
	}	
	}	
}*/
//�޸ĵ�¼����
	/*void setmenu(){
		struct Emp set;
		FILE*file;
		printf("\n�������û�����");
		scanf("%s",set.name);
		printf("\n���������룺");
		scanf("%s",set.pwd);*/
	void jia(){
		char key;
double bNumber, Number, Result; 
			system("cls");
			waiguan();
			 gotoxy(1,2);
			printf("������:");
            printf ("        �����뱻����:");
            scanf ("%lf",&bNumber);
            printf ("        ���������:");
            scanf ("%lf",&Number);
            Result = bNumber + Number;
            printf (" �����: %lf\n\n",Result);
			while(1){
				gotoxy(1,11);
		printf("1.����");
	key=getch();
		if(key=='1'){
		tool();
		break;
		}
			}
	}
	void jian(){
		char key;
		double bNumber, Number, Result; 
		system("cls");
						waiguan();
						 gotoxy(1,2);
						printf("������:");
                        printf ("        �����뱻����:");
                        scanf ("%lf",&bNumber);
                        printf ("        ���������:");
                        scanf ("%lf",&Number);
                        Result = bNumber - Number;
                        printf (" �����: %lf\n\n",Result);
						while(1){
				gotoxy(1,11);
		printf("1.����");
	key=getch();
		if(key=='1'){
	tool();
		break;
		}
			}
	}
	void cheng(){
		char key;
		double bNumber, Number, Result; 
		system("cls");
						waiguan();
						 gotoxy(1,2);
						printf("������:");
                        printf ("        �����뱻����:");
                        scanf ("%lf",&bNumber);
                        printf ("        ���������:");
                        scanf ("%lf",&Number);
                        Result = bNumber * Number;
                        printf (" �����: %lf\n\n",Result);
						while(1){
				gotoxy(1,11);
		printf("1.����");
	key=getch();
		if(key=='1'){
		tool();
		break;
		}
			}
	}
	void chu(){
		char key;
		double bNumber, Number, Result; 
			system("cls");
						waiguan();
						 gotoxy(1,2);
						printf("������:");
                        printf ("        �����뱻����:");
                        scanf ("%lf",&bNumber);
                        printf ("        ���������:");
                        scanf ("%lf",&Number);
                        Result = bNumber / Number;
                        printf (" �����: %lf\n\n",Result);
						while(1){
				gotoxy(1,11);
		printf("1.����");
	key=getch();
		if(key=='1'){
		tool();
		break;
		}
			}
	}
void jisuanqi()
{
                       //���Ӽ��˳�����ı���
				char No;                //ѡ��Ķ������ 
				system("cls");
		        waiguan();
				gotoxy(1,2);
		       printf("������:");
				gotoxy(1,4);
                printf ("�� �� �� �� �� �� �� �� �� �� �� �� �� ");
					gotoxy(1,5);
                printf ("��    ��ѡ����Ҫ����ķ���:            ");
					gotoxy(1,6);
                printf ("�� �� �� �� �� �� �� �� �� �� �� �� ��");
					gotoxy(1,7);
                printf ("��	   �ӷ��밴_1              ");
					gotoxy(1,8);
                printf ("��         �����밴_2   		    ");
					gotoxy(1,9);
                printf ("��         �˷��밴_3              ");
					gotoxy(1,10);
                printf ("��         �����밴_4		        ");
					gotoxy(1,11);
                printf ("��           ����_0		        ");
					gotoxy(1,12);
                printf ("�� �� �� �� �� �� �� �� �� �� �� �� �� ");
				 No=getch();
				while(1){
                if (No =='1')
                {
                    	jia();
						break;
						
                }
                else if (No =='2')
                {
                        //        ����
						jian();
						break;
                }
                else if (No =='3')
                {
                        //        �˷�
					cheng();
					break;
                }
                else if (No =='4')
                {
                        //        ����
					chu();
					break;
                }
                
                else if (No =='0')
                {
                        //        �˳�����
                       tool();
					   break;
                }
          
                         
        }
 
}




//���ֺ���

	void music()
{

	char key;
	int a;

	face();
	getch();
	system("cls");
	while(1){
	chosemenu();//ѡ��˵�
	waiguan();
	gotoxy(1,9);
	printf("��ѡ������Ҫ�ķ���:");
	scanf("%d",&a);
	getch();
	system("cls");
	
	
	
	if(a==1)
	{
	chosemusic();//ѡ������
	system("cls");
	}else if(a==2){
	downmusic();
	chosemusic1();
	system("cls");
	}else{
	tool();
	}
	}
	
	key=getch();
 
	
}



void stopmusic1(){
	PlaySound("D://1//1",NULL,SND_FILENAME);
}
void playmusic1()
{
	PlaySound("D://1//1",NULL,SND_FILENAME | SND_ASYNC );
}
void playmusic2()
{
	PlaySound("D://1//2",NULL,SND_FILENAME | SND_ASYNC );
}
void playmusic3()
{
	PlaySound("D://1//3",NULL,SND_FILENAME | SND_ASYNC );
}
void playmusic4()
{
	PlaySound("D://1//4",NULL,SND_FILENAME | SND_ASYNC );
}

void face()
{	
	system("cls");
	waiguan();
	gotoxy(1,2);
	printf("��������:");
	gotoxy(1,4);
	printf("==================================");
	gotoxy(1,5);
	printf("============���ֲ�����============");
	gotoxy(1,6);
	printf("==================================");
		gotoxy(1,7);
	printf("========��Ϊ�Ȱ�����������========");
	gotoxy(1,9);
	printf("====���������ʼ���ǵĻ���ʱ��====");

}

void downmusic()
	{
	system("cls");
	waiguan();
	gotoxy(1,2);
	printf("��������:");
	gotoxy(1,4);
	printf("==================================");
	gotoxy(1,5);
	printf("=======��ѡ����Ҫ���ص�����=======");
		gotoxy(1,6);
	printf("==================================");
		gotoxy(1,7);
	printf("======1.This Will Be the Day======");
		gotoxy(1,8);
	printf("==================================");
	getch();
	Sleep(2000);
		gotoxy(1,9);
	printf("=============���سɹ�=============");
	
		
	

		
}

void chosemenu()
{	
	PlaySound(NULL,NULL,SND_FILENAME);
		gotoxy(1,2);
	printf("��������:");
	gotoxy(1,4);
	printf("==================================");
		gotoxy(1,5);
	printf("============1.��������============");
		gotoxy(1,6);
	printf("============2.��������============");
		gotoxy(1,7);
	printf("============0.�˳�ϵͳ============");
		gotoxy(1,8);
	printf("==================================");
	
	
}

void chosemusic()
{
	char key;
	system("cls");
	waiguan();
	gotoxy(1,2);
	printf("��������:");
	gotoxy(1,4);
	printf("==================================");
    gotoxy(1,5);
	printf("======��ѡ������Ҫ���ŵ�����======");
	gotoxy(1,6);
	printf("==================================");
	gotoxy(1,7);
	printf("============1.﬽�����============");
	gotoxy(1,8);
	printf("============2.����֮��============");
	gotoxy(1,9);
	printf("============3.��һ����============");
	key=getch();
	if(key=='1'){
		playmusic1();
	
		system("cls");
		chosemenu1();
	

	}else if(key=='2'){
		playmusic2();
	
		system("cls");
		chosemenu2();
		
	}else{
		playmusic3();
	
		system("cls");
		chosemenu3();
		
	}
	
}
void chosemusic1()
{
	char key;
	system("cls");
	waiguan();
	gotoxy(1,2);
	printf("��������:");
	gotoxy(1,4);
	printf("==================================");
    gotoxy(1,5);
	printf("======��ѡ������Ҫ���ŵ�����======");
	gotoxy(1,6);
	printf("==================================");
	gotoxy(1,7);
	printf("===========1.﬽�����=============");
	gotoxy(1,8);
	printf("===========2.����֮��=============");
	gotoxy(1,9);
	printf("===========3.��һ����=============");
	gotoxy(1,10);
	printf("======4.This Will Be the Day======");
	key=getch();
	if(key=='1'){
		playmusic1();
		system("cls");
		chosemenu1();
	

	}else if(key=='2'){
		playmusic2();
	
		system("cls");
		chosemenu2();
		
	}else if(key=='3'){
		playmusic3();
	
		system("cls");
		chosemenu3();
	}else{
		playmusic4();
	
		system("cls");
		chosemenu3();
	}
	
}
void chosemenu1()
{

	char key;
	system("cls");
	waiguan();
	gotoxy(1,2);
	printf("��������:");
	gotoxy(1,4);
	printf("=================================");
    gotoxy(1,5);
	printf("===========1.���²���============");
	gotoxy(1,6);
	printf("===========2.��һ��==============");
	gotoxy(1,7);
	printf("===========3.��һ��==============");
	gotoxy(1,8);
	printf("====4.ֹͣ��ǰ���ַ���������=====");
	gotoxy(1,9);
	printf("=================================");
	key=getch();
	while(1){
	if(key=='1'){
	
		PlaySound("D://1//1",NULL,SND_FILENAME | SND_ASYNC | SND_LOOP);
		getch();
		system("cls");
		waiguan();
			gotoxy(1,2);
	printf("��������:");
	gotoxy(1,10);
	printf("==�������ֹͣ��ǰ���ַ���������=");
		getch();
		break;

	}else if(key=='2'){
		chosemenu1_1();
		break;
	}else if(key=='3'){
		chosemenu1_10();
		break;
	}else{
		
		PlaySound(NULL,NULL,SND_FILENAME);
		break;
	}	
	}
	
}


void chosemenu1_1()
{
	playmusic3();
	system("cls");
	waiguan();
		gotoxy(1,2);
	printf("��������:");
	gotoxy(1,6);
	printf("=============3.��һ����==========");
	gotoxy(1,7);
	printf("========�����������������=======");
	getch();
}

void chosemenu1_10()
{
	playmusic2();
	system("cls");
	waiguan();
		gotoxy(1,2);
	printf("��������:");
	printf("=============2.����֮��===========");
gotoxy(1,6);
	printf("========�����������������========");
	gotoxy(1,7);
	getch();
}

void chosemenu2()
{

	char key;
	system("cls");

	waiguan();
	gotoxy(1,2);
	printf("��������:");
	gotoxy(1,4);
	printf("=================================");
    gotoxy(1,5);
	printf("===========1.���²���============");
	gotoxy(1,6);
	printf("===========2.��һ��==============");
	gotoxy(1,7);
	printf("===========3.��һ��==============");
	gotoxy(1,8);
	printf("====4.ֹͣ��ǰ���ַ���������=====");
	gotoxy(1,9);
	printf("=================================");
	key=getch();
	
	if(key=='1'){
		PlaySound("D://1//2",NULL,SND_FILENAME | SND_ASYNC | SND_LOOP);
		getch();
		system("cls");
		waiguan();
			gotoxy(1,2);
	printf("��������:");
	gotoxy(1,10);
	printf("==�������ֹͣ��ǰ���ַ���������=");
		getch();
	}else if(key=='2'){
		chosemenu1_2();
	}else if(key=='3'){
		chosemenu1_20();
	}else{
		PlaySound(NULL,NULL,SND_FILENAME);
	
}
}

void chosemenu1_2()
{
	playmusic1();
	system("cls");
	waiguan();
		gotoxy(1,2);
	printf("��������:");
	gotoxy(1,6);
	printf("============1.﬽�����===========");
	gotoxy(1,7);
	printf("=======�����������������========");
	getch();
}

void chosemenu1_20()
{
	playmusic3();
	system("cls");
	waiguan();
	gotoxy(1,6);
	printf("============3.��һ����===========");
	gotoxy(1,7);
	printf("=======�����������������========");
	getch();
}
void chosemenu3()
{

	char key;
	system("cls");
	waiguan();
	gotoxy(1,2);
	printf("��������:");
	gotoxy(1,4);
	printf("=================================");
    gotoxy(1,5);
	printf("===========1.���²���============");
	gotoxy(1,6);
	printf("===========2.��һ��==============");
	gotoxy(1,7);
	printf("===========3.��һ��==============");
	gotoxy(1,8);
	printf("====4.ֹͣ��ǰ���ַ���������=====");
	gotoxy(1,9);
	printf("=================================");
	key=getch();
	
	if(key=='1'){
		PlaySound("D://1//3",NULL,SND_FILENAME | SND_ASYNC | SND_LOOP);
		getch();
		system("cls");
		waiguan();
			gotoxy(1,2);
	printf("��������:");
	gotoxy(1,10);
	printf("==�������ֹͣ��ǰ���ַ���������=");
		getch();
	}else if(key=='2'){
		chosemenu1_3();
	}else if(key=='3'){
		chosemenu1_30();
	}else{
		PlaySound(NULL,NULL,SND_FILENAME);
		
}
}

void chosemenu1_3()
{
	playmusic2();
	system("cls");
	waiguan();
		gotoxy(1,2);
	printf("��������:");
	gotoxy(1,6);
	printf("===========2.����֮��============");
	gotoxy(1,7);
	printf("=======�����������������========");
	getch();
}
void chosemenu1_30()
{
	playmusic1();
		system("cls");
	waiguan();
		gotoxy(1,2);
	printf("��������:");
	gotoxy(1,6);
	printf("============1.﬽�����===========");
	gotoxy(1,7);
	printf("========�����������������=======");
	getch();
}
void chosemenu4()
{

	char key;
system("cls");
	waiguan();
	gotoxy(1,2);
	printf("��������:");
	gotoxy(1,4);
	printf("=================================");
    gotoxy(1,5);
	printf("===========1.���²���============");
	gotoxy(1,6);
	printf("===========2.��һ��==============");
	gotoxy(1,7);
	printf("===========3.��һ��==============");
	gotoxy(1,8);
	printf("====4.ֹͣ��ǰ���ַ���������=====");
	gotoxy(1,9);
	printf("=================================");
	key=getch();
	
	if(key=='1'){
		PlaySound("D://1//4",NULL,SND_FILENAME | SND_ASYNC | SND_LOOP);
		getch();
	system("cls");
		waiguan();
			gotoxy(1,2);
	printf("��������:");
	gotoxy(1,10);
	printf("==�������ֹͣ��ǰ���ַ���������=");
		getch();
	}else if(key=='2'){
		chosemenu1_20();
	}else if(key=='3'){
		chosemenu1_30();
	}else{
		PlaySound(NULL,NULL,SND_FILENAME);
	
}
}



	//������ʱ��
	void menushijian(){
		time_t t;
		struct tm * lt;
		time (&t);
		lt = localtime (&t);
		waiguan();
		gotoxy(14,5);
		printf("�� �� ");
		gotoxy(10,7);
		printf("%d / %d / %d ",lt->tm_year+1900, lt->tm_mon+1, lt->tm_mday);
		gotoxy(13,9);
		printf("%d:%d:%d", lt->tm_hour, lt->tm_min, lt->tm_sec);
	}

	void waiguan(){
		int i;
		for(i=0;i<35;i++)
		{
		gotoxy(i,0);
		printf("-");
		gotoxy(i,14);
		printf("-");

		gotoxy(i,1);
		printf("-");
		gotoxy(i,13);
		printf("-");

		gotoxy(i,16);
		printf("-");
		gotoxy(i,18);
		printf("-");
		gotoxy(i,20);
		printf("-");
		gotoxy(i,22);
		printf("-");
		gotoxy(i,24);
		printf("-");
		gotoxy(i,26);
		printf("-");
		}
		for(i=0;i<27;i++)
		{
		gotoxy(0,i);
		printf("|");
		gotoxy(35,i);
		printf("|");

		}
		gotoxy(1,12);
		printf("        ���������ֽ���ѡ��      "); 
		gotoxy(0,15);
		printf("��+��     ===============     ��-��");
		gotoxy(0,17);
		printf("��@��     =  [ enter ]  =     ��&��");
		gotoxy(0,19);
		printf("��1��     |    ��2��    |     ��3��");
		gotoxy(0,21);
		printf("��4��     |    ��5��    |     ��6��");
		gotoxy(0,23);
		printf("��7��     |    ��8��    |     ��9��");
		gotoxy(0,25);  
		printf("��*��     |    ��0��    |     ��#��");
		}

	//��ʾʱ��
	void shijian(){
		char key;
	time_t t;
    struct tm * lt;
    time (&t);
    lt = localtime (&t);
	system("cls");
	    waiguan();
		while(1){
	gotoxy(5,3);
	printf("�ص�   ����       ʱ��");
	gotoxy(5,5);
	printf("Ī˹��%d/%d/%d %d:%d:%d",lt->tm_year+1900, lt->tm_mon+1, lt->tm_mday, lt->tm_hour-5, lt->tm_min, lt->tm_sec);
	gotoxy(5,6);
	printf("ŦԼ  %d/%d/%d  %d:%d:%d",lt->tm_year+1900, lt->tm_mon+1, lt->tm_mday, lt->tm_hour-12, lt->tm_min, lt->tm_sec);
	gotoxy(5,7);
	printf("Ϥ��  %d/%d/%d %d:%d:%d",lt->tm_year+1900, lt->tm_mon+1, lt->tm_mday, lt->tm_hour+2, lt->tm_min, lt->tm_sec);
	gotoxy(5,8);
	printf("����  %d/%d/%d %d:%d:%d",lt->tm_year+1900, lt->tm_mon+1, lt->tm_mday, lt->tm_hour-6, lt->tm_min, lt->tm_sec);
	gotoxy(5,9);
	printf("����  %d/%d/%d %d:%d:%d",lt->tm_year+1900, lt->tm_mon+1, lt->tm_mday, lt->tm_hour+1, lt->tm_min, lt->tm_sec);
	gotoxy(1,11);
		printf("1.����");
	key=getch();
		if(key=='1'){
	menu();
		break;
		}
		}
}

	//��¼����
	void login(){
	char name[20];
	char pwd[10];
	int i,j;
    
	for(j=3;j>0;j--){
		waiguan();
		gotoxy(5,5);
		printf("�������û�����");
		scanf("%s",name);
		gotoxy(5,6);
		printf("���������룺");
		getchar();
	for (i=0;i<20;i++)
	{
	pwd[i]=getch();
	if (pwd[i]=='\r')	
	break;
	 printf("*");
	}
	pwd[i]='\0';
		for(i=0;i<3;i++){
			if(strcmp(emps[i].name,name)==0 && strcmp(emps[i].pwd,pwd)==0){
			break;
			}
		}
		if(i<3){
			gotoxy(5,7);
			printf("��½�ɹ�!");
			Sleep(500);
			gotoxy(5,8);
			printf("�ֻ�����3��󿪻�....");
			Sleep(600);
			system("cls");
			HideCursor();
			one();
			mainmenu();
			break;
		}else if(j>1){
			gotoxy(5,7);
			printf("�û��������������\n");
			gotoxy(5,8);
			printf("������%d�λ���\n",j-1);
			Sleep(300);
			system("cls");
		}else{
			system("cls");
			waiguan();
			gotoxy(5,6);
			printf("�������������");
			Sleep(500);
			gotoxy(5,7);
		    printf("����˼��һ������");
			Sleep(500);
			gotoxy(5,8);
		    printf("�ֻ�����3���ػ�");
				Sleep(500);
			system("cls");
			one();
			system("exit");

	}
	}
	}


	//����
	void bohao()
	{   
	int u;
	char num[20];
		struct Client client;
	system("cls");
	waiguan();
	gotoxy(1,2);
	printf("�� ��:");
	gotoxy(3,5);
	printf("������Է��绰����: ");
		gotoxy(10,8);
	scanf("%s",num);
	if (strcmp(client.phone,num)==0)
		u=1;
	if (strcmp("15080696429",num)==0)
		u=2;
	switch (u)
	{
	case 1: 
		system("cls");
		system("ping 192.168.19.22 ");printf("\nͨ������");
		break;
	case 2: 
		system("cls");
		system("ping 192.168.19.21 ");printf("\nͨ������");
		break;
	default : printf("�������\n");
	}
	printf("\n\t�밴������������˵�");
		getchar();
		getchar();
		menu();
	}

	//����ʱ
	void one(){
	gotoxy(24,8);
	printf("��");
	gotoxy(26,8);
	printf("��");
	gotoxy(28,8);
	printf("��");
	gotoxy(30,8);
	printf("��");
	gotoxy(32,8);
	printf("��");
	gotoxy(32,9);
	printf("��");
	gotoxy(32,10);
	printf("��");
	gotoxy(32,11);
	printf("��");
	gotoxy(32,12);
	printf("��");
	gotoxy(24,12);
	printf("��");
	gotoxy(26,12);
	printf("��");
	gotoxy(28,12);
	printf("��");
	gotoxy(30,12);
	printf("��");
	gotoxy(32,13);
	printf("��");
	gotoxy(32,14);
	printf("��");
	gotoxy(32,15);
	printf("��");
	gotoxy(32,16);
	printf("��");
	gotoxy(24,16);
	printf("��");
	gotoxy(26,16);
	printf("��");
	gotoxy(28,16);
	printf("��");
	gotoxy(30,16);
	printf("��");
	Sleep(1000);
	system("cls");
	gotoxy(24,8);
	printf("��");
	gotoxy(26,8);
	printf("��");
	gotoxy(28,8);
	printf("��");
	gotoxy(30,8);
	printf("��");
	gotoxy(32,8);
	printf("��");
	gotoxy(32,9);
	printf("��");
	gotoxy(32,10);
	printf("��");
	gotoxy(32,11);
	printf("��");
	gotoxy(32,12);
	printf("��");
	gotoxy(30,12);
	printf("��");
	gotoxy(28,12);
	printf("��");
	gotoxy(26,12);
	printf("��");
	gotoxy(24,12);
	printf("��");
	gotoxy(24,13);
	printf("��");
	gotoxy(24,14);
	printf("��");
	gotoxy(24,15);
	printf("��");
	gotoxy(24,16);
	printf("��");
	gotoxy(26,16);
	printf("��");
	gotoxy(28,16);
	printf("��");
	gotoxy(30,16);
	printf("��");
	gotoxy(32,16);
	printf("��");
	Sleep(1000);
	system("cls");
	gotoxy(28,8);
	printf("��");
	gotoxy(26,9);
	printf("��");
	gotoxy(28,9);
	printf("��");
	gotoxy(28,10);
	printf("��");
	gotoxy(28,11);
	printf("��");
	gotoxy(28,12);
	printf("��");
	gotoxy(28,13);
	printf("��");
	gotoxy(28,14);
	printf("��");
	gotoxy(28,15);
	printf("��");
	gotoxy(24,16);
	printf("��");
	gotoxy(26,16);
	printf("��");
	gotoxy(28,16);
	printf("��");
	gotoxy(30,16);
	printf("��");
	gotoxy(32,16);
	printf("��");
	Sleep(1000);
	system("cls");

	} 





	void dianhuabu(){
	char key;
		system("cls");
		waiguan();
		while(1){
			gotoxy(1,2);
	printf("�绰��:");
		gotoxy(12,4);
		printf("1.��ʾ��ϵ��");
			gotoxy(12,5);
		printf("2.�����ϵ��\n");
			gotoxy(12,6);
		printf("3.ɾ����ϵ��\n");
			gotoxy(12,7);
		printf("4.������ϵ��\n");
			gotoxy(12,8);
		printf("5.����\n");
		key=getch();
		if(key=='1'){
			system("cls");
		    waiguan();
			query();
			break;
		}else if(key=='2'){
			add();
			break;
		}else if(key=='3'){
			d();
			break;
		}else if(key=='4'){
			lookup();
			break;
		}else if(key=='5'){
			menu();
			break;
		}
		getch();	
			}
	}
void query(){
	
    int i=4;
	char key;
	struct Client client;

	FILE*file;
	file=fopen("bank.dat","r");
	gotoxy(1,2);
	printf("��ʾ��ϵ��:");
	if(file==NULL){
		gotoxy(12,6);
		printf("û����ϵ��");
			fclose(file);
		while(1){
				gotoxy(1,11);
		printf("1.����");
		key=getch();
		if(key=='1'){
		dianhuabu();
		break;
		}
			}
	
		
		return;
	}
	
	gotoxy(8,3);
	printf("�û���      ��ϵ�绰"); 
	while(fread(&client,sizeof(client),1,file)==1){
		if(client.t==1){
			gotoxy(8,i++);
		printf("%s         %s",client.name,client.phone);
		}
	}
	fclose(file);
		while(1){
				gotoxy(1,11);
		printf("1.����");
	key=getch();
		if(key=='1'){
		dianhuabu();
		break;
		}
			}
	}
void add(){
	
	long len;
	char key;
	char name[20];
	char phone[20];
	struct Client client;
	FILE*file;
system("cls");
	waiguan();
		gotoxy(1,2);
	printf("�����ϵ��:");
	gotoxy(10,6);
	printf("����������:");
	scanf("%s",name);
	gotoxy(10,7);
	printf("���������:");
	scanf("%s",phone);
	file=fopen("bank.dat","r+");
	while(fread(&client,sizeof(client),1,file)==1){
		if(client.t==1&&strcmp(client.name,name)==0){
			gotoxy(7,8);
			    printf("���д���ϵ��,�Ƿ��޸�?");
			 	gotoxy(7,10);
			    printf("  1.��           2.��   ");
			    key=getch();
			    if(key=='1'){
				    strcpy(client.name,name);
				    strcpy(client.phone,phone);
					len=sizeof(client);
					len*=-1;
					fseek(file,len,1);
					fwrite(&client,sizeof(client),1,file);
					fclose(file);
					gotoxy(9,11);
					printf("�޸ĳɹ���");
						while(1){
				gotoxy(1,11);
		printf("1.����");
	key=getch();
		if(key=='1'){
		dianhuabu();
		break;
		}
			}
					return;
		    	}
		    	else if(key=='2'){
		    		fseek(file,0L,2);
		    		break;
				}
			}
		}
					client.t=1; 
					strcpy(client.name,name);
				    strcpy(client.phone,phone);
		            fwrite(&client,sizeof(client),1,file);
	   			 	fclose(file);
					gotoxy(10,8);
					printf("��Ϣ����ɹ���"); 
					while(1){
				gotoxy(1,11);
		printf("1.����");
	key=getch();
		if(key=='1'){
		dianhuabu();
		break;
		}
			}
}



void d(){
	char key;
	char name[20];
	struct Client client;
	long len=sizeof(client);
	FILE*file;
	system("cls");
	waiguan();
		gotoxy(1,2);
	printf("ɾ����ϵ��:");
	gotoxy(3,5);
	printf("������Ҫɾ���˵�����:");
	scanf("%s",name);
	file=fopen("bank.dat","r+");
	while(fread(&client,sizeof(client),1,file)==1){
		if(client.t==1&&strcmp(client.name,name)==0){
			gotoxy(10,8);
			printf("ɾ���ɹ���");
			client.t=0;
			len*=-1;
			fseek(file,len,1);
			fwrite(&client,sizeof(client),1,file);
			fclose(file);
			while(1){
				gotoxy(1,11);
		printf("1.����");
	key=getch();
		if(key=='1'){
		dianhuabu();
		break;
		}
			}
			return;
		}
	
	}
		gotoxy(10,8);
	printf("û�д���ϵ�ˣ�");
	while(1){
		gotoxy(1,11);
		printf("1.����");
	key=getch();
		if(key=='1'){
		dianhuabu();
		break;
		}
	}
	fclose(file);
}

void lookup(){
	char key;
	char name[20]; 
	struct Client client;
	FILE*file;
	system("cls");
	waiguan();
		gotoxy(3,5);
	printf("������Ҫ���ҵ���ϵ��:");
	scanf("%s",name);
	file=fopen("bank.dat","r");
	while(fread(&client,sizeof(client),1,file)==1){
		if(client.t==1&&strcmp(client.name,name)==0){
			gotoxy(3,8);
			printf("%-12s%-15s\n",client.name,client.phone);
			fclose(file);
			while(1){
				gotoxy(1,11);
		printf("1.����");
	key=getch();
		if(key=='1'){
		dianhuabu();
		break;
		}
			}
			return;}}
		gotoxy(10,8);
		printf("û�д���ϵ�ˣ�"); 
		fclose(file);
			while(1){
				gotoxy(1,11);
		printf("1.����");
	key=getch();
		if(key=='1'){
		dianhuabu();
		break;
		}
			}
		
}

