/*
	shungcom.h - Arduino library for setting up shungcom SZ-05 zigbee modules.
	Copyright (c) 2014 the_KOPACb KOPACb@gmail.com

	This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

/*
Shungcom programming menu
ÇëÑ¡ÔñÓïÑÔ(Please Select Language)
1.ÖÐÎÄ    2.English

PLEASE INPUT£ºSHUNCOM
s

Select To Config:
 1.MAC_Addr   2.Node_name   3.Node_Type  4.Net_Type    5.Net_ID
 6.Channel    7.Data_Type   8.TX_Dst     9.Baud_Rate   A.Parity
 B.Data_Bit   D.Reset      E.Show_All    F.Src_Add
SHUNCOM>e

SHUNCOM Z-BEE CONFIG:
 MAC_Addr:(H) 0001
 Node Name: NODE1
 Node_Type: END_Device
 Net_Type: Star
 Net_ID:(H) BF
 Channel: 0B
 Data_Type: HEX
 TX_Type:Master-Slave
 Baud_Rate: 57600
 Parity: None
 Data_Bit: 8+0+1
 SRC_Addr: NOT OUTPUT
*/

/*
Select To Config:
 1.MAC_Addr   2.Node_name   3.Node_Type  4.Net_Type    5.Net_ID
 6.Channel    7.Data_Type   8.TX_Dst     9.Baud_Rate   A.Parity
 B.Data_Bit   D.Reset      E.Show_All    F.Src_Add
SHUNCOM>


    1)MAC_Addr Config:(Press Enter)
        (H)0001-FFFE

    2)Node_name
        A-Z 1-0

    3) Node_Type Config:
        1-PAN_Coord
        2-PAN_Coord_BackUp
        3-Router
        4-END_Device
        0-Exit

    4) Net_Type Config:
        1-Mesh
        2-Star
        3-Line
        7-Peer
        0-Exit

    5)  Net_ID Config:(Press Enter)
        (H) 00-FF


    6)  Channel Config:
        (H)0-F
        L-Exit

    7) DATA_Type Config:
        1-ASCII
        2-HEX
        0-Exit

    8) (TX_dst) TX_Type Config:
        1-Broadcast
        2-Master-Slave
        3-Point-Point
        0-Exit

    9) Baud_Rate Config:
        1-1200
        2-2400
        3-4800
        4-9600
        5-19200
        6-38400
        7-57600
        8-115200
        0-Exit

    A) Data_Parity Config:
        1-None
        2-Even
        3-Odd
        4-Mark
        5-Space
        0-Exit

    B) Data_Bit Config:
        1-7+1+1
        2-8+0+1
        3-8+1+1
        4-8+0+2
        0-Exit

    F) Output Source Addr:
        1-None
        2-ASCII
        3-HEX
        0-Exit
 */


Shungcom::begin(byte setup_pin, byte reset_pin, byte serial_port)
{
pinMode(setup_pin,OUTPUT);
pinMode(reset_pin,OUTPUT);
digitalWrite(setup_pin,HIGH);
digitalWrite(reset_pin,)


}

Shungcom::Shungcom(int mac_address, char node_name[8], byte node_type, byte net_type, byte net_id, byte channel, byte data_type, byte tx_type, byte baud_rate, byte data_parity, byte data_bit, byte output_source);
{


}