#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cctype>
#include <cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	FILE *fp = fopen("sample.txt","r");
	char a;
	int lines=1,words=0,spl=0,space=0;
	while(!feof(fp)){
		fscanf(fp,"%c",&a);
		//cout<<a;
		if(ispunct(a))
			spl++;

		if(a=='\n'){
			lines++;
		}
		if (isspace(a))
			space++;

	}
	rewind(fp);
	char s[100];
	int i=1;
	FILE *fp1=fopen("op.txt","w");
	while(!feof(fp)){
		fscanf(fp,"%s",s);
		int l=strlen(s);
		//printf("helloo\n" );
		if(i==1){
			for(int k=0;k<l;k++){
				fputc(tolower(s[k]),fp1);
			}
			i=0;
		}else{
			for(int k=0;k<l;k++){
				fputc(toupper(s[k]),fp1);
			}
			i=1;
		}
		char x;
		fscanf(fp,"%c",&x);
		//cout<<x;
		if(!isalnum(x))
			fputc(x,fp1);		
		// i++;
	}
	// cout<<ispunct(EOF);
	cout<<"Line: "<<lines<<"\nSpace: "<<space<<"\npunctuation: "<<spl;
	return 0;
}