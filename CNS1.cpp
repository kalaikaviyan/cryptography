#include<stdio.h>
#include<string.h>
int main(){
	char alp[53]="abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
	char p[100];
	int key;
	printf("Enter the plain text:");
	scanf("%s",&p);
	printf("Enter the key value: ");
	scanf("%d",&key);
	key=key%26;
	printf("Cypher text is: ");
	for(int i=0;i<strlen(p);i++){
		for(int j=0;j<26;j++){
			if(p[i]==alp[j]){
				printf("%c",alp[j+key]);
				break;
			}
		}
	}
	
}