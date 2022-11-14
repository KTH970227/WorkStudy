#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <errno.h>
#include <string.h>

//2백만개
int number = 2000000;

pthread_mutex_t decay_number_lock = PTHREAD_MUTEX_INITIALIZER;

void error(char *msg){
    fprintf(stderr, "%s: %s\n", msg, strerror(errno));
    exit(EXIT_FAILURE);
}

void *decay_number(void *t){
    //mutex lock
    pthread_mutex_lock(&decay_number_lock);
    for(int i = 0; i < 100000; i++){
        number -= 1;
    }
    
    //mutex unlock
    pthread_mutex_unlock(&decay_number_lock);
    printf("number = %d\n", number);
    
    return NULL;
}


int main(int argc, char *arg[]){
    void *result;
    int ste;
    pthread_t thread[20];
    
    printf("스레드 연산 전 : %d\n", number);
    for(int i = 0; i < (sizeof(thread) / sizeof(thread[0])); i++){
        ste = pthread_create(&thread[i], NULL, decay_number, NULL);
        if(ste == -1){
            error("스레드 생성 실패\n");
        }
    }
    
    for(int i = 0; i < (sizeof(thread) / sizeof(thread[0])); i++){
        ste = pthread_join(thread[i], &result);
        if(ste == -1){
            error("스레드 종료 실패\n");
        }
    }
    
    printf("스레드 연산 실행 후 : %d\n", number);
    
    return 0;
}

//뮤텍스는 여러 스레드의 충돌을 막을 수 있다.
//하지만 데드락(DeadLock)현상이 발생할 수 있는데
//A와 B 스레드가 있다고 가정하자
//이 때 A는 B에게 자원을 받기를 기다리고 B 또한 A에게 자원을 받기를 원하는데
//이때 서로 원하는 걸 얻지 못하고 계속해서 기다리는 상황을 말한다.

//실행 결과
//스레드 연산 전 : 2000000
//number = 1900000
//number = 1800000
//number = 1700000
//number = 1600000
//number = 1500000
//number = 1400000
//number = 1300000
//number = 1200000
//number = 1100000
//number = 1000000
//number = 900000
//number = 800000
//number = 700000
//number = 600000
//number = 500000
//number = 400000
//number = 300000
//number = 200000
//number = 100000
//number = 0
//스레드 연산 실행 후 : 0
