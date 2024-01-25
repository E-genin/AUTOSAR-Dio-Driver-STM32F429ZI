


#include "Application.h"


void Port_init(void)
{
	uint32 value_to_write = 0x00000006;

	(*((volatile uint32 *)(RCC_REG_ADDRESS+RCC_AHB1ENR_OFFSET))) |= value_to_write;



	value_to_write = 0x55555555;

	(*((volatile uint32 *)(PORT_GPIOB_ADDRESS+GPIO_MODER_OFFSET))) |= value_to_write; 
}


Dio_LevelType Random_level_Generator(void)
{
	Dio_LevelType Random_Level; 

	uint32 s = rand();

	Random_Level = (Dio_LevelType) (s%2); 

	return Random_Level; 
}

void Use_Case_1(void)
{

	Port_init(); 

	while(1)
	{

		Dio_LevelType PushButtonValue; 

		PushButtonValue = Dio_ReadChannel(PUSH_BUTTON); 

		if (STD_HIGH==PushButtonValue)
		{
			Dio_LevelType level_to_write = Random_level_Generator(); 

			Dio_WriteChannel(LED1, level_to_write); 

			if(STD_LOW==level_to_write) level_to_write = STD_HIGH; else level_to_write = STD_LOW; 

			Dio_WriteChannel(LED2, level_to_write); 
		}

		else 
		{

		}

		Dio_PortLevelType P00_Value = Dio_ReadPort(PORT_GPIOB);

		Dio_PortLevelType MyChannelGroup = Dio_ReadChannelGroup(LED1_LED2_GROUP);

		//waitTime(IfxStm_getTicksFromMilliseconds(BSP_DEFAULT_TIMER, WAIT_TIME)); // 500 ms
	}
}
