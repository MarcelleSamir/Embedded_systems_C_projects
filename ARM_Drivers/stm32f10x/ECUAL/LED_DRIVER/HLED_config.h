#ifndef HLED_CFG_H_
#define HLED_CFG_H_

typedef struct 
{
	uint_8t 	Led_Number;
	Port_t*  	Led_Port;
	uint_16t 	Led_Pin;
	uint_8t 	Led_ON;
}HLED_map;

#endif
