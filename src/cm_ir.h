/* 
 * File:   cm_ir.h
 * Author: Chase
 *
 * Created on October 26, 2014, 2:52 PM
 */

#ifndef CM_IR_H
#define	CM_IR_H

typedef enum {
    PACKET_DAMAGE = 1,
    PACKET_HEAL = 2,
    PACKET_NONE = 3
} MIRPPacket;

void configureIRReceive();

void configureIRSend();

void sendDamagePacket();
void sendHealPacket();

#endif	/* CM_IR_H */

