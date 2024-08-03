#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <dirent.h>

// Function prototypes
void handle_command(const char *cmd);
void cmd_delete(const char *filename);
void cmd_mkdir(const char *dirname);
void cmd_removedir(const char *dirname);
void cmd_printf(const char *message);
void cmd_nano(const char *filename);
void cmd_server();

int main() {
    char input[256];

    printf("Simple CLI. Type 'exit' to quit.\n");

    while (1) {
        printf("> ");
        if (fgets(input, sizeof(input), stdin) == NULL) {
            perror("fgets");
            exit(EXIT_FAILURE);
        }

        // Remove trailing newline
        size_t len = strlen(input);
        if (len > 0 && input[len - 1] == '\n') {
            input[len - 1] = '\0';
        }

        // Exit the CLI
        if (strcmp(input, "exit") == 0) {
            break;
        }

        handle_command(input);
    }

    return 0;
}

void handle_command(const char *cmd) {
    char command[256];
    char argument[256];

    if (sscanf(cmd, "delete %s", argument) == 1) {
        cmd_delete(argument);
    } else if (sscanf(cmd, "mkdir %s", argument) == 1) {
        cmd_mkdir(argument);
    } else if (sscanf(cmd, "removedir %s", argument) == 1) {
        cmd_removedir(argument);
    } else if (sscanf(cmd, "printf %255[^\n]", argument) == 1) {
        cmd_printf(argument);
    } else if (sscanf(cmd, "nano %s", argument) == 1) {
        cmd_nano(argument);
    } else if (sscanf(cmd, "server %s", argument) == 1) {
        cmd_server();
    } else {
        printf("Unknown command: %s\n", cmd);
    }
}

void cmd_delete(const char *filename) {
    if (remove(filename) == 0) {
        printf("Deleted file: %s\n", filename);
    } else {
        perror("Error deleting file");
    }
}
void cmd_server() {
    MessageBox(NULL, "test" "test" | MB_OK | MB_ICON);
}

void cmd_mkdir(const char *dirname) {
    if (mkdir(dirname, 0755) == 0) {
        printf("Created directory: %s\n", dirname);
    } else {
        perror("Error creating directory");
    }
}

void cmd_removedir(const char *dirname) {
    if (rmdir(dirname) == 0) {
        printf("Removed directory: %s\n", dirname);
    } else {
        perror("Error removing directory");
    }
}

void cmd_printf(const char *message) {
    printf("%s\n", message);
}

void cmd_nano(const char *filename) {
    // Call nano editor; ensure that 'nano' is installed and in the system's PATH
    printf("Opening %s in nano...\n", filename);
    int ret = system("/usr/bin/nano "); // Use the correct path to 'nano' on your system
    if (ret != 0) {
        perror("Error opening nano");
    }
}