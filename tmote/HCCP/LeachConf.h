#include "contiki.h"


#ifndef LEACH_CONF
#define LEACH_CONF

#define RECLUSTER_TIME  10  * CLOCK_SECOND
#define CHOOSE_CLUSTERHEAD_TIME  10  * CLOCK_SECOND
#define WAIT_FOR_SCHEDULE_TIME  10  * CLOCK_SECOND
//#define TOTAL_RUN_TIME  1 * 60 * CLOCK_SECOND // n minutes times 60 seconds
#define TOTAL_RUN_TIME_IN_SECONDS 10
#define TOTAL_RUN_TIME  TOTAL_RUN_TIME_IN_SECONDS * CLOCK_SECOND
#define ROUNDTABLE_TIME 30 * CLOCK_SECOND
#define WATCHDOG TOTAL_RUN_TIME * 2
	
#define CHANCE_OF_BEING_CH 50  /// it's really 100 - this 	


#define CHANNEL RF_CHANNEL

#define MIN_NEXT_READING_TIME 10 * CLOCK_SECOND
#define MAX_NEXT_READING_TIME 30 * CLOCK_SECOND
//#define MAX_NEXT_READING_TIME 32767   //5*60*CLOCK_SECOND

#define MIN_SEND_TIME 20  // that's in clock seconds...

#define NUMBER_OF_READINGS 5

#define BATTERY_POWER_WEIGHT   0.10
#define SENSOR_MISSION_WEIGHT  0 
#define MESSAGE_QUEUE_WEIGHT   0.80 
#define RANDOM_WEIGHT          0.10
#define DUTY_CYCLE_WEIGHT      0

#endif
