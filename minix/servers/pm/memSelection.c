#include "pm.h"
#include <minix/callnr.h>
#include <minix/com.h>
#include <signal.h>
#include "mproc.h"
#include "memSelectionHeader.c"

int do_selectmempolicy(void){
    //CUSTOM_MEM_POLICY = 0;
    //printf("value of m_in.m1_i1 is %d\n", m_in.m1_i1);
    CUSTOM_MEM_POLICY = m_in.m1_i1;
    printf("CUSTOM_MEM_POLICY is set to: %d\n", CUSTOM_MEM_POLICY);
    return(OK);
}
