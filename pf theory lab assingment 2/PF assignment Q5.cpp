#include <stdio.h>
void input(int values[],int *count){
	printf("input the amount of elements required in a histogram\n");
	scanf("%d", &*count);
	for(int j =0; j < *count;j++)
	{
		
		printf("input the value\n");
		scanf("%d" ,&values[j]);
		
	}
	
}
void horz_histogram(int values[], int count){
	printf("Horizontal Histogram\n");
	for(int i = 0; i< count; i++){
		for(int j=1;j <= values[i];j++){
			printf("*");
	
	}
	printf("\n");
}
}
void vert_histogram(int values[],int count){
	int highest_value = 0;
	for(int i = 0;i < count;i++){
		if(highest_value < values[i]){
			highest_value = values[i];
		}
	}
	printf("\nVertical Histogram:\n");
    for (int j = highest_value; j > 0; j--) {
        for (int i = 0; i < count; i++) {
            if (values[i] >= j) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    for(int i =0;i< count;i++){
    	printf("%d ",values[i]);
	}
}

int main(){
	int values[100];
	int count;
	input(values,&count);
	horz_histogram(values, count);
	vert_histogram(values, count);
	return 0;
	
}