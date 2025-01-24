#include <stdint.h> // C99 standard integers
#include "bsp.h"
#include "qpc.h"

uint32_t stack_blinky1[40];
QXThread blinky1;
void main_blinky1() {
    while (1) {
        uint32_t volatile i;
        for (i = 1500U; i != 0U; --i) { //CPU Calculation load C1 of 1.2 ms
            BSP_ledGreenOn();
            BSP_ledGreenOff();
        }
        QXThread_delay(1U); //T1: period of thread whihc is T1+C1=2ms /* block for 1 tick */
    }
}

uint32_t stack_blinky2[40];
QXThread blinky2;
void main_blinky2() {
    while (1) {
        uint32_t volatile i;
        for (i = 3*1500U; i != 0U; --i) {//CPU Calculation load C1 of 3.6 ms
            BSP_ledBlueOn();
            BSP_ledBlueOff();
        }
        QXThread_delay(50U); //T2:Period of Thread which is T2+C2= 54ms /* block for 50 ticks */
    }
}

uint32_t stack_blinky3[40];
QXThread blinky3;
void main_blinky3() {
    while (1) {
        BSP_ledRedOn();
        QXThread_delay(BSP_TICKS_PER_SEC / 3U);
        BSP_ledRedOff();
        QXThread_delay(BSP_TICKS_PER_SEC * 3U / 5U);
    }
}

//idleThread stack definition
//uint32_t stack_idelThread[40];


int main() {
    BSP_init();   // Initialize the board support package
		QF_init(); //calling priority of PENDSV 
   /* initialize and start blinky1 thread */
    QXThread_ctor(&blinky1, &main_blinky1, 0);
   QXTHREAD_START(&blinky1,
                   5U, /* priority */
                   (void *)0, 0, /* message queue (not used) */
                   stack_blinky1, sizeof(stack_blinky1), /* stack */
                   (void *)0); /* extra parameter (not used) */
    /* Fill-up blinky2 thread using Cortex-M interrupt frame */
    QXThread_start(&blinky2,          // Thread control block for blinky2
									 2U,					//blinky2 priority
                   &main_blinky2,     // Function pointer to blinky2 function
                   stack_blinky2,     // Stack for blinky2
                   sizeof(stack_blinky2));  // Size of the stack for blinky2
	
	    /* start blinky3 thread */
	//Put the QXThread now in dormant state to analyze the working of idle thread
	/*QXThread_start(&blinky3,
                   &main_blinky3,
                   stack_blinky3, sizeof(stack_blinky3));
	*/
    

    /* Start running the threads */
//     while (1) {
//        // Code here will run after both threads are initialized
//    }
	    /* transfer control to the RTOS to run the threads */
    OS_run();

		//return 0;
}
