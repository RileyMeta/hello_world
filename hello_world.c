// Riley's Hello
// (Yes it's a feature to allow "flags" like "--test" to become the greeting)
#include <stdio.h>
#include <string.h>

#define BUFFER 1024;

void help_menu();
void info_menu();

int main(int argc, char *argv[]) {
    const char *str = "";
    char buffer[1024] = "";

    if (argc >= 2) {
        for (int i = 1; i < argc; ++i) {
            if (strcmp(argv[i], "--help") == 0) {
                help_menu();
                return 0;
            } else if (strcmp(argv[i], "--version") == 0 || strcmp(argv[i], "-V") == 0) {
                info_menu();
                return 0;
            } else if (strcmp(argv[i], "-t") == 0 || strcmp(argv[i], "--traditional") == 0) {
                str = "hello, world";
            } else {
                size_t remaining = sizeof(buffer) - strlen(buffer) - 1;
                strncat(buffer, argv[i], remaining);
                remaining = sizeof(buffer) - strlen(buffer) - 1;
                if (remaining > 0) {
                    strncat(buffer, " ", remaining);
                }
                str = buffer;
            }
        }
    } else {
        str = "Hello, World!";
    }

    printf("%s\n", str);

    return 0;
}

void help_menu(void) {
    printf("Usage: hello [OPTION]...\n");
    printf("Print a friendly, customizable greeting.\n");
    printf("\n");
    printf("  -t, --traditional\tuse traditional greeting\n");
    printf("  -g, --greeting=TEXT\tuse TEXT as the greeting message\n");
    printf("\n      --help\t\tdisplay this help and exit\n");
    printf("  -V, --version\t\toutput version information and exit\n");
    printf("\nReport bugs to: <https://github.com/RileyMeta/hello_world/issues>\n");
    printf("Riley's hello home page: <https://github.com/RileyMeta/hello_world>\n");
}

void info_menu(void) {
    printf("hello v0.2\n");
    printf("Copyright (C) 2025 Riley Ava\n");
    printf("License MPLv2: Mozilla Public License 2.0 <https://www.mozilla.org/en-US/MPL/2.0/>\n");
    printf("This is free software: you are free to change and redistribute it.\n");
    printf("There is NO warranty, to the extent permitted by law.\n");
    printf("\nWritten by Riley Ava.\n");
}
