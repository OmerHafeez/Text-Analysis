#include <iostream>
using namespace std;
void countWordsByLength(const char *text, int *counts, int length);
int main() {
	int p=500;
    char text[p];
	cout<<"Enter the string"<<endl;
	cin.getline(text,p);
	
	char* string=text;
	
	int length;
	int i=0;
	while(text[i] != '\0')
    {
        length++;
        i++;
    }
    
	int counts[length] = {0};
    countWordsByLength(string, counts, length);

    for (int i = 0; i < length; i++) {
        if (counts[i] > 0) {
           cout <<(i + 1) << "  letter words in the given array are: " << counts[i] << endl;
        }
    }

    return 0;
}







void countWordsByLength(const char *string, int *counts, int length) {
    int check = 0;

    for (int i = 0; i < length; i++) {
        char c = string[i];

        if (c == ' ' || c == '\n'|| c == '\0') {
            if (check > 0 && check <= length) {
                counts[check - 1]++;
            }
            check = 0;
        } else {
            check++;
        }
    }
}
