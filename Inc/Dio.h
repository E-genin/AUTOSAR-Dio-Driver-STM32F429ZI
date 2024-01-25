#ifndef DIO_H
#define DIO_H



#include "Std_Types.h"
#include "Dio_Cfg.h"


typedef uint8 Dio_ChannelType; 

typedef uint8 Dio_PortType; 


typedef struct {
	uint32 mask; 

	uint32 offset; 

	Dio_PortType port; 
}
Dio_ChannelGroupType; 


typedef uint8 Dio_LevelType; 

#define STD_LOW 	(Dio_LevelType) 0x00
#define STD_HIGH 	(Dio_LevelType) 0x01

/*Alternative

typedef enum{
	STD_LOW, 
	STD_HIGH
} Dio_LevelType; 

*/


typedef uint32 Dio_PortLevelType; 


typedef struct 
{
	Dio_ChannelType 		Channels	[HOW_MANY_CHANNELS_CONFIGURED]; 
	Dio_PortType 			Ports		[HOW_MANY_PORTS_CONFIGURED]; 
	Dio_ChannelGroupType 	Groups		[HOW_MANY_GROUPS_CONFIGURED]; 
}
Dio_ConfigType; 



typedef uint32 PortAddressType; 
typedef uint8  BitPositionType; 

typedef struct 
{
	PortAddressType  PortAddress; 
	BitPositionType  BitPosition; 
}
Channel_to_PortandBitPosition_Type; 





#define NUMBER_OF_AVAILABLE_DIO_CHANNELS	(176U)
#define NUMBER_OF_AVAILABLE_PORTS			(11U)

#define GPIO_IDR_OFFSET						(0x00000010)
#define GPIO_ODR_OFFSET						(0x00000014)

extern Channel_to_PortandBitPosition_Type LookUpTable[]; 


#define GPIOA_Channel_0   (0)		// we will use these as the indexes of the the lookup table
#define GPIOA_Channel_1   (1)
#define GPIOA_Channel_2   (2)
#define GPIOA_Channel_3   (3)
#define GPIOA_Channel_4   (4)
#define GPIOA_Channel_5   (5)
#define GPIOA_Channel_6   (6)
#define GPIOA_Channel_7   (7)
#define GPIOA_Channel_8   (8)
#define GPIOA_Channel_9   (9)
#define GPIOA_Channel_10  (10)
#define GPIOA_Channel_11  (11)
#define GPIOA_Channel_12  (12)
#define GPIOA_Channel_13  (13)
#define GPIOA_Channel_14  (14)
#define GPIOA_Channel_15  (15)

#define GPIOB_Channel_0   (16)
#define GPIOB_Channel_1   (17)
#define GPIOB_Channel_2   (18)
#define GPIOB_Channel_3   (19)
#define GPIOB_Channel_4   (20)
#define GPIOB_Channel_5   (21)
#define GPIOB_Channel_6   (22)
#define GPIOB_Channel_7   (23)
#define GPIOB_Channel_8   (24)
#define GPIOB_Channel_9   (25)
#define GPIOB_Channel_10  (26)
#define GPIOB_Channel_11  (27)
#define GPIOB_Channel_12  (28)
#define GPIOB_Channel_13  (29)
#define GPIOB_Channel_14  (30)
#define GPIOB_Channel_15  (31)

#define GPIOC_Channel_0   (32)
#define GPIOC_Channel_1   (33)
#define GPIOC_Channel_2   (34)
#define GPIOC_Channel_3   (35)
#define GPIOC_Channel_4   (36)
#define GPIOC_Channel_5   (37)
#define GPIOC_Channel_6   (38)
#define GPIOC_Channel_7   (39)
#define GPIOC_Channel_8   (40)
#define GPIOC_Channel_9   (41)
#define GPIOC_Channel_10  (42)
#define GPIOC_Channel_11  (43)
#define GPIOC_Channel_12  (44)
#define GPIOC_Channel_13  (45)
#define GPIOC_Channel_14  (46)
#define GPIOC_Channel_15  (47)

#define GPIOD_Channel_0   (48)
#define GPIOD_Channel_1   (49)
#define GPIOD_Channel_2   (50)
#define GPIOD_Channel_3   (51)
#define GPIOD_Channel_4   (52)
#define GPIOD_Channel_5   (53)
#define GPIOD_Channel_6   (54)
#define GPIOD_Channel_7   (55)
#define GPIOD_Channel_8   (56)
#define GPIOD_Channel_9   (57)
#define GPIOD_Channel_10  (58)
#define GPIOD_Channel_11  (59)
#define GPIOD_Channel_12  (60)
#define GPIOD_Channel_13  (61)
#define GPIOD_Channel_14  (62)
#define GPIOD_Channel_15  (63)

#define GPIOE_Channel_0   (64)
#define GPIOE_Channel_1   (65)
#define GPIOE_Channel_2   (66)
#define GPIOE_Channel_3   (67)
#define GPIOE_Channel_4   (68)
#define GPIOE_Channel_5   (69)
#define GPIOE_Channel_6   (70)
#define GPIOE_Channel_7   (71)
#define GPIOE_Channel_8   (72)
#define GPIOE_Channel_9   (73)
#define GPIOE_Channel_10  (74)
#define GPIOE_Channel_11  (75)
#define GPIOE_Channel_12  (76)
#define GPIOE_Channel_13  (77)
#define GPIOE_Channel_14  (78)
#define GPIOE_Channel_15  (79)

