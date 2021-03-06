/*
 * Frames.h
 *
 * Created: 2015-04-07 20:53:07
 *  Author: Pawel
 */ 


#ifndef FRAMES_H_
#define FRAMES_H_


/**
*Sets address and group of device
*/
#ifndef SETUP_DEVICE_FRAME_REQUEST
#define SETUP_DEVICE_FRAME_REQUEST 0x0100
#endif


/**
*Sets address and group of device
*/
#ifndef DEVICE_FRAME_RESPONSE
#define DEVICE_FRAME_RESPONSE (uint16_t)0x1100
#endif



/**
*Sets action register
*/
#ifndef SETUP_ACTION_REG_FRAME_REQUEST
#define SETUP_ACTION_REG_FRAME_REQUEST 0x0101
#endif

/**
*Sets action register
*/
#ifndef ACTION_REGISTER_FRAME_RESPONSE
#define ACTION_REGISTER_FRAME_RESPONSE 0x1101
#endif


/**
*Sets address and group of device
*/
#ifndef STATUS_FRAME_COMMAND
#define STATUS_FRAME_COMMAND 0x0009
#endif


/**
*Sets address and group of device
*/
#ifndef RESET_FRAME_COMMAND
#define RESET_FRAME_COMMAND 0x0001
#endif


// REQUIRE STAUS FRAME
#ifndef USER_HANDLED_FRAME
#define USER_HANDLED_FRAME 1
#endif

#endif /* FRAMES_H_ */