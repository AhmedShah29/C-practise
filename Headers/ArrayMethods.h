#ifndef ARRAY_METHODS
#define ARRAY_METHODS
#include <stddef.h>
#include <stdbool.h>

#define ArrayLength(arr) (sizeof(arr) / sizeof(arr[0]))

#define ArrayForEtch(arr, fn) ({\
    size_t len = ArrayLength(arr); \
    for(size_t i = 0; i < len; i++){ \
    fn(arr[i]); \
    } \
})

#define ArrayHas(arr, value) ({ \
    bool found = false; \
    size_t len = ArrayLength(arr); \
    for(size_t i = 0; i < len; i++) { \
        if(arr[i] == value) { \
            found = true; \
            break; \
        } \
    } \
    found; \
})

#define IndexOf(arr, value) ({ \
    int index = -1; \
    size_t len = ArrayLength(arr); \
    for(size_t i = 0; i < len; i++){ \
        if(arr[i] == value) { \
            index = (int)i; \
            break; \
        } \
    } \
    index; \
}) 

#endif

/*
    planned fns list:
    Sort()
    Filter()
 */