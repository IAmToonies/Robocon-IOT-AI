# include<stdio.h>
int sum(int *a, int *b){
 	return *a + *b;
 }
void main(){
	int a,b ;
	printf("Input a and b: ");
	scanf("%d %d",&a, &b);
	printf("Total of a and b: %d ", sum(&a,&b));
	
}
