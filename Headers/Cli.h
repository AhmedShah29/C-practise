#ifndef CLI_H
#define CLI_H

#include <stdio.h>
#include <string.h>

// os check
#ifdef _WIN32
    #include <windows.h>
    #define sleep_ms(ms) Sleep(ms)
#else
    #include <unistd.h>
    #define sleep_ms(ms) usleep((ms) * 1000) // تحويل الميللي ثانية إلى ميكروثانية
#endif

// colors
#define red(fmt, ...) printf("\x1b[31m" fmt "\x1b[0m", ##__VA_ARGS__)
#define green(fmt, ...) printf("\x1b[32m" fmt "\x1b[0m", ##__VA_ARGS__)
#define yellow(fmt, ...) printf("\x1b[33m" fmt "\x1b[0m", ##__VA_ARGS__)
#define blue(fmt, ...) printf("\x1b[34m" fmt "\x1b[0m", ##__VA_ARGS__)
#define cyan(fmt, ...) printf("\x1b[36m" fmt "\x1b[0m", ##__VA_ARGS__)
#define bold(fmt, ...) printf("\x1b[1m" fmt "\x1b[0m", ##__VA_ARGS__)

// Spinner
#define Spinner(msg, count, speed_ms) do { \
    char frames[4] = {'|', '/', '-', '\\'}; \
    for (int i = 0; i < (count); i++) { \
        printf("\r%c %s", (msg), frames[i % 4]); \
        fflush(stdout); \
        sleep_ms(speed_ms); \
    } \
    printf("\r\x1b[K"); \
} while(0)

// creen clear
#define ClearScreen() printf("\x1b[2J\x1b[H")

#define Prompt(msg, buffer, size) do { \
    printf("%s", msg); \
    fgets(buffer, size, stdin); \
    buffer[strcspn(buffer, "\n")] = '\0'; \
} while(0)

#endif

/*
    planned fns to be added
    Confirm(msg)
    ProgressBar()
    GetPass()
    StartSpinner(SpinnerName, msg)
    StopSpinner(SpinnreName)
 */