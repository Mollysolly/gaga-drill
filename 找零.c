#include <stdio.h>

int main()
{
	
	int price=100;
	int amount=0;
	
	printf("请输入您的金额(元)：");
	scanf("%d",&price);
	scanf("%d",&amount);
	
	int change=price-amount;
	printf("找您%d元",change);
	
	
	return 0;
}