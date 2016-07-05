/* Arduino SPIFRAM Library v.0.0.1
 * Copyright (C) 2015 by Prajwal Bhattaram
 * Modified by Prajwal Bhattaram - 30/06/2016
 *
 * This file is part of the Arduino SPIFRAM Library. This library is for
 * Fujitsu FRAM memory modules. In its current form it enables reading
 * and writing individual data variables, structs and arrays from and to various locations;
 * reading and writing pages; continuous read functions; sector, block and chip erase;
 * suspending and resuming programming/erase and powering down for low power operation.
 *
 * This Library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This Library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License v3.0
 * along with the Arduino SPIFRAM Library.  If not, see
 * <http://www.gnu.org/licenses/>.
 */

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
//						Common Instructions 						  //
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

#define WREN    0x06
#define WRDI    0x04
#define RDSR    0x05
#define WRSR    0x01
#define READ    0x03
#define WRITE   0x02
#define RDID    0x9F

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
//					Chip specific instructions 						  //
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

//~~~~~~~~~~~~~~~~~~~~~~~~~ Fujitsu ~~~~~~~~~~~~~~~~~~~~~~~~~//
#define FUJITSU_MANID		 0x04
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
//							Definitions 							  //
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
#define WRTEN         0x02
#define DUMMYBYTE	    0xEE

#define arrayLen(x)  	(sizeof(x) / sizeof(*x))
#define lengthOf(x)  	(sizeof(x))/sizeof(byte)
#define maxAddress		capacity
#define CONTINUE      true
#define NO_CONTINUE   false
#define PASS          0x01
#define FAIL          0x00

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
//     					   List of Error codes						  //
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

 #define SUCCESS 	 	0x00
 #define CALLBEGIN		0x01
 #define UNKNOWNCHIP	0x02
 #define UNKNOWNCAP		0x03
 #define CHIPBUSY		0x04
 #define OUTOFBOUNDS	0x05
 #define CANTENWRITE	0x06
 #define PREVWRITTEN 	0x07
 #define UNKNOWNERROR	0xFF

 //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
