/*
 * Astra Module: MPEG-TS (type definitions)
 * http://cesbo.com/astra
 *
 * Copyright (C) 2012-2014, Andrey Dyldin <and@cesbo.com>
 *                    2015, Artem Kharitonov <artem@sysert.ru>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _TS_TYPES_
#define _TS_TYPES_ 1

/*
 * ooooooooooo ooooo  oooo oooooooooo ooooooooooo  oooooooo8
 * 88  888  88   888  88    888    888 888    88  888
 *     888         888      888oooo88  888ooo8     888oooooo
 *     888         888      888        888    oo          888
 *    o888o       o888o    o888o      o888ooo8888 o88oooo888
 *
 */

typedef enum
{
    MPEGTS_PACKET_UNKNOWN   = 0x00000000,
    MPEGTS_PACKET_TS        = 0x10000000,
    MPEGTS_PACKET_PSI       = 0x00100000, // Program Specific Information
    MPEGTS_PACKET_PAT       = MPEGTS_PACKET_PSI | 0x01,
    MPEGTS_PACKET_CAT       = MPEGTS_PACKET_PSI | 0x02,
    MPEGTS_PACKET_PMT       = MPEGTS_PACKET_PSI | 0x04,
    MPEGTS_PACKET_SI        = 0x00200000, // Service Information
    MPEGTS_PACKET_NIT       = MPEGTS_PACKET_SI | 0x01,
    MPEGTS_PACKET_SDT       = MPEGTS_PACKET_SI | 0x02,
    MPEGTS_PACKET_EIT       = MPEGTS_PACKET_SI | 0x04,
    MPEGTS_PACKET_TDT       = MPEGTS_PACKET_SI | 0x08,
    MPEGTS_PACKET_CA        = 0x00400000, // Conditional Access
    MPEGTS_PACKET_ECM       = MPEGTS_PACKET_CA | 0x01,
    MPEGTS_PACKET_EMM       = MPEGTS_PACKET_CA | 0x02,
    MPEGTS_PACKET_PES       = 0x00800000, // Elementary Stream
    MPEGTS_PACKET_VIDEO     = MPEGTS_PACKET_PES | 0x01,
    MPEGTS_PACKET_AUDIO     = MPEGTS_PACKET_PES | 0x02,
    MPEGTS_PACKET_SUB       = MPEGTS_PACKET_PES | 0x04,
    MPEGTS_PACKET_DATA      = 0x01000000,
    MPEGTS_PACKET_NULL      = 0x02000000
} mpegts_packet_type_t;

const char * mpegts_type_name(mpegts_packet_type_t type);
mpegts_packet_type_t mpegts_pes_type(uint8_t type_id);

const char * mpeg4_profile_level_name(uint8_t type_id);

void mpegts_desc_to_lua(const uint8_t *desc);

#endif /* _TS_TYPES_ */