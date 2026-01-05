#include <stdio.h>
int main() 
{
	int h,m,s,nm,min,hour,minute;
	scanf("%d:%d:%d",&h,&m,&s);
	
	if((h>=0&&h<=23)&&(m>=0&&m<=59)&&(s>=0&&s<=59)) {
		printf("hour:%d \nminute:%d \nsecond:%d \n",h,m,s) ;
	}
	
	printf("Next minute:");
	scanf("%d",&nm);
	min=m+nm;
	
	if(h==23&&nm>=0&&nm<=120){
		if(min>=60&&min<120){
			hour=1;
			minute=min-60 ;
			printf("hour:%d \nminute:%d \nsecond:%d \n",hour,minute,s);
		}
	}
	
	
	
	if(nm>=0&&nm<=120&&h!=23) {
		if(min>=60&&min<120){
			hour=h+1 ;
			minute=min-60 ;
			printf("hour:%d \nminute:%d \nsecond:%d \n",hour,minute,s);
			
		}else if(min==120){
			hour=h+2;
			minute=0;
			printf("hour:%d \nminute:%d \nsecond:%d \n",hour,minute,s);
		}
	
	}
	
	
	return 0;
	
}
