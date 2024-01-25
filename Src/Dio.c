#include "Dio.h"




Channel_to_PortandBitPosition_Type LookUpTable[NUMBER_OF_AVAILABLE_DIO_CHANNELS] = 
{
	{ .PortAddress = 0x40020000, .BitPosition = 0 },  // populate with the address of the first port in the STM32F429ZI (GPIOA) and the position of the first bit.
	{ .PortAddress = 0x40020000, .BitPosition = 1 },  // populate with the address of the first port in the STM32F429ZI (GPIOA) and the position of the 2nd bit.
	{ .PortAddress = 0x40020000, .BitPosition = 2 },  // populate with the address of the first port in the STM32F429ZI (GPIOA) and the position of the 3rd bit.
	{ .PortAddress = 0x40020000, .BitPosition = 3 },  // populate with the address of the first port in the STM32F429ZI (GPIOA) and the position of the 4th bit.
	{ .PortAddress = 0x40020000, .BitPosition = 4 },  // populate with the address of the first port in the STM32F429ZI (GPIOA) and the position of the 5th bit.
	{ .PortAddress = 0x40020000, .BitPosition = 5 },  // populate with the address of the first port in the STM32F429ZI (GPIOA) and the position of the 6th bit.
	{ .PortAddress = 0x40020000, .BitPosition = 6 },  // populate with the address of the first port in the STM32F429ZI (GPIOA) and the position of the 7th bit.
	{ .PortAddress = 0x40020000, .BitPosition = 7 },  // populate with the address of the first port in the STM32F429ZI (GPIOA) and the position of the 8th bit.
	{ .PortAddress = 0x40020000, .BitPosition = 8 },  // populate with the address of the first port in the STM32F429ZI (GPIOA) and the position of the 9th bit.
	{ .PortAddress = 0x40020000, .BitPosition = 9 },  // populate with the address of the first port in the STM32F429ZI (GPIOA) and the position of the 10th bit.
	{ .PortAddress = 0x40020000, .BitPosition = 10},  // populate with the address of the first port in the STM32F429ZI (GPIOA) and the position of the 11th bit.
	{ .PortAddress = 0x40020000, .BitPosition = 11},  // populate with the address of the first port in the STM32F429ZI (GPIOA) and the position of the 12th bit.
	{ .PortAddress = 0x40020000, .BitPosition = 12},  // populate with the address of the first port in the STM32F429ZI (GPIOA) and the position of the 13th bit.
	{ .PortAddress = 0x40020000, .BitPosition = 13},  // populate with the address of the first port in the STM32F429ZI (GPIOA) and the position of the 14th bit.
	{ .PortAddress = 0x40020000, .BitPosition = 14},  // populate with the address of the first port in the STM32F429ZI (GPIOA) and the position of the 15th bit.
	{ .PortAddress = 0x40020000, .BitPosition = 15},  // populate with the address of the first port in the STM32F429ZI (GPIOA) and the position of the 16th bit.

	{ .PortAddress = 0x40020400, .BitPosition = 0 },  // populate with the address of the 2nd port in the STM32F429ZI (GPIOB) and the position of the first bit.
	{ .PortAddress = 0x40020400, .BitPosition = 1 },  // populate with the address of the 2nd port in the STM32F429ZI (GPIOB) and the position of the 2nd bit.
	{ .PortAddress = 0x40020400, .BitPosition = 2 },  // populate with the address of the 2nd port in the STM32F429ZI (GPIOB) and the position of the 3rd bit.
	{ .PortAddress = 0x40020400, .BitPosition = 3 },  // populate with the address of the 2nd port in the STM32F429ZI (GPIOB) and the position of the 4th bit.
	{ .PortAddress = 0x40020400, .BitPosition = 4 },  // populate with the address of the 2nd port in the STM32F429ZI (GPIOB) and the position of the 5th bit.
	{ .PortAddress = 0x40020400, .BitPosition = 5 },  // populate with the address of the 2nd port in the STM32F429ZI (GPIOB) and the position of the 6th bit.
	{ .PortAddress = 0x40020400, .BitPosition = 6 },  // populate with the address of the 2nd port in the STM32F429ZI (GPIOB) and the position of the 7th bit.
	{ .PortAddress = 0x40020400, .BitPosition = 7 },  // populate with the address of the 2nd port in the STM32F429ZI (GPIOB) and the position of the 8th bit.
	{ .PortAddress = 0x40020400, .BitPosition = 8 },  // populate with the address of the 2nd port in the STM32F429ZI (GPIOB) and the position of the 9th bit.
	{ .PortAddress = 0x40020400, .BitPosition = 9 },  // populate with the address of the 2nd port in the STM32F429ZI (GPIOB) and the position of the 10th bit.
	{ .PortAddress = 0x40020400, .BitPosition = 10},  // populate with the address of the 2nd port in the STM32F429ZI (GPIOB) and the position of the 11th bit.
	{ .PortAddress = 0x40020400, .BitPosition = 11},  // populate with the address of the 2nd port in the STM32F429ZI (GPIOB) and the position of the 12th bit.
	{ .PortAddress = 0x40020400, .BitPosition = 12},  // populate with the address of the 2nd port in the STM32F429ZI (GPIOB) and the position of the 13th bit.
	{ .PortAddress = 0x40020400, .BitPosition = 13},  // populate with the address of the 2nd port in the STM32F429ZI (GPIOB) and the position of the 14th bit.
	{ .PortAddress = 0x40020400, .BitPosition = 14},  // populate with the address of the 2nd port in the STM32F429ZI (GPIOB) and the position of the 15th bit.
	{ .PortAddress = 0x40020400, .BitPosition = 15},  // populate with the address of the 2nd port in the STM32F429ZI (GPIOB) and the position of the 16th bit.
    
    { .PortAddress = 0x40020800, .BitPosition = 0}, // Port GPIOC
    { .PortAddress = 0x40020800, .BitPosition = 1},
    { .PortAddress = 0x40020800, .BitPosition = 2},
    { .PortAddress = 0x40020800, .BitPosition = 3},
    { .PortAddress = 0x40020800, .BitPosition = 4},
    { .PortAddress = 0x40020800, .BitPosition = 5},
    { .PortAddress = 0x40020800, .BitPosition = 6},
    { .PortAddress = 0x40020800, .BitPosition = 7},
    { .PortAddress = 0x40020800, .BitPosition = 8},
    { .PortAddress = 0x40020800, .BitPosition = 9},
    { .PortAddress = 0x40020800, .BitPosition = 10},
    { .PortAddress = 0x40020800, .BitPosition = 11},
    { .PortAddress = 0x40020800, .BitPosition = 12},
    { .PortAddress = 0x40020800, .BitPosition = 13},
    { .PortAddress = 0x40020800, .BitPosition = 14},
    { .PortAddress = 0x40020800, .BitPosition = 15},

    { .PortAddress = 0x40020C00, .BitPosition = 0}, // Port GPIOD
    { .PortAddress = 0x40020C00, .BitPosition = 1},
    { .PortAddress = 0x40020C00, .BitPosition = 2},
    { .PortAddress = 0x40020C00, .BitPosition = 3},
    { .PortAddress = 0x40020C00, .BitPosition = 4},
    { .PortAddress = 0x40020C00, .BitPosition = 5},
    { .PortAddress = 0x40020C00, .BitPosition = 6},
    { .PortAddress = 0x40020C00, .BitPosition = 7},
    { .PortAddress = 0x40020C00, .BitPosition = 8},
    { .PortAddress = 0x40020C00, .BitPosition = 9},
    { .PortAddress = 0x40020C00, .BitPosition = 10},
    { .PortAddress = 0x40020C00, .BitPosition = 11},
    { .PortAddress = 0x40020C00, .BitPosition = 12},
    { .PortAddress = 0x40020C00, .BitPosition = 13},
    { .PortAddress = 0x40020C00, .BitPosition = 14},
    { .PortAddress = 0x40020C00, .BitPosition = 15},

    { .PortAddress = 0x40021000, .BitPosition = 0}, // Port GPIOE
    { .PortAddress = 0x40021000, .BitPosition = 1},
    { .PortAddress = 0x40021000, .BitPosition = 2},
    { .PortAddress = 0x40021000, .BitPosition = 3},
    { .PortAddress = 0x40021000, .BitPosition = 4},
    { .PortAddress = 0x40021000, .BitPosition = 5},
    { .PortAddress = 0x40021000, .BitPosition = 6},
    { .PortAddress = 0x40021000, .BitPosition = 7},
    { .PortAddress = 0x40021000, .BitPosition = 8},
    { .PortAddress = 0x40021000, .BitPosition = 9},
    { .PortAddress = 0x40021000, .BitPosition = 10},
    { .PortAddress = 0x40021000, .BitPosition = 11},
    { .PortAddress = 0x40021000, .BitPosition = 12},
    { .PortAddress = 0x40021000, .BitPosition = 13},
    { .PortAddress = 0x40021000, .BitPosition = 14},
    { .PortAddress = 0x40021000, .BitPosition = 15},

    { .PortAddress = 0x40021400, .BitPosition = 0}, // Port GPIOF
    { .PortAddress = 0x40021400, .BitPosition = 1},
    { .PortAddress = 0x40021400, .BitPosition = 2},
    { .PortAddress = 0x40021400, .BitPosition = 3},
    { .PortAddress = 0x40021400, .BitPosition = 4},
    { .PortAddress = 0x40021400, .BitPosition = 5},
    { .PortAddress = 0x40021400, .BitPosition = 6},
    { .PortAddress = 0x40021400, .BitPosition = 7},
    { .PortAddress = 0x40021400, .BitPosition = 8},
    { .PortAddress = 0x40021400, .BitPosition = 9},
    { .PortAddress = 0x40021400, .BitPosition = 10},
    { .PortAddress = 0x40021400, .BitPosition = 11},
    { .PortAddress = 0x40021400, .BitPosition = 12},
    { .PortAddress = 0x40021400, .BitPosition = 13},
    { .PortAddress = 0x40021400, .BitPosition = 14},
    { .PortAddress = 0x40021400, .BitPosition = 15},

    { .PortAddress = 0x40021800, .BitPosition = 0}, // Port GPIOG
    { .PortAddress = 0x40021800, .BitPosition = 1},
    { .PortAddress = 0x40021800, .BitPosition = 2},
    { .PortAddress = 0x40021800, .BitPosition = 3},
    { .PortAddress = 0x40021800, .BitPosition = 4},
    { .PortAddress = 0x40021800, .BitPosition = 5},
    { .PortAddress = 0x40021800, .BitPosition = 6},
    { .PortAddress = 0x40021800, .BitPosition = 7},
    { .PortAddress = 0x40021800, .BitPosition = 8},
    { .PortAddress = 0x40021800, .BitPosition = 9},
    { .PortAddress = 0x40021800, .BitPosition = 10},
    { .PortAddress = 0x40021800, .BitPosition = 11},
    { .PortAddress = 0x40021800, .BitPosition = 12},
    { .PortAddress = 0x40021800, .BitPosition = 13},
    { .PortAddress = 0x40021800, .BitPosition = 14},
    { .PortAddress = 0x40021800, .BitPosition = 15},

    { .PortAddress = 0x40021C00, .BitPosition = 0}, // Port GPIOH
    { .PortAddress = 0x40021C00, .BitPosition = 1},
    { .PortAddress = 0x40021C00, .BitPosition = 2},
    { .PortAddress = 0x40021C00, .BitPosition = 3},
    { .PortAddress = 0x40021C00, .BitPosition = 4},
    { .PortAddress = 0x40021C00, .BitPosition = 5},
    { .PortAddress = 0x40021C00, .BitPosition = 6},
    { .PortAddress = 0x40021C00, .BitPosition = 7},
    { .PortAddress = 0x40021C00, .BitPosition = 8},
    { .PortAddress = 0x40021C00, .BitPosition = 9},
    { .PortAddress = 0x40021C00, .BitPosition = 10},
    { .PortAddress = 0x40021C00, .BitPosition = 11},
    { .PortAddress = 0x40021C00, .BitPosition = 12},
    { .PortAddress = 0x40021C00, .BitPosition = 13},
    { .PortAddress = 0x40021C00, .BitPosition = 14},
    { .PortAddress = 0x40021C00, .BitPosition = 15},

    { .PortAddress = 0x40022000, .BitPosition = 0}, // Port GPIOI
    { .PortAddress = 0x40022000, .BitPosition = 1},
    { .PortAddress = 0x40022000, .BitPosition = 2},
    { .PortAddress = 0x40022000, .BitPosition = 3},
    { .PortAddress = 0x40022000, .BitPosition = 4},
    { .PortAddress = 0x40022000, .BitPosition = 5},
    { .PortAddress = 0x40022000, .BitPosition = 6},
    { .PortAddress = 0x40022000, .BitPosition = 7},
    { .PortAddress = 0x40022000, .BitPosition = 8},
    { .PortAddress = 0x40022000, .BitPosition = 9},
    { .PortAddress = 0x40022000, .BitPosition = 10},
    { .PortAddress = 0x40022000, .BitPosition = 11},
    { .PortAddress = 0x40022000, .BitPosition = 12},
    { .PortAddress = 0x40022000, .BitPosition = 13},
    { .PortAddress = 0x40022000, .BitPosition = 14},
    { .PortAddress = 0x40022000, .BitPosition = 15},

    { .PortAddress = 0x40022400, .BitPosition = 0}, // Port GPIOJ
    { .PortAddress = 0x40022400, .BitPosition = 1},
    { .PortAddress = 0x40022400, .BitPosition = 2},
    { .PortAddress = 0x40022400, .BitPosition = 3},
    { .PortAddress = 0x40022400, .BitPosition = 4},
    { .PortAddress = 0x40022400, .BitPosition = 5},
    { .PortAddress = 0x40022400, .BitPosition = 6},
    { .PortAddress = 0x40022400, .BitPosition = 7},
    { .PortAddress = 0x40022400, .BitPosition = 8},
    { .PortAddress = 0x40022400, .BitPosition = 9},
    { .PortAddress = 0x40022400, .BitPosition = 10},
    { .PortAddress = 0x40022400, .BitPosition = 11},
    { .PortAddress = 0x40022400, .BitPosition = 12},
    { .PortAddress = 0x40022400, .BitPosition = 13},
    { .PortAddress = 0x40022400, .BitPosition = 14},
    { .PortAddress = 0x40022400, .BitPosition = 15},

    { .PortAddress = 0x40022800, .BitPosition = 0}, // Port GPIOK
    { .PortAddress = 0x40022800, .BitPosition = 1},
    { .PortAddress = 0x40022800, .BitPosition = 2},
    { .PortAddress = 0x40022800, .BitPosition = 3},
    { .PortAddress = 0x40022800, .BitPosition = 4},
    { .PortAddress = 0x40022800, .BitPosition = 5},
    { .PortAddress = 0x40022800, .BitPosition = 6},
    { .PortAddress = 0x40022800, .BitPosition = 7},
    { .PortAddress = 0x40022800, .BitPosition = 8},
    { .PortAddress = 0x40022800, .BitPosition = 9},
    { .PortAddress = 0x40022800, .BitPosition = 10},
    { .PortAddress = 0x40022800, .BitPosition = 11},
    { .PortAddress = 0x40022800, .BitPosition = 12},
    { .PortAddress = 0x40022800, .BitPosition = 13},
    { .PortAddress = 0x40022800, .BitPosition = 14},
    { .PortAddress = 0x40022800, .BitPosition = 15}
}; 


