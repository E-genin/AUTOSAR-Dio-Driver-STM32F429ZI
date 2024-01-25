#ifndef APPLICATION_H
#define APPLICATION_H


//#include "Bsp.h"
#include "Dio.h"
#include <stdlib.h>


extern const Dio_ConfigType GlobalDioConfiguration;

void Port_init(void); 
Dio_LevelType Random_level_Generator(void); 
void Use_Case_1(void); 



#define RCC_REG_ADDRESS		0x40023800

#define PORT_GPIOB_ADDRESS 	0x40020400
#define PORT_GPIOC_ADDRESS 	0x40020800

#define GPIO_MODER_OFFSET	0x00000000
#define RCC_AHB1ENR_OFFSET	0x00000030

#define IOCR_OFFSET			0x14
#define WAIT_TIME			500

#endif /*APPLICATION_H*/
