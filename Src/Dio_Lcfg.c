#include "Dio.h"





const Dio_ConfigType GlobalDioConfiguration =
{
	/*Channels*/
	{ LED1, LED2} ,

	{ PORT_GPIOB } ,

	{
		{
			0x4080, // 111 for pins 7, 6, 5 and 0 0000 for pins 4, 3, 2, 1 and 0 => 0xE0
			7,    // 5 bits before we reach pin 5 (Led)
			PORT_GPIOB
		}
	}

};
