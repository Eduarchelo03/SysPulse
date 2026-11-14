#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/utsname.h>

int main (void) {

    char hostname[256];
    struct utsname sysinfo;

    if (gethostname(hostname, sizeof(hostname)) != 0) {
        perror("gethostname");
        return 1;
    }

    if (uname(&sysinfo) != 0) {
        perror("uname");
        return 1;
    }

    printf("Syspulse\n\n");

    printf("System\n");
    printf("  Hostname: %s\n", hostname);
    printf("  OS: %s\n", sysinfo.sysname);
    printf("  Release: %s\n", sysinfo.release);

    return 0;
}
