/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Mostafa Besar
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#include <stdint.h>

//some macros
#define BYTE_ADDRESS 			0x20000200U
#define ALIAS_BASE_ADDRESS		0x22000000U
#define BIT_BAND_BASE_ADDRESS	0x20000000U
#define BIT_POSITION			7
int main(void)
{
	//we want to access 7th bit in address

	uint8_t *ptr = (uint8_t*)BIT_ADDRESS;
	*ptr = 0xff;

	//normal methed
	//clearing 7th bit of address 0x20000200
	*ptr &= ~(1<<7);

	//reset to 0xff
	*ptr = 0xff;

	//bit-band method
	uint8_t* alias_addr = (uint8_t*)ALIAS_BASE_ADDRESS + (32 * (BYTE_ADDRESS - BIT_BAND_BASE_ADDRESS)) + BIT_POSITION * 4;

	//de-refrencing the alias address
	//clearing 7th bit of address 0x20000200
	*alias_addr = 0;
	for(;;);
}
