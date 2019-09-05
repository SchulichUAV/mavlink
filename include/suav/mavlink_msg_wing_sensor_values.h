#pragma once
// MESSAGE WING_SENSOR_VALUES PACKING

#define MAVLINK_MSG_ID_WING_SENSOR_VALUES 12000

MAVPACKED(
typedef struct __mavlink_wing_sensor_values_t {
 float sens_1_l; /*<  sensor 1 left*/
 float sens_2_l; /*<  sensor 2 left*/
 float sens_3_l; /*<  sensor 3 left*/
 float sens_4_l; /*<  sensor 4 left*/
 float sens_1_r; /*<  sensor 1 right*/
 float sens_2_r; /*<  sensor 2 right*/
 float sens_3_r; /*<  sensor 3 right*/
 float sens_4_r; /*<  sensor 4 right*/
}) mavlink_wing_sensor_values_t;

#define MAVLINK_MSG_ID_WING_SENSOR_VALUES_LEN 32
#define MAVLINK_MSG_ID_WING_SENSOR_VALUES_MIN_LEN 32
#define MAVLINK_MSG_ID_12000_LEN 32
#define MAVLINK_MSG_ID_12000_MIN_LEN 32

#define MAVLINK_MSG_ID_WING_SENSOR_VALUES_CRC 126
#define MAVLINK_MSG_ID_12000_CRC 126



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_WING_SENSOR_VALUES { \
    12000, \
    "WING_SENSOR_VALUES", \
    8, \
    {  { "sens_1_l", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_wing_sensor_values_t, sens_1_l) }, \
         { "sens_2_l", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_wing_sensor_values_t, sens_2_l) }, \
         { "sens_3_l", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_wing_sensor_values_t, sens_3_l) }, \
         { "sens_4_l", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_wing_sensor_values_t, sens_4_l) }, \
         { "sens_1_r", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_wing_sensor_values_t, sens_1_r) }, \
         { "sens_2_r", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_wing_sensor_values_t, sens_2_r) }, \
         { "sens_3_r", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_wing_sensor_values_t, sens_3_r) }, \
         { "sens_4_r", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_wing_sensor_values_t, sens_4_r) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_WING_SENSOR_VALUES { \
    "WING_SENSOR_VALUES", \
    8, \
    {  { "sens_1_l", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_wing_sensor_values_t, sens_1_l) }, \
         { "sens_2_l", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_wing_sensor_values_t, sens_2_l) }, \
         { "sens_3_l", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_wing_sensor_values_t, sens_3_l) }, \
         { "sens_4_l", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_wing_sensor_values_t, sens_4_l) }, \
         { "sens_1_r", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_wing_sensor_values_t, sens_1_r) }, \
         { "sens_2_r", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_wing_sensor_values_t, sens_2_r) }, \
         { "sens_3_r", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_wing_sensor_values_t, sens_3_r) }, \
         { "sens_4_r", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_wing_sensor_values_t, sens_4_r) }, \
         } \
}
#endif

