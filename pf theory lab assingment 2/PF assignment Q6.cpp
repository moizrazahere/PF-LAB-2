#include <stdio.h>
int Amoves(int n){
	if (n % 5 != 0)
	{
		n = n% 5;
		return n;
	}
	else{
		return -1;
	}
}
int main()
{
int n;	
printf("how many matchsticks are on the table?\n");
scanf("%d",&n);
printf("the number of matchsticks A needs to pick is:%d ", Amoves(n));

}