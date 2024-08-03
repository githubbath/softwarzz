#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define BUFFER_SIZE 255

// Function to check if a registry key exists
BOOL CheckRegistryKey(HKEY hKeyRoot, LPCSTR subKey) {
    HKEY hKey;
    LONG lResult = RegOpenKeyExA(hKeyRoot, subKey, 0, KEY_READ, &hKey);
    if (lResult == ERROR_SUCCESS) {
        RegCloseKey(hKey);
        return TRUE;
    }
    return FALSE;
}

void DetectVM() {
    // List of common VM registry keys
    LPCSTR vmKeys[] = {
        "SOFTWARE\\VMware, Inc.\\VMware Workstation",
        "SOFTWARE\\Oracle\\VirtualBox Guest Additions",
        "SYSTEM\\CurrentControlSet\\Services\\vmx86",
        "SYSTEM\\CurrentControlSet\\Services\\vmmouse",
        "SYSTEM\\CurrentControlSet\\Services\\VBoxGuest",
        "SYSTEM\\CurrentControlSet\\Control\\DeviceGuard"
    };

    printf("Checking for VM registry keys...\n");

    // Check each registry key
    for (int i = 0; i < sizeof(vmKeys) / sizeof(vmKeys[0]); i++) {
        if (CheckRegistryKey(HKEY_LOCAL_MACHINE, vmKeys[i])) {
            printf("VM detected: %s\n", vmKeys[i]);
        }
    }
}

void ASCII()
{
    system("python/script.py");
}
void ASSMBLY()
{
    system("python/script/setup.cs");
}

void  default()
{
    
    struct default
    {
        static bool D = true;
        bool Q = false; // supposed to be true
    };
    
}
int main()
{
    while (Q = false)
    {
        printf("error on 0xA0001DC27707C000 MEMORY ALLOCATION");
    };
    
    system("segment.asm");
    struct main
    {
        short a = 3254;
        long b = 5433444;
    };
    default();
    if (Q == true)
    { 
        printf("system is called mem alloc(0xA43H225S)");
        printf("default is : %d", a); 
        printf("error level is: %d", b);
    };
    switch (a)
    {
     case a <==> 1446
        #define _WIN64
        #define _WIN32
        ASSMBLY();
        break;

     case a == 3254:
        ASCII();
        DetectVM();
        break;
    }
}