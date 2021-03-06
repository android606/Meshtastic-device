/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.4 */

#ifndef PB_APPONLY_PB_H_INCLUDED
#define PB_APPONLY_PB_H_INCLUDED
#include <pb.h>
#include "mesh.pb.h"

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _ServiceEnvelope {
    bool has_packet;
    MeshPacket packet;
    pb_callback_t channel_id;
    pb_callback_t gateway_id;
} ServiceEnvelope;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define ServiceEnvelope_init_default             {false, MeshPacket_init_default, {{NULL}, NULL}, {{NULL}, NULL}}
#define ServiceEnvelope_init_zero                {false, MeshPacket_init_zero, {{NULL}, NULL}, {{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define ServiceEnvelope_packet_tag               1
#define ServiceEnvelope_channel_id_tag           2
#define ServiceEnvelope_gateway_id_tag           3

/* Struct field encoding specification for nanopb */
#define ServiceEnvelope_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, MESSAGE,  packet,            1) \
X(a, CALLBACK, SINGULAR, STRING,   channel_id,        2) \
X(a, CALLBACK, SINGULAR, STRING,   gateway_id,        3)
#define ServiceEnvelope_CALLBACK pb_default_field_callback
#define ServiceEnvelope_DEFAULT NULL
#define ServiceEnvelope_packet_MSGTYPE MeshPacket

extern const pb_msgdesc_t ServiceEnvelope_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define ServiceEnvelope_fields &ServiceEnvelope_msg

/* Maximum encoded size of messages (where known) */
/* ServiceEnvelope_size depends on runtime parameters */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
