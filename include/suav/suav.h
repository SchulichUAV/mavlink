/** @file
 *  @brief MAVLink comm protocol generated from suav.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_SUAV_H
#define MAVLINK_SUAV_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_SUAV.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 3

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{12000, 126, 32, 0, 0, 0}, {12001, 9, 20, 0, 0, 0}, {12002, 25, 11, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_SUAV

// ENUM DEFINITIONS


/** @brief  */
#ifndef HAVE_ENUM_DROP_TYPE
#define HAVE_ENUM_DROP_TYPE
typedef enum DROP_TYPE
{
   WATER_DROP=1, /*  | */
   HABITAT_DROP=2, /*  | */
   GLIDER_DROP=3, /*  | */
   DROP_TYPE_ENUM_END=4, /*  | */
} DROP_TYPE;
#endif

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_wing_sensor_values.h"
#include "./mavlink_msg_three_d_airspeed_values.h"
#include "./mavlink_msg_drop_information.h"

// base include


#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 3

#if MAVLINK_THIS_XML_IDX == MAVLINK_PRIMARY_XML_IDX
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_WING_SENSOR_VALUES, MAVLINK_MESSAGE_INFO_THREE_D_AIRSPEED_VALUES, MAVLINK_MESSAGE_INFO_DROP_INFORMATION}
# define MAVLINK_MESSAGE_NAMES {{ "DROP_INFORMATION", 12002 }, { "THREE_D_AIRSPEED_VALUES", 12001 }, { "WING_SENSOR_VALUES", 12000 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_SUAV_H
