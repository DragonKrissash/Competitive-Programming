#include <stdio.h>
#include <string.h>

length(char word[],int ind){
	if(word[ind]=='\0')
	return 0;
	else return 1+length(word,ind+1);
}

void main(){
	char word[100];
	printf("Enter a word: \n");
	gets(word);
	printf("The length of the word is: %d",length(word,0));
}