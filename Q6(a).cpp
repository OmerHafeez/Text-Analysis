#include<iostream>
using namespace std;
void countLetters(string& string, int *array, int & size);
int main ()
{
	string str;
	int array[26];
	int length = 0;
  cout << "Enter a line of text: ";
  getline(cin, str);
 

  for (int i = 0; str[i] != '\0'; i++)
  {
    length++;
  }
  cout<<length;
 
  countLetters(str,array,length);
  
}


void countLetters(string& str, int *array, int & size)
{
	

	for(int i=0;i<26;i++) 
	{
    array[i] =0;
    }
     for (int i=0;i<size;i++) 
	{
    char c=str[i];
    if (c>='a' && c <= 'z') 
	{
      array[c-'a']++;
    }
	 else if (c>='A' &&c<='Z') 
	{
      array[c-'A']++;
    }
    }
    
	for (int i=0;i<26;i++)
	 {
    char letter = i + 'a';
    cout << letter << ": " << array[i] <<endl;
	}
}