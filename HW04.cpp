#include <stdio.h> 

int main(void)
{ 
for(int s=0; 
printf("��J�ഫ�����:") && 
scanf("%d", &s) && 
s > 0; 
printf("%d �p�� %d ���� %d ��\n", 
s/(60*60), (s%(60*60))/60, s%60)); 
return 0; 
} 
