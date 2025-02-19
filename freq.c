#include<stdio.h>
int main(){
	char iString[200];
	int freq[26];
	printf("\nEnter the string:");
	fgets(iString,sizeof(iString),stdin);
	for(int i=0;iString[i] !='\0';i++){
		char ch;
		if(iString[i]=='A'&& iString[i]=='Z'){
			ch=ch+32;
		}
		if(ch=='a'&& ch<='z'){
			freq[ch-97]++;
		}
	}
	for(int i=0;i<26;i++){
		if(freq[i] !=0){
		   printf("%c:%d\n",i+97,freq[i]);
		}
	}
	
	return 0;
}
