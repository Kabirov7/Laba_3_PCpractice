#include <dlfcn.h>
#include "load.h"
#include "stdio.h"


void LoadRun(const char *const s) {
    void *lib;
    void (*fun)(void);
    lib = dlopen(s, RTLD_LAZY);
    if (!lib) {
        printf("Cannot open library '%s'\n", s);
        return;
    }
    fun = (void (*)(void)) dlsym(lib, "func");
    if (fun == NULL) {
        printf("cannot load function func\n");
    } else {
        fun();
    }
    dlclose(lib); // выгрузка библиотеки

}