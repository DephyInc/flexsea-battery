/****************************************************************************
	[Project] FlexSEA: Flexible & Scalable Electronics Architecture
	[Sub-project] 'battery': Battery Protection & Monitoring
	Copyright (C) 2016 Dephy, Inc. <http://dephy.com/>

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
*****************************************************************************
	[Lead developper] Jean-Francois (JF) Duval, jfduval at dephy dot com.
	[Origin] Based on Jean-Francois Duval's work at the MIT Media Lab 
	Biomechatronics research group <http://biomech.media.mit.edu/>
	[Contributors] 
*****************************************************************************
	[This file] comm: communication with our Master
*****************************************************************************
	[Change log] (Convention: YYYY-MM-DD | author | comment)
	* 2016-09-20 | jfduval | Added proper header
	*
****************************************************************************/
	
#ifndef INC_COMM_H
#define INC_COMM_H

//****************************************************************************
// Include(s)
//****************************************************************************	
	
#include "main.h"
	
//****************************************************************************
// Structure(s)
//****************************************************************************	

//****************************************************************************
// Public Function Prototype(s):
//****************************************************************************

void init_ezI2Cbuf(void);

//****************************************************************************
// Definition(s):
//****************************************************************************

//EZI2C Buffer:
#define EZI2C_WBUF_SIZE			4
#define EZI2C_RBUF_SIZE			8
#define EZI2C_BUF_SIZE			(EZI2C_WBUF_SIZE + EZI2C_RBUF_SIZE)

//EZI2C Shared memory locations:
#define MEM_W_CONTROL1			0
#define MEM_W_CONTROL2			1
//#define UNUSED				2
//#define UNUSED				3
#define MEM_R_STATUS1			5
#define MEM_R_STATUS2			6
#define MEM_R_VOLT_MSB			7
#define MEM_R_VOLT_LSB			8
#define MEM_R_CURRENT_MSB		9
#define MEM_R_CURRENT_LSB		10
#define MEM_R_TEMP				11

//****************************************************************************
// Shared Variable(s):
//****************************************************************************	
	
extern uint8 ezI2Cbuf[EZI2C_BUF_SIZE];
	
#endif	//INC_COMM_H
	