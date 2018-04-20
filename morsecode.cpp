#include<iostream>
#include<conio.h>
#include<windows.h>
#include<string.h>
using namespace std;

int main()
{
	
	char alfas[]={'~','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\\','/','[',']','<','>','(',')',
					'{','}','.',',','_','|','?','!',';',':','-','$','%','"','@','\'','`','^','&','+','=','0','1','2','3','4','5','6','7','8','9','\0'};
	
	char alfac[]={'~','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\0'};
	
	char *morse[]={"---.--",".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",
					".--","-..-","-.--","--..","----..","....--",".--...","-..---","--..--","..--..","---...","...---","..--.","--..-",".-----","-.....","----.-","....-.",
					"-.----",".-....","-....-",".----.",".---.","..----","...-.-","...--.","---..-","..-...","--.---","-...--",".---..","-...-","---.-",
					"-----",".----","..---","...--","....-",".....","-....","--...","---..","----.",'\0'};
	char str[50];
	char str1[20];
	char sound[50][10];	
	int choice;
	int r=0;
	cout<<"\nWelcome to morse code program..!!";
	cout<<"\nPress 1 for conversion of alphabet to morse code.\nPress 2 for morse code to alphabet.\n";
	cin>>choice;
	if(choice==1)
	{
		cin>>str;
	
			for(int i=0; str[i]!='\0'; i++)
		{
			for(int j=0; alfas[j]!='\0',alfac[j]!='\0'; j++)
			{
				if(str[i]==alfas[j] || str[i]==alfac[j])
				{
					
					cout<<morse[j]<<"  ";
					strcpy(sound[r],morse[j]);
					r++;
				}
			}
		}
		
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<4;j++)
			{
				if(sound[i][j]=='.')
				Beep(700,200);
				else if(sound[i][j]=='-')
				Beep(700,600);
			}
		}
	}	
	
	
	
		else
		{
			
			cin>>str1;
		
			for(int j=0; morse[j]!='\0';j++)
			{
			
			
				if(strcmp(str1,morse[j])==0)
				{
					if(alfac[j]!='\0')
					{
						cout<<alfas[j]<<" or "<<alfac[j]<<"\n";
						
					
					
						break;
					}
					else
					{
						cout<<alfas[j];
						break;
					}
				
				}
			
			
	
			}
		}
	
	cout<<endl;
	
	return 0;
	
}

	
