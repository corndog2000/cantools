/**
 * The MIT License (MIT)
 *
 * Copyright (c) 2018-2019 Erik Moqvist
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/**
 * This file was generated by cantools version 37.0.1 Fri Dec 24 23:37:14 2021.
 */

#include <string.h>

#include "dbc_bms.hpp"

int dbc_bms_msgid_0_x6_b0_t::pack(
    uint8_t *dst_p,
    size_t size)
{

    if (size < 8u) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 8);

    return (8);
}

int dbc_bms_msgid_0_x6_b0_t::unpack(
    const uint8_t *src_p,
    size_t size)
{

    if (size < 8u) {
        return (-EINVAL);
    }

    return (0);
}

uint16_t dbc_bms_msgid_0_x6_b0_t::pack_current_encode_t(double value)
{
    return (uint16_t)(value / 0.1);
}

double dbc_bms_msgid_0_x6_b0_t::pack_current_decode_t(uint16_t value)
{
    return ((double)value * 0.1);
}

bool dbc_bms_msgid_0_x6_b0_t::pack_current_is_in_range_t(uint16_t value)
{
    (void)value;

    return (true);
}

uint16_t dbc_bms_msgid_0_x6_b0_t::pack_inst_voltage_encode_t(double value)
{
    return (uint16_t)(value / 0.1);
}

double dbc_bms_msgid_0_x6_b0_t::pack_inst_voltage_decode_t(uint16_t value)
{
    return ((double)value * 0.1);
}

