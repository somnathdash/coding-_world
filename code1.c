#include<stdio.h>
int main(){
	unsigned long t,R,C,X,i,j,k,m,flag=1,diff;
	unsigned long A[1000][1000],B[1000][1000];
	scanf("%lu",&t);
	for(m=0;m<t;m++){
	    flag=1;
		scanf("%lu %lu %lu",&R,&C,&X);
		for(i=0;i<R;i++){
			for(j=0;j<C;j++){
				scanf("%lu",&A[i][j]);
			}
		}
		
		}
		for(i=0;i<C;i++){
			for(j=0;j<R-X+1;j++){
				if(A[j][i]!=B[j][i]){
					diff=B[j][i]-A[j][i];
					for(k=j;k<j+X;k++){
						A[k][i]+=diff;
					}
				}
			}
		}
		for(i=0;i<R;i++){
			for(j=0;j<C-X+1;j++){
				if(A[i][j]!=B[i][j]){
					diff=B[i][j]-A[i][j];
					for(k=j;k<j+X;k++){
						A[i][k]+=diff;
					}
				}
			}
		}
		for(i=0;i<R;i++){
			for(j=0;j<C;j++){
				if(A[i][j]!=B[i][j]){
					flag=0;
					break;
				}
			}
			if(flag==0){
				break;
			}
		}
		if(flag==1){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}	
	return 0;
}
