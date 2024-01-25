#ifndef DIO_CFG_H
#define DIO_CFG_H


#define HOW_MANY_CHANNELS_CONFIGURED (3U) // Assuming the demo will be using 3 Pins/Channels

#define HOW_MANY_PORTS_CONFIGURED 	 (2U) // Assuming the demo will be using 1 Port

#define HOW_MANY_GROUPS_CONFIGURED 	 (1U) // Assuming the demo will be using 1 Channel Group 


#define PUSH_BUTTON 				 (GPIOC_Channel_13)

#define LED1						 (GPIOB_Channel_7)

#define LED2  						 (GPIOB_Channel_14)


#define PORT_GPIOB 					 (GPIOB)


#define LED1_LED2_GROUP  (GlobalDioConfiguration.Groups)

#endif /*DIO_CFG_H*/
