/*
 * This is a part of PolyORB-HI-C distribution, a minimal
 * middleware written for generated code from AADL models.
 * You should use it with the Ocarina toolsuite.
 *
 * Copyright (C) 2010, European Space Agency
 */

#include <deployment.h>

#ifndef __PO_HI_DRIVER_SOCKETS_H__
#define __PO_HI_DRIVER_SOCKETS_H__


#if (defined (__PO_HI_NEED_DRIVER_SOCKETS)  \
               || defined (__PO_HI_NEED_DRIVER_QEMU_NE2000_SOCKETS))

#include <po_hi_transport.h>

#include <drivers/po_hi_driver_sockets_common.h>
/* Files from PolyORB-HI-C */


void __po_hi_driver_sockets_receiver (void);

int  __po_hi_driver_sockets_send (__po_hi_entity_t from, __po_hi_entity_t to, __po_hi_msg_t* msg);
/*
 * Send data through the sending socket
 */

void* __po_hi_sockets_receiver_task (void);
/*
 * Task that polls for incoming data 
 * and dispatch it in po-hi-c queues
 */

void* __po_hi_sockets_poller (void);

#endif

#endif

