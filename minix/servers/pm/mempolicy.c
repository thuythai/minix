#include "pm.h"
#include <minix/callnr.h>
#include <minix/com.h>
#include <signal.h>
#include "mproc.h"
#include "memheader.c"

int do_cyclemempolicy(void){
    //CUSTOM_MEM_POLICY = 0;
    CUSTOM_MEM_POLICY = m_in.m1_i1;
    printf("CUSTOM_MEM_POLICY is set to: %d\n", CUSTOM_MEM_POLICY);
    return(OK);
}
