#include <stdio.h>
#include <stdlib.h> 
#include <windows.h>			//"cls"
#include <string.h>				//strcmp, strcpy
#include <time.h>				// time_t 

#define Price     0.1			//ÿ��ĵ��� 
#define MAX_STOP  5
#define MAX_PAVE  4    // ���Ⱥ����� = MAX_PAVE - 1  
					   //�����л���һ�����е�Ԫʱ������Ϊ��������Ѿ�����
// ������Ϣ�Ľṹ�� 
typedef struct{
	int TimeIn;					// ����ͣ����ʱ��
	int TimeOut;				// �뿪ͣ����ʱ��
	char ct[50];
	char Lincense[10];			// �ַ����� ���ƺ�
}Car;
// ͣ�ų�����ջ 
typedef struct{
	Car Stop[MAX_STOP];			// ����ͣ�ų�����ջ
	int top;					// ���ջ��λ��
}Stopping;
// �Ⱥ����
typedef struct{
	Car Pave[MAX_PAVE];			// ����ϵĶ��� 
	int count;					// ��Ƕ��еȺ������� 
	int front, rear;			// ��Ƕ�ͷ�Ͷ�β 
}Pavement; 
// ������·��ջ
typedef struct{
	Car Let[MAX_STOP];			// ������·��ջ 
	int top;					// ���ջ��λ�� 
}Buffer;						
// ������·�Ķ���
typedef struct{					
	Car Wait[MAX_PAVE];			// ��ʱ����Ķ���
	int count;					// ��Ƕ��еȺ������� 
	int front, rear;			// ��Ƕ�ͷ�Ͷ�β
}Waiting; 
// ����ÿ��ȫ�ֱ���/�ṹ�� 
Stopping s;
Pavement p;
Buffer   b;
Car      c;
Waiting  w;
char     C[10];

void Car_Come();				// �������뺯�� 
void Car_Leave();				// �����뿪����
void Stop_To_Pave();			// ��ͣ������ʱ����ʻ����
void Stop_To_Buff();			// �г���ʻ��ʱ������ʱʻ�뻺��ջ
void Leave_Pavement();			// �����뿪�����˵��Ҫ��ͣ�����������ڱ���ϣ�
void DisPlay();					// չʾͣ�����ڵĳ���λ��
void DisPlayPave();				// չʾ����ϵĳ���λ��
void Welcome();					// ��ʾ�˵�
void SmallWelcome();
void Car_Leave_menu();
void Search();


