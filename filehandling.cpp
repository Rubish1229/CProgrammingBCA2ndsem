////wap to read the contents from the files named as data.txt ana display it into console.
//#include<stdio.h>
//int main()
//{
//	FILE *fp;
//	char ch;
//	 fp= fopen("D:\\CFILEHANDLING\\data.txt","r");
//	 //filepointer =fopen() ==> two paramter(path,mode)
//	 
//	 
////if(fp == NULL)
////{
////	printf("Error: Could not open file.\n");
////	return 1;
////}
//
//while((ch=fgetc(fp)) != EOF)
//{
//	putchar(ch);
//}
//fclose(fp);
//
//return 0;
//}






#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    // Attempt to open the file in read mode
    fp = fopen("D:\\CFILEHANDLING\\file1.txt", "r");
    
    // Check if the file was opened successfully
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1; // Return a non-zero value to indicate failure
    }

    // Read each character from the file until EOF
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch); // Display the character to the console
    }

    // Close the file
    fclose(fp);

    return 0; // Return 0 to indicate success
}


