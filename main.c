#include "park.c"

int main(){
	s.top = -1;
	b.top = 0;
	p.rear = 0;
	p.count = 0;
	p.front = 0;
	w.count = 0;
	w.front = 0;
	w.rear = 0;
	while(1){
		system("cls");						// ���� 
		Welcome();							// ������ʾ���� 
		int i, cho;
		scanf("%d", &i);
		if(1 == i)  DisPlay();
		if(2 == i)  DisPlayPave();
		if(3 == i)  Car_Come();
		if(4 == i)  Car_Leave_menu();			//������ȥ��ͣ�����ںͱ���� 
		if(5 == i)  Search();
		if(6 == i)  {
						printf("\n��ӭ���ٴ�ʹ�ñ�ϵͳ\n\n");
						break;
					} 
		printf("\n����������0\n");
		begin:								// goto ��־λ 
			scanf("%d", &cho);
		if(0 == cho){
			continue;
		}
		else{
			printf("����������������������\n");
			goto begin;						// goto ��ָ����־λ begin
		}
	}
	return 0;
}







