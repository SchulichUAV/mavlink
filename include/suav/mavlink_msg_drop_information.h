#pragma once
// MESSAGE DROP_INFORMATION PACKING

#define MAVLINK_MSG_ID_DROP_INFORMATION 12002

MAVPACKED(
typedef struct __mavlink_drop_information_t {
 int32_t lat; /*< [degE7] Latitude of drop point.*/
 int32_t lng; /*< [degE7] Longitude of drop point.*/
 int16_t alt; /*< [m] Drop altitude relative to home.*/
 uint8_t type; /*<  Drop type.*/
}) mavlink_drop_information_t;

#define MAVLINK_MSG_ID_DROP_INFORMATION_LEN 11
#define MAVLINK_MSG_ID_DROP_INFORMATION_MIN_LEN 11
#define MAVLINK_MSG_ID_12002_LEN 11
#define MAVLINK_MSG_ID_12002_MIN_LEN 11

#define MAVLINK_MSG_ID_DROP_INFORMATION_CRC 25
#define MAVLINK_MSG_ID_12002_CRC 25



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_DROP_INFORMATION { \
    12002, \
    "DROP_INFORMATION", \
    4, \
    {  { "type", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_drop_information_t, type) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_drop_information_t, lat) }, \
         { "lng", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_drop_information_t, lng) }, \
         { "alt", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_drop_information_t, alt) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_DROP_INFORMATION { \
    "DROP_INFORMATION", \
    4, \
    {  { "type", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_drop_information_t, type) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_drop_information_t, lat) }, \
         { "lng", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_drop_information_t, lng) }, \
         { "alt", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_drop_information_t, alt) }, \
         } \
}
#endif

