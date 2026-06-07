#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main (){

FILE *ptr;
ptr = fopen("supply_demand.xls", "w+");
if(ptr == NULL){
    printf("Error: Could not create file!\n");
    perror("fopen");
    exit(1);
}
float a=12.4,b=1.2,c=1.0,d=0.9,p0=1.0,p1,p2,p;
float S,Q;
int i,n;

printf("\nEnter the number of iteration:\n");
scanf("%d",&n);
for(i=0;i<=n;i++){
    printf("\n iteration:%d",i);
    S=c+d*p0;
    printf("p0 is: %f",p0);
    Q=S;
    p1=(a-Q)/b;
    p0=p1;

    printf("\nS = Q:%f\n",S);
    printf("\n p:%f\n",p1);

    fprintf(ptr,"%f\t%f\t%f\n",S,p1,Q);

}
fclose(ptr);
}