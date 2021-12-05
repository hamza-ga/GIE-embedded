/*
 * GIE_program.c
 *
 *  Created on: Sep 2, 2021
 *      Author: hp
 */
#include"GIE_config.h"
#include"GIE_private.h"


void GIE_EnableGlobalInterrupt(void)
{

	SET_BIT(SREG , 7) ;

}


void GIE_DisableGlobalInterrupt(void)
{

	CLR_BIT(SREG , 7) ;

}
