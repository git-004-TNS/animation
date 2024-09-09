#include <stdio.h>
#include <stdlib.h>
#include <windows.h> //for the sleep function

#define TIME_BETWEEN_ALTERNATE_IMAGES 1000
int main()
{
    printf("Hello world!\n");


    system("mspaint.exe image1.png");
   // Sleep(TIME_BETWEEN_ALTERNATE_IMAGES);

    system("exit");

   // system("mspaint.exe image2.png");
   // Sleep(TIME_BETWEEN_ALTERNATE_IMAGES);

    //system("mspaint.exe image3.png");
    //Sleep(TIME_BETWEEN_ALTERNATE_IMAGES);




    return 0;
}
