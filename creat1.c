#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

static void *func(void *p){
    puts("Thread is working!");
    pthread_exit(NULL);
}

int main(){
    pthread_t tid;
    int err;

    puts("Begin");

    err = pthread_create(&tid,NULL,func,NULL);
    if(err){
        fprintf(stderr,"%s",strerror(err));
        exit(1);
    }
    pthread_join(tid,NULL);
    puts("End");

    exit(0);
    
}