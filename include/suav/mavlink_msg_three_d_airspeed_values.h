#pragma once
// MESSAGE THREE_D_AIRSPEED_VALUES PACKING

#define MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES 12001

MAVPACKED(
typedef struct __mavlink_three_d_airspeed_values_t {
 float airsp_1; /*<  Airspeed 1*/
 float airsp_2; /*<  Airspeed 2*/
 float airsp_3; /*<  Airspeed 3*/
 float airsp_4; /*<  Airspeed 4*/
 float airsp_5; /*<  Airspeed 5*/
}) mavlink_three_d_airspeed_values_t;

#define MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_LEN 20
#define MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_MIN_LEN 20
#define MAVLINK_MSG_ID_12001_LEN 20
#define MAVLINK_MSG_ID_12001_MIN_LEN 20

#define MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_CRC 9
#define MAVLINK_MSG_ID_12001_CRC 9



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_THREE_D_AIRSPEED_VALUES { \
    12001, \
    "THREE_D_AIRSPEED_VALUES", \
    5, \
    {  { "airsp_1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_three_d_airspeed_values_t, airsp_1) }, \
         { "airsp_2", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_three_d_airspeed_values_t, airsp_2) }, \
         { "airsp_3", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_three_d_airspeed_values_t, airsp_3) }, \
         { "airsp_4", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_three_d_airspeed_values_t, airsp_4) }, \
         { "airsp_5", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_three_d_airspeed_values_t, airsp_5) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_THREE_D_AIRSPEED_VALUES { \
    "THREE_D_AIRSPEED_VALUES", \
    5, \
    {  { "airsp_1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_three_d_airspeed_values_t, airsp_1) }, \
         { "airsp_2", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_three_d_airspeed_values_t, airsp_2) }, \
         { "airsp_3", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_three_d_airspeed_values_t, airsp_3) }, \
         { "airsp_4", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_three_d_airspeed_values_t, airsp_4) }, \
         { "airsp_5", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_three_d_airspeed_values_t, airsp_5) }, \
         } \
}
#endif