/**
 * @brief Pack a drop_information message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param type  Drop type.
 * @param lat [degE7] Latitude of drop point.
 * @param lng [degE7] Longitude of drop point.
 * @param alt [m] Drop altitude relative to home.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_drop_information_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t type, int32_t lat, int32_t lng, int16_t alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DROP_INFORMATION_LEN];
    _mav_put_int32_t(buf, 0, lat);
    _mav_put_int32_t(buf, 4, lng);
    _mav_put_int16_t(buf, 8, alt);
    _mav_put_uint8_t(buf, 10, type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DROP_INFORMATION_LEN);
#else
    mavlink_drop_information_t packet;
    packet.lat = lat;
    packet.lng = lng;
    packet.alt = alt;
    packet.type = type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DROP_INFORMATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DROP_INFORMATION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DROP_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_DROP_INFORMATION_LEN, MAVLINK_MSG_ID_DROP_INFORMATION_CRC);
}

/**
 * @brief Pack a drop_information message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param type  Drop type.
 * @param lat [degE7] Latitude of drop point.
 * @param lng [degE7] Longitude of drop point.
 * @param alt [m] Drop altitude relative to home.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_drop_information_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t type,int32_t lat,int32_t lng,int16_t alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DROP_INFORMATION_LEN];
    _mav_put_int32_t(buf, 0, lat);
    _mav_put_int32_t(buf, 4, lng);
    _mav_put_int16_t(buf, 8, alt);
    _mav_put_uint8_t(buf, 10, type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DROP_INFORMATION_LEN);
#else
    mavlink_drop_information_t packet;
    packet.lat = lat;
    packet.lng = lng;
    packet.alt = alt;
    packet.type = type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DROP_INFORMATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DROP_INFORMATION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DROP_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_DROP_INFORMATION_LEN, MAVLINK_MSG_ID_DROP_INFORMATION_CRC);
}

/**
 * @brief Encode a drop_information struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param drop_information C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_drop_information_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_drop_information_t* drop_information)
{
    return mavlink_msg_drop_information_pack(system_id, component_id, msg, drop_information->type, drop_information->lat, drop_information->lng, drop_information->alt);
}

/**
 * @brief Encode a drop_information struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param drop_information C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_drop_information_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_drop_information_t* drop_information)
{
    return mavlink_msg_drop_information_pack_chan(system_id, component_id, chan, msg, drop_information->type, drop_information->lat, drop_information->lng, drop_information->alt);
}

/**
 * @brief Send a drop_information message
 * @param chan MAVLink channel to send the message
 *
 * @param type  Drop type.
 * @param lat [degE7] Latitude of drop point.
 * @param lng [degE7] Longitude of drop point.
 * @param alt [m] Drop altitude relative to home.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_drop_information_send(mavlink_channel_t chan, uint8_t type, int32_t lat, int32_t lng, int16_t alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DROP_INFORMATION_LEN];
    _mav_put_int32_t(buf, 0, lat);
    _mav_put_int32_t(buf, 4, lng);
    _mav_put_int16_t(buf, 8, alt);
    _mav_put_uint8_t(buf, 10, type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DROP_INFORMATION, buf, MAVLINK_MSG_ID_DROP_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_DROP_INFORMATION_LEN, MAVLINK_MSG_ID_DROP_INFORMATION_CRC);
#else
    mavlink_drop_information_t packet;
    packet.lat = lat;
    packet.lng = lng;
    packet.alt = alt;
    packet.type = type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DROP_INFORMATION, (const char *)&packet, MAVLINK_MSG_ID_DROP_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_DROP_INFORMATION_LEN, MAVLINK_MSG_ID_DROP_INFORMATION_CRC);
#endif
}

/**
 * @brief Send a drop_information message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_drop_information_send_struct(mavlink_channel_t chan, const mavlink_drop_information_t* drop_information)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_drop_information_send(chan, drop_information->type, drop_information->lat, drop_information->lng, drop_information->alt);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DROP_INFORMATION, (const char *)drop_information, MAVLINK_MSG_ID_DROP_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_DROP_INFORMATION_LEN, MAVLINK_MSG_ID_DROP_INFORMATION_CRC);
#endif
}

#if MAVLINK_MSG_ID_DROP_INFORMATION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_drop_information_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t type, int32_t lat, int32_t lng, int16_t alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, lat);
    _mav_put_int32_t(buf, 4, lng);
    _mav_put_int16_t(buf, 8, alt);
    _mav_put_uint8_t(buf, 10, type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DROP_INFORMATION, buf, MAVLINK_MSG_ID_DROP_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_DROP_INFORMATION_LEN, MAVLINK_MSG_ID_DROP_INFORMATION_CRC);
#else
    mavlink_drop_information_t *packet = (mavlink_drop_information_t *)msgbuf;
    packet->lat = lat;
    packet->lng = lng;
    packet->alt = alt;
    packet->type = type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DROP_INFORMATION, (const char *)packet, MAVLINK_MSG_ID_DROP_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_DROP_INFORMATION_LEN, MAVLINK_MSG_ID_DROP_INFORMATION_CRC);
#endif
}
#endif

#endif

// MESSAGE DROP_INFORMATION UNPACKING


/**
 * @brief Get field type from drop_information message
 *
 * @return  Drop type.
 */
static inline uint8_t mavlink_msg_drop_information_get_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field lat from drop_information message
 *
 * @return [degE7] Latitude of drop point.
 */
static inline int32_t mavlink_msg_drop_information_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field lng from drop_information message
 *
 * @return [degE7] Longitude of drop point.
 */
static inline int32_t mavlink_msg_drop_information_get_lng(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field alt from drop_information message
 *
 * @return [m] Drop altitude relative to home.
 */
static inline int16_t mavlink_msg_drop_information_get_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  8);
}

/**
 * @brief Decode a drop_information message into a struct
 *
 * @param msg The message to decode
 * @param drop_information C-struct to decode the message contents into
 */
static inline void mavlink_msg_drop_information_decode(const mavlink_message_t* msg, mavlink_drop_information_t* drop_information)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    drop_information->lat = mavlink_msg_drop_information_get_lat(msg);
    drop_information->lng = mavlink_msg_drop_information_get_lng(msg);
    drop_information->alt = mavlink_msg_drop_information_get_alt(msg);
    drop_information->type = mavlink_msg_drop_information_get_type(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_DROP_INFORMATION_LEN? msg->len : MAVLINK_MSG_ID_DROP_INFORMATION_LEN;
        memset(drop_information, 0, MAVLINK_MSG_ID_DROP_INFORMATION_LEN);
    memcpy(drop_information, _MAV_PAYLOAD(msg), len);
#endif
}