#define GPIOF_Channel_0   (80)
#define GPIOF_Channel_1   (81)
#define GPIOF_Channel_2   (82)
#define GPIOF_Channel_3   (83)
#define GPIOF_Channel_4   (84)
#define GPIOF_Channel_5   (85)
#define GPIOF_Channel_6   (86)
#define GPIOF_Channel_7   (87)
#define GPIOF_Channel_8   (88)
#define GPIOF_Channel_9   (89)
#define GPIOF_Channel_10  (90)
#define GPIOF_Channel_11  (91)
#define GPIOF_Channel_12  (92)
#define GPIOF_Channel_13  (93)
#define GPIOF_Channel_14  (94)
#define GPIOF_Channel_15  (95)

#define GPIOG_Channel_0   (96)
#define GPIOG_Channel_1   (97)
#define GPIOG_Channel_2   (98)
#define GPIOG_Channel_3   (99)
#define GPIOG_Channel_4   (100)
#define GPIOG_Channel_5   (101)
#define GPIOG_Channel_6   (102)
#define GPIOG_Channel_7   (103)
#define GPIOG_Channel_8   (104)
#define GPIOG_Channel_9   (105)
#define GPIOG_Channel_10  (106)
#define GPIOG_Channel_11  (107)
#define GPIOG_Channel_12  (108)
#define GPIOG_Channel_13  (109)
#define GPIOG_Channel_14  (110)
#define GPIOG_Channel_15  (111)

#define GPIOH_Channel_0   (112)
#define GPIOH_Channel_1   (113)
#define GPIOH_Channel_2   (114)
#define GPIOH_Channel_3   (115)
#define GPIOH_Channel_4   (116)
#define GPIOH_Channel_5   (117)
#define GPIOH_Channel_6   (118)
#define GPIOH_Channel_7   (119)
#define GPIOH_Channel_8   (120)
#define GPIOH_Channel_9   (121)
#define GPIOH_Channel_10  (122)
#define GPIOH_Channel_11  (123)
#define GPIOH_Channel_12  (124)
#define GPIOH_Channel_13  (125)
#define GPIOH_Channel_14  (126)
#define GPIOH_Channel_15  (127)

#define GPIOI_Channel_0   (128)
#define GPIOI_Channel_1   (129)
#define GPIOI_Channel_2   (130)
#define GPIOI_Channel_3   (131)
#define GPIOI_Channel_4   (132)
#define GPIOI_Channel_5   (133)
#define GPIOI_Channel_6   (134)
#define GPIOI_Channel_7   (135)
#define GPIOI_Channel_8   (136)
#define GPIOI_Channel_9   (137)
#define GPIOI_Channel_10  (138)
#define GPIOI_Channel_11  (139)
#define GPIOI_Channel_12  (140)
#define GPIOI_Channel_13  (141)
#define GPIOI_Channel_14  (142)
#define GPIOI_Channel_15  (143)

#define GPIOJ_Channel_0   (144)
#define GPIOJ_Channel_1   (145)
#define GPIOJ_Channel_2   (146)
#define GPIOJ_Channel_3   (147)
#define GPIOJ_Channel_4   (148)
#define GPIOJ_Channel_5   (149)
#define GPIOJ_Channel_6   (150)
#define GPIOJ_Channel_7   (151)
#define GPIOJ_Channel_8   (152)
#define GPIOJ_Channel_9   (153)
#define GPIOJ_Channel_10  (154)
#define GPIOJ_Channel_11  (155)
#define GPIOJ_Channel_12  (156)
#define GPIOJ_Channel_13  (157)
#define GPIOJ_Channel_14  (158)
#define GPIOJ_Channel_15  (159)

#define GPIOK_Channel_0   (160)
#define GPIOK_Channel_1   (161)
#define GPIOK_Channel_2   (162)
#define GPIOK_Channel_3   (163)
#define GPIOK_Channel_4   (164)
#define GPIOK_Channel_5   (165)
#define GPIOK_Channel_6   (166)
#define GPIOK_Channel_7   (167)
#define GPIOK_Channel_8   (168)
#define GPIOK_Channel_9   (169)
#define GPIOK_Channel_10  (170)
#define GPIOK_Channel_11  (171)
#define GPIOK_Channel_12  (172)
#define GPIOK_Channel_13  (173)
#define GPIOK_Channel_14  (174)
#define GPIOK_Channel_15  (175)// ==> this means we have 176 possibilities



extern PortAddressType LookUpTable_for_Ports[]; 

#define GPIOA (0x00)
#define GPIOB (0x01)
#define GPIOC (0x02)
#define GPIOD (0x03)
#define GPIOE (0x04)
#define GPIOF (0x05)
#define GPIOG (0x06)
#define GPIOH (0x07)
#define GPIOI (0x08)
#define GPIOJ (0x09)
#define GPIOK (0x0A)


Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelID); 

void Dio_WriteChannel(Dio_ChannelType ChannelId,Dio_LevelType Level); 

Dio_PortLevelType Dio_ReadPort(Dio_PortType PortId); 

void Dio_WritePort(Dio_PortType PortId,Dio_PortLevelType Level); 

Dio_PortLevelType Dio_ReadChannelGroup(const Dio_ChannelGroupType* ChannelGroupIdPtr);

void Dio_WriteChannelGroup(const Dio_ChannelGroupType* ChannelGroupIdPtr,Dio_PortLevelType Level); 

//void Dio_GetVersionInfo(Std_VersionInfoType* VersionInfo);

Dio_LevelType Dio_FlipChannel(Dio_ChannelType ChannelId); 

#endif /*DIO_H*/