/**
 * @brief Pack a wing_sensor_values message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param sens_1_l  sensor 1 left
 * @param sens_2_l  sensor 2 left
 * @param sens_3_l  sensor 3 left
 * @param sens_4_l  sensor 4 left
 * @param sens_1_r  sensor 1 right
 * @param sens_2_r  sensor 2 right
 * @param sens_3_r  sensor 3 right
 * @param sens_4_r  sensor 4 right
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_wing_sensor_values_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float sens_1_l, float sens_2_l, float sens_3_l, float sens_4_l, float sens_1_r, float sens_2_r, float sens_3_r, float sens_4_r)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WING_SENSOR_VALUES_LEN];
    _mav_put_float(buf, 0, sens_1_l);
    _mav_put_float(buf, 4, sens_2_l);
    _mav_put_float(buf, 8, sens_3_l);
    _mav_put_float(buf, 12, sens_4_l);
    _mav_put_float(buf, 16, sens_1_r);
    _mav_put_float(buf, 20, sens_2_r);
    _mav_put_float(buf, 24, sens_3_r);
    _mav_put_float(buf, 28, sens_4_r);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WING_SENSOR_VALUES_LEN);
#else
    mavlink_wing_sensor_values_t packet;
    packet.sens_1_l = sens_1_l;
    packet.sens_2_l = sens_2_l;
    packet.sens_3_l = sens_3_l;
    packet.sens_4_l = sens_4_l;
    packet.sens_1_r = sens_1_r;
    packet.sens_2_r = sens_2_r;
    packet.sens_3_r = sens_3_r;
    packet.sens_4_r = sens_4_r;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WING_SENSOR_VALUES_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WING_SENSOR_VALUES;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_WING_SENSOR_VALUES_MIN_LEN, MAVLINK_MSG_ID_WING_SENSOR_VALUES_LEN, MAVLINK_MSG_ID_WING_SENSOR_VALUES_CRC);
}

/**
 * @brief Pack a wing_sensor_values message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sens_1_l  sensor 1 left
 * @param sens_2_l  sensor 2 left
 * @param sens_3_l  sensor 3 left
 * @param sens_4_l  sensor 4 left
 * @param sens_1_r  sensor 1 right
 * @param sens_2_r  sensor 2 right
 * @param sens_3_r  sensor 3 right
 * @param sens_4_r  sensor 4 right
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_wing_sensor_values_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float sens_1_l,float sens_2_l,float sens_3_l,float sens_4_l,float sens_1_r,float sens_2_r,float sens_3_r,float sens_4_r)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WING_SENSOR_VALUES_LEN];
    _mav_put_float(buf, 0, sens_1_l);
    _mav_put_float(buf, 4, sens_2_l);
    _mav_put_float(buf, 8, sens_3_l);
    _mav_put_float(buf, 12, sens_4_l);
    _mav_put_float(buf, 16, sens_1_r);
    _mav_put_float(buf, 20, sens_2_r);
    _mav_put_float(buf, 24, sens_3_r);
    _mav_put_float(buf, 28, sens_4_r);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WING_SENSOR_VALUES_LEN);
#else
    mavlink_wing_sensor_values_t packet;
    packet.sens_1_l = sens_1_l;
    packet.sens_2_l = sens_2_l;
    packet.sens_3_l = sens_3_l;
    packet.sens_4_l = sens_4_l;
    packet.sens_1_r = sens_1_r;
    packet.sens_2_r = sens_2_r;
    packet.sens_3_r = sens_3_r;
    packet.sens_4_r = sens_4_r;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WING_SENSOR_VALUES_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WING_SENSOR_VALUES;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_WING_SENSOR_VALUES_MIN_LEN, MAVLINK_MSG_ID_WING_SENSOR_VALUES_LEN, MAVLINK_MSG_ID_WING_SENSOR_VALUES_CRC);
}

/**
 * @brief Encode a wing_sensor_values struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param wing_sensor_values C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_wing_sensor_values_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_wing_sensor_values_t* wing_sensor_values)
{
    return mavlink_msg_wing_sensor_values_pack(system_id, component_id, msg, wing_sensor_values->sens_1_l, wing_sensor_values->sens_2_l, wing_sensor_values->sens_3_l, wing_sensor_values->sens_4_l, wing_sensor_values->sens_1_r, wing_sensor_values->sens_2_r, wing_sensor_values->sens_3_r, wing_sensor_values->sens_4_r);
}

/**
 * @brief Encode a wing_sensor_values struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param wing_sensor_values C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_wing_sensor_values_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_wing_sensor_values_t* wing_sensor_values)
{
    return mavlink_msg_wing_sensor_values_pack_chan(system_id, component_id, chan, msg, wing_sensor_values->sens_1_l, wing_sensor_values->sens_2_l, wing_sensor_values->sens_3_l, wing_sensor_values->sens_4_l, wing_sensor_values->sens_1_r, wing_sensor_values->sens_2_r, wing_sensor_values->sens_3_r, wing_sensor_values->sens_4_r);
}

/**
 * @brief Send a wing_sensor_values message
 * @param chan MAVLink channel to send the message
 *
 * @param sens_1_l  sensor 1 left
 * @param sens_2_l  sensor 2 left
 * @param sens_3_l  sensor 3 left
 * @param sens_4_l  sensor 4 left
 * @param sens_1_r  sensor 1 right
 * @param sens_2_r  sensor 2 right
 * @param sens_3_r  sensor 3 right
 * @param sens_4_r  sensor 4 right
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_wing_sensor_values_send(mavlink_channel_t chan, float sens_1_l, float sens_2_l, float sens_3_l, float sens_4_l, float sens_1_r, float sens_2_r, float sens_3_r, float sens_4_r)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WING_SENSOR_VALUES_LEN];
    _mav_put_float(buf, 0, sens_1_l);
    _mav_put_float(buf, 4, sens_2_l);
    _mav_put_float(buf, 8, sens_3_l);
    _mav_put_float(buf, 12, sens_4_l);
    _mav_put_float(buf, 16, sens_1_r);
    _mav_put_float(buf, 20, sens_2_r);
    _mav_put_float(buf, 24, sens_3_r);
    _mav_put_float(buf, 28, sens_4_r);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WING_SENSOR_VALUES, buf, MAVLINK_MSG_ID_WING_SENSOR_VALUES_MIN_LEN, MAVLINK_MSG_ID_WING_SENSOR_VALUES_LEN, MAVLINK_MSG_ID_WING_SENSOR_VALUES_CRC);
#else
    mavlink_wing_sensor_values_t packet;
    packet.sens_1_l = sens_1_l;
    packet.sens_2_l = sens_2_l;
    packet.sens_3_l = sens_3_l;
    packet.sens_4_l = sens_4_l;
    packet.sens_1_r = sens_1_r;
    packet.sens_2_r = sens_2_r;
    packet.sens_3_r = sens_3_r;
    packet.sens_4_r = sens_4_r;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WING_SENSOR_VALUES, (const char *)&packet, MAVLINK_MSG_ID_WING_SENSOR_VALUES_MIN_LEN, MAVLINK_MSG_ID_WING_SENSOR_VALUES_LEN, MAVLINK_MSG_ID_WING_SENSOR_VALUES_CRC);
#endif
}

/**
 * @brief Send a wing_sensor_values message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_wing_sensor_values_send_struct(mavlink_channel_t chan, const mavlink_wing_sensor_values_t* wing_sensor_values)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_wing_sensor_values_send(chan, wing_sensor_values->sens_1_l, wing_sensor_values->sens_2_l, wing_sensor_values->sens_3_l, wing_sensor_values->sens_4_l, wing_sensor_values->sens_1_r, wing_sensor_values->sens_2_r, wing_sensor_values->sens_3_r, wing_sensor_values->sens_4_r);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WING_SENSOR_VALUES, (const char *)wing_sensor_values, MAVLINK_MSG_ID_WING_SENSOR_VALUES_MIN_LEN, MAVLINK_MSG_ID_WING_SENSOR_VALUES_LEN, MAVLINK_MSG_ID_WING_SENSOR_VALUES_CRC);
#endif
}

#if MAVLINK_MSG_ID_WING_SENSOR_VALUES_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_wing_sensor_values_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float sens_1_l, float sens_2_l, float sens_3_l, float sens_4_l, float sens_1_r, float sens_2_r, float sens_3_r, float sens_4_r)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, sens_1_l);
    _mav_put_float(buf, 4, sens_2_l);
    _mav_put_float(buf, 8, sens_3_l);
    _mav_put_float(buf, 12, sens_4_l);
    _mav_put_float(buf, 16, sens_1_r);
    _mav_put_float(buf, 20, sens_2_r);
    _mav_put_float(buf, 24, sens_3_r);
    _mav_put_float(buf, 28, sens_4_r);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WING_SENSOR_VALUES, buf, MAVLINK_MSG_ID_WING_SENSOR_VALUES_MIN_LEN, MAVLINK_MSG_ID_WING_SENSOR_VALUES_LEN, MAVLINK_MSG_ID_WING_SENSOR_VALUES_CRC);
#else
    mavlink_wing_sensor_values_t *packet = (mavlink_wing_sensor_values_t *)msgbuf;
    packet->sens_1_l = sens_1_l;
    packet->sens_2_l = sens_2_l;
    packet->sens_3_l = sens_3_l;
    packet->sens_4_l = sens_4_l;
    packet->sens_1_r = sens_1_r;
    packet->sens_2_r = sens_2_r;
    packet->sens_3_r = sens_3_r;
    packet->sens_4_r = sens_4_r;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WING_SENSOR_VALUES, (const char *)packet, MAVLINK_MSG_ID_WING_SENSOR_VALUES_MIN_LEN, MAVLINK_MSG_ID_WING_SENSOR_VALUES_LEN, MAVLINK_MSG_ID_WING_SENSOR_VALUES_CRC);
#endif
}
#endif

#endif

// MESSAGE WING_SENSOR_VALUES UNPACKING


/**
 * @brief Get field sens_1_l from wing_sensor_values message
 *
 * @return  sensor 1 left
 */
