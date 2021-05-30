//in this program we will make a custom strcat func which add desired number of strng to concatinate with another

#include <iostream>
#include <cstring>
using namespace std;

void mystrcat(char *s1, char *s2, int len = -1);

int main()
{
    char a[50] = "abcde", b[50] = "1234567890"; //initializing string

    mystrcat(a, b, 5);
    cout << a << endl;

    strcpy(a, "abcde");//resetting string a
    mystrcat(a, b);
    cout << a << endl;

    return 0;
}

void mystrcat(char *s1, char *s2, int len) //modified strcat
{
    while (*s1)
        s1++;             //finding the end of s1 while moving to the next address
    if (len == -1)        //if the len is not entered and left empty
        len = strlen(s2); //then the len will become the strlen of s2 with the null value

    //to exclude the null value we are setting char with len
    //the loop will run till the last char and till the last len when len reaches null it will break so the new concatinated s1 string will need to be null terminated manually
    while (*s2 && len)
    {
        *s1 = *s2; //copying char at the end of s1
        s1++;      //moving to next address
        s2++;      //moving to next address
        len--;     //decreasing len as we copy
    }
    *s1 = '\0'; //null terminating the new concatinated string
};
