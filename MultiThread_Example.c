#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <pthread.h>

//2백만개
int number = 2000000;

void error(char *msg) {
    fprintf(stderr, "%s: %s", msg, strerror(errno));
    exit(1);
}

void *decay_number(void *t){
    for(int i = 0; i < 100000; i++) {
        number -= 1;
    }
    return NULL;
}

int main(int argc, char *argv[]) {
    void *result;
    int ste;
    pthread_t thread[20];
    
    printf("스레드 연산 실행 전 : %d\n", number);
    
    for(int i = 0; i < (sizeof(thread)/sizeof(thread[0])); i++){
        ste = pthread_create(&thread[i], NULL, decay_number, NULL);
        if(ste == -1){
            error("스레드 생성 실패");
        }
    }
    
    for(int i = 0; i < (sizeof(thread)/sizeof(thread[0])); i++){
        ste = pthread_join(thread[i], &result);
        if(ste == -1){
            error("스레드 종료 실패");
        }
    }
                        
    printf("스레드 연산 실행 후 : %d\n", number);
}
//실행 결관
//스레드 연산 실행 전 : 2000000
//스레드 연산 실행 후 : 1490914 (매번 다름)

//모든 스레드가 동일한 변수에 한꺼번에 접근하기에 충돌로 인한 결과
//즉, 결과예측이 어려움.