static inline float mavlink_msg_wing_sensor_values_get_sens_1_l(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field sens_2_l from wing_sensor_values message
 *
 * @return  sensor 2 left
 */
static inline float mavlink_msg_wing_sensor_values_get_sens_2_l(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field sens_3_l from wing_sensor_values message
 *
 * @return  sensor 3 left
 */
static inline float mavlink_msg_wing_sensor_values_get_sens_3_l(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field sens_4_l from wing_sensor_values message
 *
 * @return  sensor 4 left
 */
static inline float mavlink_msg_wing_sensor_values_get_sens_4_l(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field sens_1_r from wing_sensor_values message
 *
 * @return  sensor 1 right
 */
static inline float mavlink_msg_wing_sensor_values_get_sens_1_r(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field sens_2_r from wing_sensor_values message
 *
 * @return  sensor 2 right
 */
static inline float mavlink_msg_wing_sensor_values_get_sens_2_r(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field sens_3_r from wing_sensor_values message
 *
 * @return  sensor 3 right
 */
static inline float mavlink_msg_wing_sensor_values_get_sens_3_r(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field sens_4_r from wing_sensor_values message
 *
 * @return  sensor 4 right
 */
static inline float mavlink_msg_wing_sensor_values_get_sens_4_r(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Decode a wing_sensor_values message into a struct
 *
 * @param msg The message to decode
 * @param wing_sensor_values C-struct to decode the message contents into
 */
static inline void mavlink_msg_wing_sensor_values_decode(const mavlink_message_t* msg, mavlink_wing_sensor_values_t* wing_sensor_values)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    wing_sensor_values->sens_1_l = mavlink_msg_wing_sensor_values_get_sens_1_l(msg);
    wing_sensor_values->sens_2_l = mavlink_msg_wing_sensor_values_get_sens_2_l(msg);
    wing_sensor_values->sens_3_l = mavlink_msg_wing_sensor_values_get_sens_3_l(msg);
    wing_sensor_values->sens_4_l = mavlink_msg_wing_sensor_values_get_sens_4_l(msg);
    wing_sensor_values->sens_1_r = mavlink_msg_wing_sensor_values_get_sens_1_r(msg);
    wing_sensor_values->sens_2_r = mavlink_msg_wing_sensor_values_get_sens_2_r(msg);
    wing_sensor_values->sens_3_r = mavlink_msg_wing_sensor_values_get_sens_3_r(msg);
    wing_sensor_values->sens_4_r = mavlink_msg_wing_sensor_values_get_sens_4_r(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_WING_SENSOR_VALUES_LEN? msg->len : MAVLINK_MSG_ID_WING_SENSOR_VALUES_LEN;
        memset(wing_sensor_values, 0, MAVLINK_MSG_ID_WING_SENSOR_VALUES_LEN);
    memcpy(wing_sensor_values, _MAV_PAYLOAD(msg), len);
#endif
}
