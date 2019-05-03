#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int sd=0;
    printf("請輸入您要的秒數：");
    scanf("%d",&sd);
    printf("轉換的時間為=%02d時:%02d分:%02d秒\n",sd/3600%60,sd/60%60,sd%60);
 	system("pause");  
 	return 0;
}