PortAddressType LookUpTable_for_Ports[NUMBER_OF_AVAILABLE_PORTS] =
{
	0x40020000, //GPIOA
	0x40020400, //GPIOB
	0x40020800, //GPIOC
	0x40020C00, //GPIOD
    0x40021000, //GPIOE 
    0x40021400, //GPIOF
    0x40021800, //GPIOG
    0x40021C00, //GPIOH
    0x40022000, //GPIOI
    0x40022400, //GPIOJ
    0x40022800  //GPIOK
}; 



Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelID)
{

    PortAddressType PortAddress = LookUpTable [ChannelID].PortAddress;
    BitPositionType BitPosition = LookUpTable [ChannelID].BitPosition;


    Dio_PortLevelType PortValue = (*((volatile uint32 *)(PortAddress+GPIO_IDR_OFFSET)));

    PortValue &= (1U<<BitPosition); // the content of the port is masked with the mask, the only bit not affected will be the bit we want to read

    uint32 PinValue = (PortValue>>BitPosition);

    if (PinValue) return STD_HIGH; else return STD_LOW;
}


void Dio_WriteChannel(Dio_ChannelType ChannelId,Dio_LevelType Level)
{
    PortAddressType PortAddress = LookUpTable [ChannelId].PortAddress;
    BitPositionType BitPosition = LookUpTable [ChannelId].BitPosition;

    if (Level == STD_HIGH)
    {
        uint32 mask = (1U<<BitPosition);
        (*((volatile uint32 *)(PortAddress+GPIO_ODR_OFFSET))) |= mask;
    }
    else
    {
        uint32 mask = ~(1U<<BitPosition);
        (*((volatile uint32 *)(PortAddress+GPIO_ODR_OFFSET))) &= mask;
    }
}



