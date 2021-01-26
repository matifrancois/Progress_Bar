/*******************************************************************************
  @file     main.c
  @brief    main file to test the loading bar
  @author   M. Francois
 ******************************************************************************/

 /*******************************************************************************
 *							INCLUDE HEADER FILES
 ******************************************************************************/

#include "loading.h"
/* windows.h is just to use the sleep function to wait 
   some time between the change in the loading bar */
#include <Windows.h>

 /*******************************************************************************
 *                       LOCAL FUNCTION DEFINITIONS
 ******************************************************************************/

// Test code 
int main(void)
{
    /* Function Call, here you must input the 
       percentaje to show in the loading bar */
    loadingBar(10);
    Sleep(500);
    loadingBar(27);
    Sleep(500);
    loadingBar(50);
    Sleep(500);
    loadingBar(70);
    Sleep(500);
    loadingBar(90);
    Sleep(500);
    loadingBar(100);
    return 0;
}