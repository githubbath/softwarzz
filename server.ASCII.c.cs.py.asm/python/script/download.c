#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>

void startup()
{
    system("cmd/cli.c");
}
int main()
{
    MessageBox(NULL, "server downloaded", "DOWNLOADED!", MB_OK | MB_INFORMATIONICON);
    int i = 0;
    while (i <= 10)
    {
        if (i == 5)
        {
            MessageBox(NULL, "if any errors server chrashes", "server", MB_OK | MB_INFORMATIONICON );
        }
        
    }
    MessageBox(NULL, "command line interface will be actvated", "server", MB_OK | MB_INFORMATIONICON );
    startup();
    return 0;
}