Dio_PortLevelType Dio_ReadPort(Dio_PortType PortId)
{
	PortAddressType PortAddress = LookUpTable_for_Ports[PortId]; 

	Dio_PortLevelType PortValue = (*((volatile uint32 *)(PortAddress+GPIO_IDR_OFFSET)));

	return PortValue; 
}

void Dio_WritePort(Dio_PortType PortId,Dio_PortLevelType Level)
{
	PortAddressType PortAddress = LookUpTable_for_Ports[PortId]; 

	(*((volatile uint32 *)(PortAddress+GPIO_ODR_OFFSET))) = Level; 
}


Dio_PortLevelType Dio_ReadChannelGroup(const Dio_ChannelGroupType* ChannelGroupIdPtr)
{

	Dio_PortType PortID; 
	uint32 offset, mask; 

	PortID = ChannelGroupIdPtr -> port; 
	offset = ChannelGroupIdPtr -> offset; 
	mask   = ChannelGroupIdPtr -> mask; 

	PortAddressType PortAddress = LookUpTable_for_Ports[PortID]; 

	Dio_PortLevelType PortValue = (*((volatile uint32 *)(PortAddress+GPIO_IDR_OFFSET))); 
	PortValue &= mask; 
	PortValue >>= offset; 

	return PortValue; 

}

