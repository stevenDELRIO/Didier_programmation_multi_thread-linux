#include <stdio.h>                                         
#include <stdlib.h>                                        
#include <pthread.h>
#include <iostream>
#include <unistd.h>

using namespace std;

void* tache1(void*);
void* tache2(void*);

int main()
{
    pthread_t thread1, thread2;
    cout << "debut de la fonction main" << endl;
    pthread_create(&thread1, NULL, tache1, NULL);
    pthread_create(&thread2, NULL, tache2, NULL);
    pthread_join( thread1, NULL);
    pthread_join( thread2, NULL);

    cout << "fin de la fonction main" << endl;
}

void* tache1(void*)
{
    cout << "debut de la tache 1" << endl;
    sleep(5);
    cout << "fin de la tache 1" << endl;
}

void* tache2(void*)
{
    cout << "debut de la tache 2" << endl;
    sleep(5);
    cout << "fin de la tache 2" << endl;
}

