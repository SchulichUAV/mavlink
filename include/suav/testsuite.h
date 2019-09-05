/** @file
 *    @brief MAVLink comm protocol testsuite generated from suav.xml
 *    @see http://qgroundcontrol.org/mavlink/
 */
#pragma once
#ifndef SUAV_TESTSUITE_H
#define SUAV_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL

static void mavlink_test_suav(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

    mavlink_test_suav(system_id, component_id, last_msg);
}
#endif




static void mavlink_test_wing_sensor_values(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_WING_SENSOR_VALUES >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_wing_sensor_values_t packet_in = {
        17.0,45.0,73.0,101.0,129.0,157.0,185.0,213.0
    };
    mavlink_wing_sensor_values_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.sens_1_l = packet_in.sens_1_l;
        packet1.sens_2_l = packet_in.sens_2_l;
        packet1.sens_3_l = packet_in.sens_3_l;
        packet1.sens_4_l = packet_in.sens_4_l;
        packet1.sens_1_r = packet_in.sens_1_r;
        packet1.sens_2_r = packet_in.sens_2_r;
        packet1.sens_3_r = packet_in.sens_3_r;
        packet1.sens_4_r = packet_in.sens_4_r;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_WING_SENSOR_VALUES_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_WING_SENSOR_VALUES_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_wing_sensor_values_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_wing_sensor_values_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_wing_sensor_values_pack(system_id, component_id, &msg , packet1.sens_1_l , packet1.sens_2_l , packet1.sens_3_l , packet1.sens_4_l , packet1.sens_1_r , packet1.sens_2_r , packet1.sens_3_r , packet1.sens_4_r );
    mavlink_msg_wing_sensor_values_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_wing_sensor_values_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.sens_1_l , packet1.sens_2_l , packet1.sens_3_l , packet1.sens_4_l , packet1.sens_1_r , packet1.sens_2_r , packet1.sens_3_r , packet1.sens_4_r );
    mavlink_msg_wing_sensor_values_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_wing_sensor_values_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_wing_sensor_values_send(MAVLINK_COMM_1 , packet1.sens_1_l , packet1.sens_2_l , packet1.sens_3_l , packet1.sens_4_l , packet1.sens_1_r , packet1.sens_2_r , packet1.sens_3_r , packet1.sens_4_r );
    mavlink_msg_wing_sensor_values_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_three_d_airspeed_values(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_three_d_airspeed_values_t packet_in = {
        17.0,45.0,73.0,101.0,129.0
    };
    mavlink_three_d_airspeed_values_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.airsp_1 = packet_in.airsp_1;
        packet1.airsp_2 = packet_in.airsp_2;
        packet1.airsp_3 = packet_in.airsp_3;
        packet1.airsp_4 = packet_in.airsp_4;
        packet1.airsp_5 = packet_in.airsp_5;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_THREE_D_AIRSPEED_VALUES_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_three_d_airspeed_values_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_three_d_airspeed_values_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_three_d_airspeed_values_pack(system_id, component_id, &msg , packet1.airsp_1 , packet1.airsp_2 , packet1.airsp_3 , packet1.airsp_4 , packet1.airsp_5 );
    mavlink_msg_three_d_airspeed_values_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_three_d_airspeed_values_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.airsp_1 , packet1.airsp_2 , packet1.airsp_3 , packet1.airsp_4 , packet1.airsp_5 );
    mavlink_msg_three_d_airspeed_values_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_three_d_airspeed_values_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_three_d_airspeed_values_send(MAVLINK_COMM_1 , packet1.airsp_1 , packet1.airsp_2 , packet1.airsp_3 , packet1.airsp_4 , packet1.airsp_5 );
    mavlink_msg_three_d_airspeed_values_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_drop_information(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_DROP_INFORMATION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_drop_information_t packet_in = {
        963497464,963497672,17651,163
    };
    mavlink_drop_information_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.lat = packet_in.lat;
        packet1.lng = packet_in.lng;
        packet1.alt = packet_in.alt;
        packet1.type = packet_in.type;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_DROP_INFORMATION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_DROP_INFORMATION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_drop_information_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_drop_information_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_drop_information_pack(system_id, component_id, &msg , packet1.type , packet1.lat , packet1.lng , packet1.alt );
    mavlink_msg_drop_information_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_drop_information_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.type , packet1.lat , packet1.lng , packet1.alt );
    mavlink_msg_drop_information_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_drop_information_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_drop_information_send(MAVLINK_COMM_1 , packet1.type , packet1.lat , packet1.lng , packet1.alt );
    mavlink_msg_drop_information_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_suav(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_wing_sensor_values(system_id, component_id, last_msg);
    mavlink_test_three_d_airspeed_values(system_id, component_id, last_msg);
    mavlink_test_drop_information(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // SUAV_TESTSUITE_H
