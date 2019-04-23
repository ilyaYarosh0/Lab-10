#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a,b,d,i;
	float M[20][20];
	float c , x[10] , sum;
	printf("\n eeEnter chislo");
	scanf("%d", &a);
	printf("\n Enter arguments");
	for(i=1;i<=a;i++){
		for(b=1;b<=(a+1); b++){
		printf("M[%d][%d]:",i,b);
		scanf("%f",&M[i][b]);
		}
}
	for(b=1;b<=a; b++){
		for(i=1;i<=a;i++){
	if(i>b){
	c=M[i][b]/M[b][b];
for(d=1;d<=a+1;d++){

M[i][d]=M[i][d]-c*M[b][d];
}
}
}
	
}
x[a]=M[a][a+1]/M[a][a];
for(i=a-1;i>=1;i--){
	sum=0;
for(b=i+1;b<=a;b++){
	sum=sum+M[i][b]*x[b];
}
x[i]=(M[i][a+1]-sum)/M[i][i];
}
printf("\n Result");
for(i=1;i<=a;i++){
printf("\n x%d=%f\t",i,x[i]);
}
return 0;
}