/**
 * @brief Pack a three_d_airspeed_values message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param airsp_1  Airspeed 1
 * @param airsp_2  Airspeed 2
 * @param airsp_3  Airspeed 3
 * @param airsp_4  Airspeed 4
 * @param airsp_5  Airspeed 5
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_three_d_airspeed_values_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float airsp_1, float airsp_2, float airsp_3, float airsp_4, float airsp_5)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_LEN];
    _mav_put_float(buf, 0, airsp_1);
    _mav_put_float(buf, 4, airsp_2);
    _mav_put_float(buf, 8, airsp_3);
    _mav_put_float(buf, 12, airsp_4);
    _mav_put_float(buf, 16, airsp_5);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_LEN);
#else
    mavlink_three_d_airspeed_values_t packet;
    packet.airsp_1 = airsp_1;
    packet.airsp_2 = airsp_2;
    packet.airsp_3 = airsp_3;
    packet.airsp_4 = airsp_4;
    packet.airsp_5 = airsp_5;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_MIN_LEN, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_LEN, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_CRC);
}

/**
 * @brief Pack a three_d_airspeed_values message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param airsp_1  Airspeed 1
 * @param airsp_2  Airspeed 2
 * @param airsp_3  Airspeed 3
 * @param airsp_4  Airspeed 4
 * @param airsp_5  Airspeed 5
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_three_d_airspeed_values_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float airsp_1,float airsp_2,float airsp_3,float airsp_4,float airsp_5)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_LEN];
    _mav_put_float(buf, 0, airsp_1);
    _mav_put_float(buf, 4, airsp_2);
    _mav_put_float(buf, 8, airsp_3);
    _mav_put_float(buf, 12, airsp_4);
    _mav_put_float(buf, 16, airsp_5);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_LEN);
#else
    mavlink_three_d_airspeed_values_t packet;
    packet.airsp_1 = airsp_1;
    packet.airsp_2 = airsp_2;
    packet.airsp_3 = airsp_3;
    packet.airsp_4 = airsp_4;
    packet.airsp_5 = airsp_5;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_MIN_LEN, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_LEN, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_CRC);
}

/**
 * @brief Encode a three_d_airspeed_values struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param three_d_airspeed_values C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_three_d_airspeed_values_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_three_d_airspeed_values_t* three_d_airspeed_values)
{
    return mavlink_msg_three_d_airspeed_values_pack(system_id, component_id, msg, three_d_airspeed_values->airsp_1, three_d_airspeed_values->airsp_2, three_d_airspeed_values->airsp_3, three_d_airspeed_values->airsp_4, three_d_airspeed_values->airsp_5);
}

/**
 * @brief Encode a three_d_airspeed_values struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param three_d_airspeed_values C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_three_d_airspeed_values_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_three_d_airspeed_values_t* three_d_airspeed_values)
{
    return mavlink_msg_three_d_airspeed_values_pack_chan(system_id, component_id, chan, msg, three_d_airspeed_values->airsp_1, three_d_airspeed_values->airsp_2, three_d_airspeed_values->airsp_3, three_d_airspeed_values->airsp_4, three_d_airspeed_values->airsp_5);
}

/**
 * @brief Send a three_d_airspeed_values message
 * @param chan MAVLink channel to send the message
 *
 * @param airsp_1  Airspeed 1
 * @param airsp_2  Airspeed 2
 * @param airsp_3  Airspeed 3
 * @param airsp_4  Airspeed 4
 * @param airsp_5  Airspeed 5
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_three_d_airspeed_values_send(mavlink_channel_t chan, float airsp_1, float airsp_2, float airsp_3, float airsp_4, float airsp_5)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_LEN];
    _mav_put_float(buf, 0, airsp_1);
    _mav_put_float(buf, 4, airsp_2);
    _mav_put_float(buf, 8, airsp_3);
    _mav_put_float(buf, 12, airsp_4);
    _mav_put_float(buf, 16, airsp_5);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES, buf, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_MIN_LEN, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_LEN, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_CRC);
#else
    mavlink_three_d_airspeed_values_t packet;
    packet.airsp_1 = airsp_1;
    packet.airsp_2 = airsp_2;
    packet.airsp_3 = airsp_3;
    packet.airsp_4 = airsp_4;
    packet.airsp_5 = airsp_5;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES, (const char *)&packet, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_MIN_LEN, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_LEN, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_CRC);
#endif
}

/**
 * @brief Send a three_d_airspeed_values message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_three_d_airspeed_values_send_struct(mavlink_channel_t chan, const mavlink_three_d_airspeed_values_t* three_d_airspeed_values)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_three_d_airspeed_values_send(chan, three_d_airspeed_values->airsp_1, three_d_airspeed_values->airsp_2, three_d_airspeed_values->airsp_3, three_d_airspeed_values->airsp_4, three_d_airspeed_values->airsp_5);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES, (const char *)three_d_airspeed_values, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_MIN_LEN, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_LEN, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_CRC);
#endif
}

#if MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_three_d_airspeed_values_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float airsp_1, float airsp_2, float airsp_3, float airsp_4, float airsp_5)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, airsp_1);
    _mav_put_float(buf, 4, airsp_2);
    _mav_put_float(buf, 8, airsp_3);
    _mav_put_float(buf, 12, airsp_4);
    _mav_put_float(buf, 16, airsp_5);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES, buf, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_MIN_LEN, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_LEN, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_CRC);
#else
    mavlink_three_d_airspeed_values_t *packet = (mavlink_three_d_airspeed_values_t *)msgbuf;
    packet->airsp_1 = airsp_1;
    packet->airsp_2 = airsp_2;
    packet->airsp_3 = airsp_3;
    packet->airsp_4 = airsp_4;
    packet->airsp_5 = airsp_5;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES, (const char *)packet, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_MIN_LEN, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_LEN, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_CRC);
#endif
}
#endif

#endif

// MESSAGE THREE_D_AIRSPEED_VALUES UNPACKING


/**
 * @brief Get field airsp_1 from three_d_airspeed_values message
 *
 * @return  Airspeed 1
 */
static inline float mavlink_msg_three_d_airspeed_values_get_airsp_1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field airsp_2 from three_d_airspeed_values message
 *
 * @return  Airspeed 2
 */
static inline float mavlink_msg_three_d_airspeed_values_get_airsp_2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field airsp_3 from three_d_airspeed_values message
 *
 * @return  Airspeed 3
 */
static inline float mavlink_msg_three_d_airspeed_values_get_airsp_3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field airsp_4 from three_d_airspeed_values message
 *
 * @return  Airspeed 4
 */
static inline float mavlink_msg_three_d_airspeed_values_get_airsp_4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field airsp_5 from three_d_airspeed_values message
 *
 * @return  Airspeed 5
 */
static inline float mavlink_msg_three_d_airspeed_values_get_airsp_5(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Decode a three_d_airspeed_values message into a struct
 *
 * @param msg The message to decode
 * @param three_d_airspeed_values C-struct to decode the message contents into
 */
static inline void mavlink_msg_three_d_airspeed_values_decode(const mavlink_message_t* msg, mavlink_three_d_airspeed_values_t* three_d_airspeed_values)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    three_d_airspeed_values->airsp_1 = mavlink_msg_three_d_airspeed_values_get_airsp_1(msg);
    three_d_airspeed_values->airsp_2 = mavlink_msg_three_d_airspeed_values_get_airsp_2(msg);
    three_d_airspeed_values->airsp_3 = mavlink_msg_three_d_airspeed_values_get_airsp_3(msg);
    three_d_airspeed_values->airsp_4 = mavlink_msg_three_d_airspeed_values_get_airsp_4(msg);
    three_d_airspeed_values->airsp_5 = mavlink_msg_three_d_airspeed_values_get_airsp_5(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_LEN? msg->len : MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_LEN;
        memset(three_d_airspeed_values, 0, MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_LEN);
    memcpy(three_d_airspeed_values, _MAV_PAYLOAD(msg), len);
#endif
}