void Dio_WriteChannelGroup(const Dio_ChannelGroupType* ChannelGroupIdPtr,Dio_PortLevelType Level)
{
	Dio_PortType PortID; 
	uint32 offset, mask; 

	PortID = ChannelGroupIdPtr -> port; 
	offset = ChannelGroupIdPtr -> offset; 
	mask   = ChannelGroupIdPtr -> mask; 

	PortAddressType PortAddress = LookUpTable_for_Ports[PortID]; 

	//Dio_PortLevelType PortValue = (*((volatile uint32 *)(PortAddress+GPIO_IDR_OFFSET)));

	(*((volatile uint32 *)(PortAddress+GPIO_ODR_OFFSET))) &= ~(mask); 
	(*((volatile uint32 *)(PortAddress+GPIO_ODR_OFFSET))) &= (Level<<offset);
}


Dio_LevelType Dio_FlipChannel(Dio_ChannelType ChannelId)
{
	Dio_LevelType Current_Level; 

	Current_Level = Dio_ReadChannel(ChannelId); 

	if(STD_LOW==Current_Level)
	{
		Dio_WriteChannel(ChannelId, STD_HIGH); 
		return STD_HIGH; 
	}
	else 
	{
		Dio_WriteChannel(ChannelId, STD_LOW); 
		return STD_LOW; 
	}
}