bool dbc_bms_msgid_0_x6_b0_t::pack_inst_voltage_is_in_range_t(uint16_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b0_t::pack_soc_encode_t(double value)
{
    return (uint8_t)(value / 0.5);
}

double dbc_bms_msgid_0_x6_b0_t::pack_soc_decode_t(uint8_t value)
{
    return ((double)value * 0.5);
}

bool dbc_bms_msgid_0_x6_b0_t::pack_soc_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint16_t dbc_bms_msgid_0_x6_b0_t::relay_state_encode_t(double value)
{
    return (uint16_t)(value);
}

double dbc_bms_msgid_0_x6_b0_t::relay_state_decode_t(uint16_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x6_b0_t::relay_state_is_in_range_t(uint16_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b0_t::crc_checksum_encode_t(double value)
{
    return (uint8_t)(value - 1720.0);
}

double dbc_bms_msgid_0_x6_b0_t::crc_checksum_decode_t(uint8_t value)
{
    return ((double)value + 1720.0);
}

bool dbc_bms_msgid_0_x6_b0_t::crc_checksum_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

int dbc_bms_msgid_0_x6_b1_t::pack(
    uint8_t *dst_p,
    size_t size)
{

    if (size < 8u) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 8);

    return (8);
}

int dbc_bms_msgid_0_x6_b1_t::unpack(
    const uint8_t *src_p,
    size_t size)
{

    if (size < 8u) {
        return (-EINVAL);
    }

    return (0);
}

uint16_t dbc_bms_msgid_0_x6_b1_t::pack_dcl_encode_t(double value)
{
    return (uint16_t)(value);
}

double dbc_bms_msgid_0_x6_b1_t::pack_dcl_decode_t(uint16_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x6_b1_t::pack_dcl_is_in_range_t(uint16_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b1_t::pack_ccl_encode_t(double value)
{
    return (uint8_t)(value);
}

double dbc_bms_msgid_0_x6_b1_t::pack_ccl_decode_t(uint8_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x6_b1_t::pack_ccl_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b1_t::blank_encode_t(double value)
{
    return (uint8_t)(value);
}

double dbc_bms_msgid_0_x6_b1_t::blank_decode_t(uint8_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x6_b1_t::blank_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b1_t::high_temperature_encode_t(double value)
{
    return (uint8_t)(value);
}

double dbc_bms_msgid_0_x6_b1_t::high_temperature_decode_t(uint8_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x6_b1_t::high_temperature_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b1_t::low_temperature_encode_t(double value)
{
    return (uint8_t)(value);
}

double dbc_bms_msgid_0_x6_b1_t::low_temperature_decode_t(uint8_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x6_b1_t::low_temperature_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b1_t::failsafe_statuses_encode_t(double value)
{
    return (uint8_t)(value);
}

double dbc_bms_msgid_0_x6_b1_t::failsafe_statuses_decode_t(uint8_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x6_b1_t::failsafe_statuses_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b1_t::crc_checksum_encode_t(double value)
{
    return (uint8_t)(value - 1721.0);
}

double dbc_bms_msgid_0_x6_b1_t::crc_checksum_decode_t(uint8_t value)
{
    return ((double)value + 1721.0);
}

bool dbc_bms_msgid_0_x6_b1_t::crc_checksum_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

int dbc_bms_msgid_0_x6_b2_t::pack(
    uint8_t *dst_p,
    size_t size)
{

    if (size < 8u) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 8);

    return (8);
}

int dbc_bms_msgid_0_x6_b2_t::unpack(
    const uint8_t *src_p,
    size_t size)
{

    if (size < 8u) {
        return (-EINVAL);
    }

    return (0);
}

uint8_t dbc_bms_msgid_0_x6_b2_t::pack_ccl_encode_t(double value)
{
    return (uint8_t)(value);
}

double dbc_bms_msgid_0_x6_b2_t::pack_ccl_decode_t(uint8_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x6_b2_t::pack_ccl_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b2_t::pack_open_voltage_encode_t(double value)
{
    return (uint8_t)(value / 0.1);
}

double dbc_bms_msgid_0_x6_b2_t::pack_open_voltage_decode_t(uint8_t value)
{
    return ((double)value * 0.1);
}

bool dbc_bms_msgid_0_x6_b2_t::pack_open_voltage_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b2_t::pack_amphours_encode_t(double value)
{
    return (uint8_t)(value / 0.1);
}

double dbc_bms_msgid_0_x6_b2_t::pack_amphours_decode_t(uint8_t value)
{
    return ((double)value * 0.1);
}

bool dbc_bms_msgid_0_x6_b2_t::pack_amphours_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b2_t::pack_resistance_encode_t(double value)
{
    return (uint8_t)(value / 0.001);
}

double dbc_bms_msgid_0_x6_b2_t::pack_resistance_decode_t(uint8_t value)
{
    return ((double)value * 0.001);
}

bool dbc_bms_msgid_0_x6_b2_t::pack_resistance_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b2_t::pack_dod_encode_t(double value)
{
    return (uint8_t)(value / 0.5);
}

double dbc_bms_msgid_0_x6_b2_t::pack_dod_decode_t(uint8_t value)
{
    return ((double)value * 0.5);
}

bool dbc_bms_msgid_0_x6_b2_t::pack_dod_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b2_t::pack_summed_voltage_encode_t(double value)
{
    return (uint8_t)(value / 0.01);
}

double dbc_bms_msgid_0_x6_b2_t::pack_summed_voltage_decode_t(uint8_t value)
{
    return ((double)value * 0.01);
}

bool dbc_bms_msgid_0_x6_b2_t::pack_summed_voltage_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b2_t::pack_abs_current_unsigned_encode_t(double value)
{
    return (uint8_t)(value / 0.1);
}

double dbc_bms_msgid_0_x6_b2_t::pack_abs_current_unsigned_decode_t(uint8_t value)
{
    return ((double)value * 0.1);
}

bool dbc_bms_msgid_0_x6_b2_t::pack_abs_current_unsigned_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b2_t::crc_checksum_encode_t(double value)
{
    return (uint8_t)(value);
}

double dbc_bms_msgid_0_x6_b2_t::crc_checksum_decode_t(uint8_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x6_b2_t::crc_checksum_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

int dbc_bms_msgid_0_x6_b3_t::pack(
    uint8_t *dst_p,
    size_t size)
{

    if (size < 8u) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 8);

    return (8);
}

int dbc_bms_msgid_0_x6_b3_t::unpack(
    const uint8_t *src_p,
    size_t size)
{

    if (size < 8u) {
        return (-EINVAL);
    }

    return (0);
}

uint8_t dbc_bms_msgid_0_x6_b3_t::total_pack_cycles_encode_t(double value)
{
    return (uint8_t)(value);
}

double dbc_bms_msgid_0_x6_b3_t::total_pack_cycles_decode_t(uint8_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x6_b3_t::total_pack_cycles_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b3_t::average_temperature_encode_t(double value)
{
    return (uint8_t)(value);
}

double dbc_bms_msgid_0_x6_b3_t::average_temperature_decode_t(uint8_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x6_b3_t::average_temperature_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b3_t::internal_temperature_encode_t(double value)
{
    return (uint8_t)(value);
}

double dbc_bms_msgid_0_x6_b3_t::internal_temperature_decode_t(uint8_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x6_b3_t::internal_temperature_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b3_t::j1772_plug_state_encode_t(double value)
{
    return (uint8_t)(value);
}

double dbc_bms_msgid_0_x6_b3_t::j1772_plug_state_decode_t(uint8_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x6_b3_t::j1772_plug_state_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b3_t::j1772_ac_current_limit_encode_t(double value)
{
    return (uint8_t)(value);
}

double dbc_bms_msgid_0_x6_b3_t::j1772_ac_current_limit_decode_t(uint8_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x6_b3_t::j1772_ac_current_limit_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b3_t::high_cell_voltage_encode_t(double value)
{
    return (uint8_t)(value / 0.00010);
}

double dbc_bms_msgid_0_x6_b3_t::high_cell_voltage_decode_t(uint8_t value)
{
    return ((double)value * 0.00010);
}

bool dbc_bms_msgid_0_x6_b3_t::high_cell_voltage_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b3_t::low_cell_voltage_encode_t(double value)
{
    return (uint8_t)(value / 0.00010);
}

double dbc_bms_msgid_0_x6_b3_t::low_cell_voltage_decode_t(uint8_t value)
{
    return ((double)value * 0.00010);
}

bool dbc_bms_msgid_0_x6_b3_t::low_cell_voltage_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b3_t::crc_checksum_encode_t(double value)
{
    return (uint8_t)(value);
}

double dbc_bms_msgid_0_x6_b3_t::crc_checksum_decode_t(uint8_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x6_b3_t::crc_checksum_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

int dbc_bms_msgid_0_x6_b4_t::pack(
    uint8_t *dst_p,
    size_t size)
{

    if (size < 8u) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 8);

    return (8);
}

int dbc_bms_msgid_0_x6_b4_t::unpack(
    const uint8_t *src_p,
    size_t size)
{

    if (size < 8u) {
        return (-EINVAL);
    }

    return (0);
}

uint8_t dbc_bms_msgid_0_x6_b4_t::low_opencell_voltage_encode_t(double value)
{
    return (uint8_t)(value / 0.00010);
}

double dbc_bms_msgid_0_x6_b4_t::low_opencell_voltage_decode_t(uint8_t value)
{
    return ((double)value * 0.00010);
}

bool dbc_bms_msgid_0_x6_b4_t::low_opencell_voltage_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b4_t::high_opencell_voltage_encode_t(double value)
{
    return (uint8_t)(value / 0.00010);
}

double dbc_bms_msgid_0_x6_b4_t::high_opencell_voltage_decode_t(uint8_t value)
{
    return ((double)value * 0.00010);
}

bool dbc_bms_msgid_0_x6_b4_t::high_opencell_voltage_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b4_t::avg_opencell_voltage_encode_t(double value)
{
    return (uint8_t)(value / 0.00010);
}

double dbc_bms_msgid_0_x6_b4_t::avg_opencell_voltage_decode_t(uint8_t value)
{
    return ((double)value * 0.00010);
}

bool dbc_bms_msgid_0_x6_b4_t::avg_opencell_voltage_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b4_t::low_cell_resistance_encode_t(double value)
{
    return (uint8_t)(value / 0.01);
}

double dbc_bms_msgid_0_x6_b4_t::low_cell_resistance_decode_t(uint8_t value)
{
    return ((double)value * 0.01);
}

bool dbc_bms_msgid_0_x6_b4_t::low_cell_resistance_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b4_t::high_cell_resistance_encode_t(double value)
{
    return (uint8_t)(value / 0.01);
}

double dbc_bms_msgid_0_x6_b4_t::high_cell_resistance_decode_t(uint8_t value)
{
    return ((double)value * 0.01);
}

bool dbc_bms_msgid_0_x6_b4_t::high_cell_resistance_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b4_t::avg_cell_resistance_encode_t(double value)
{
    return (uint8_t)(value / 0.01);
}

double dbc_bms_msgid_0_x6_b4_t::avg_cell_resistance_decode_t(uint8_t value)
{
    return ((double)value * 0.01);
}

bool dbc_bms_msgid_0_x6_b4_t::avg_cell_resistance_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b4_t::low_cell_voltage_id_encode_t(double value)
{
    return (uint8_t)(value);
}

double dbc_bms_msgid_0_x6_b4_t::low_cell_voltage_id_decode_t(uint8_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x6_b4_t::low_cell_voltage_id_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b4_t::crc_checksum_encode_t(double value)
{
    return (uint8_t)(value);
}

double dbc_bms_msgid_0_x6_b4_t::crc_checksum_decode_t(uint8_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x6_b4_t::crc_checksum_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

int dbc_bms_msgid_0_x6_b5_t::pack(
    uint8_t *dst_p,
    size_t size)
{

    if (size < 8u) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 8);

    return (8);
}

int dbc_bms_msgid_0_x6_b5_t::unpack(
    const uint8_t *src_p,
    size_t size)
{

    if (size < 8u) {
        return (-EINVAL);
    }

    return (0);
}

uint8_t dbc_bms_msgid_0_x6_b5_t::low_opencell_id_encode_t(double value)
{
    return (uint8_t)(value);
}

double dbc_bms_msgid_0_x6_b5_t::low_opencell_id_decode_t(uint8_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x6_b5_t::low_opencell_id_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b5_t::high_opencell_id_encode_t(double value)
{
    return (uint8_t)(value);
}

double dbc_bms_msgid_0_x6_b5_t::high_opencell_id_decode_t(uint8_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x6_b5_t::high_opencell_id_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b5_t::high_intres_id_encode_t(double value)
{
    return (uint8_t)(value);
}

double dbc_bms_msgid_0_x6_b5_t::high_intres_id_decode_t(uint8_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x6_b5_t::high_intres_id_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b5_t::low_intres_id_encode_t(double value)
{
    return (uint8_t)(value);
}

double dbc_bms_msgid_0_x6_b5_t::low_intres_id_decode_t(uint8_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x6_b5_t::low_intres_id_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b5_t::input_supply_voltage_encode_t(double value)
{
    return (uint8_t)(value / 0.1);
}

double dbc_bms_msgid_0_x6_b5_t::input_supply_voltage_decode_t(uint8_t value)
{
    return ((double)value * 0.1);
}

bool dbc_bms_msgid_0_x6_b5_t::input_supply_voltage_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b5_t::j1772_ac_power_limit_encode_t(double value)
{
    return (uint8_t)(value);
}

double dbc_bms_msgid_0_x6_b5_t::j1772_ac_power_limit_decode_t(uint8_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x6_b5_t::j1772_ac_power_limit_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b5_t::j1772_ac_voltage_encode_t(double value)
{
    return (uint8_t)(value / 0.1);
}

double dbc_bms_msgid_0_x6_b5_t::j1772_ac_voltage_decode_t(uint8_t value)
{
    return ((double)value * 0.1);
}

bool dbc_bms_msgid_0_x6_b5_t::j1772_ac_voltage_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b5_t::crc_checksum_encode_t(double value)
{
    return (uint8_t)(value);
}

double dbc_bms_msgid_0_x6_b5_t::crc_checksum_decode_t(uint8_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x6_b5_t::crc_checksum_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

int dbc_bms_msgid_0_x6_b6_t::pack(
    uint8_t *dst_p,
    size_t size)
{

    if (size < 8u) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 8);

    return (8);
}

int dbc_bms_msgid_0_x6_b6_t::unpack(
    const uint8_t *src_p,
    size_t size)
{

    if (size < 8u) {
        return (-EINVAL);
    }

    return (0);
}

uint8_t dbc_bms_msgid_0_x6_b6_t::avg_cell_voltage_encode_t(double value)
{
    return (uint8_t)(value / 0.00010);
}

double dbc_bms_msgid_0_x6_b6_t::avg_cell_voltage_decode_t(uint8_t value)
{
    return ((double)value * 0.00010);
}

bool dbc_bms_msgid_0_x6_b6_t::avg_cell_voltage_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b6_t::high_cell_voltage_encode_t(double value)
{
    return (uint8_t)(value / 0.00010);
}

double dbc_bms_msgid_0_x6_b6_t::high_cell_voltage_decode_t(uint8_t value)
{
    return ((double)value * 0.00010);
}

bool dbc_bms_msgid_0_x6_b6_t::high_cell_voltage_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b6_t::dtc_flags_1_encode_t(double value)
{
    return (uint8_t)(value);
}

double dbc_bms_msgid_0_x6_b6_t::dtc_flags_1_decode_t(uint8_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x6_b6_t::dtc_flags_1_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b6_t::dtc_flags_2_encode_t(double value)
{
    return (uint8_t)(value);
}

double dbc_bms_msgid_0_x6_b6_t::dtc_flags_2_decode_t(uint8_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x6_b6_t::dtc_flags_2_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b6_t::populated_cells_encode_t(double value)
{
    return (uint8_t)(value);
}

double dbc_bms_msgid_0_x6_b6_t::populated_cells_decode_t(uint8_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x6_b6_t::populated_cells_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b6_t::max_cell_number_encode_t(double value)
{
    return (uint8_t)(value);
}

double dbc_bms_msgid_0_x6_b6_t::max_cell_number_decode_t(uint8_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x6_b6_t::max_cell_number_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b6_t::hem_mode_encode_t(double value)
{
    return (uint8_t)(value);
}

double dbc_bms_msgid_0_x6_b6_t::hem_mode_decode_t(uint8_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x6_b6_t::hem_mode_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x6_b6_t::crc_checksum_encode_t(double value)
{
    return (uint8_t)(value);
}

double dbc_bms_msgid_0_x6_b6_t::crc_checksum_decode_t(uint8_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x6_b6_t::crc_checksum_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

int dbc_bms_msgid_0_x36_cellbcast_t::pack(
    uint8_t *dst_p,
    size_t size)
{

    if (size < 8u) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 8);

    return (8);
}

int dbc_bms_msgid_0_x36_cellbcast_t::unpack(
    const uint8_t *src_p,
    size_t size)
{

    if (size < 8u) {
        return (-EINVAL);
    }

    return (0);
}

uint8_t dbc_bms_msgid_0_x36_cellbcast_t::cell_id_encode_t(double value)
{
    return (uint8_t)(value);
}

double dbc_bms_msgid_0_x36_cellbcast_t::cell_id_decode_t(uint8_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x36_cellbcast_t::cell_id_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}

uint16_t dbc_bms_msgid_0_x36_cellbcast_t::cell_voltage_encode_t(double value)
{
    return (uint16_t)(value / 0.0001);
}

double dbc_bms_msgid_0_x36_cellbcast_t::cell_voltage_decode_t(uint16_t value)
{
    return ((double)value * 0.0001);
}

bool dbc_bms_msgid_0_x36_cellbcast_t::cell_voltage_is_in_range_t(uint16_t value)
{
    (void)value;

    return (true);
}

uint16_t dbc_bms_msgid_0_x36_cellbcast_t::cell_resistance_encode_t(double value)
{
    return (uint16_t)(value / 0.01);
}

double dbc_bms_msgid_0_x36_cellbcast_t::cell_resistance_decode_t(uint16_t value)
{
    return ((double)value * 0.01);
}

bool dbc_bms_msgid_0_x36_cellbcast_t::cell_resistance_is_in_range_t(uint16_t value)
{
    return (value <= 32767u);
}

uint8_t dbc_bms_msgid_0_x36_cellbcast_t::cell_balancing_encode_t(double value)
{
    return (uint8_t)(value);
}

double dbc_bms_msgid_0_x36_cellbcast_t::cell_balancing_decode_t(uint8_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x36_cellbcast_t::cell_balancing_is_in_range_t(uint8_t value)
{
    return (value <= 1u);
}

uint16_t dbc_bms_msgid_0_x36_cellbcast_t::cell_open_voltage_encode_t(double value)
{
    return (uint16_t)(value / 0.0001);
}

double dbc_bms_msgid_0_x36_cellbcast_t::cell_open_voltage_decode_t(uint16_t value)
{
    return ((double)value * 0.0001);
}

bool dbc_bms_msgid_0_x36_cellbcast_t::cell_open_voltage_is_in_range_t(uint16_t value)
{
    (void)value;

    return (true);
}

uint8_t dbc_bms_msgid_0_x36_cellbcast_t::checksum_encode_t(double value)
{
    return (uint8_t)(value);
}

double dbc_bms_msgid_0_x36_cellbcast_t::checksum_decode_t(uint8_t value)
{
    return ((double)value);
}

bool dbc_bms_msgid_0_x36_cellbcast_t::checksum_is_in_range_t(uint8_t value)
{
    (void)value;

    return (true);
}
