/***************************************************************************
Copyright (c) 2016, Xilinx, Inc.
All rights reserved.

Redistribution and use in source and binary forms, with or without modification, 
are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, 
this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, 
this list of conditions and the following disclaimer in the documentation 
and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors 
may be used to endorse or promote products derived from this software 
without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND 
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, 
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. 
IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, 
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, 
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) 
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, 
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, 
EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

***************************************************************************/


#include "xf_arithm_config.h"

#if T_8U
	void arithm_accel(xf::Mat<XF_8UC1, HEIGHT, WIDTH, NPC1> &imgInput1,xf::Mat<XF_8UC1, HEIGHT, WIDTH, NPC1> &imgInput2,xf::Mat<XF_8UC1, HEIGHT, WIDTH, NPC1> &imgOutput)
	{
	
	//	xf::absdiff< XF_8UC1, HEIGHT, WIDTH, NPC1 >(imgInput1,imgInput2,imgOutput);
	//	xf::add<XF_CONVERT_POLICY_SATURATE, XF_8UC1, HEIGHT, WIDTH, NPC1 >(imgInput1,imgInput2,imgOutput);
	//	xf::subtract<XF_CONVERT_POLICY_SATURATE, XF_8UC1, HEIGHT, WIDTH, NPC1 >(imgInput1,imgInput2,imgOutput);
	//	xf::bitwise_and<XF_8UC1, HEIGHT, WIDTH, NPC1 >(imgInput1,imgInput2,imgOutput);
	//	xf::bitwise_or<XF_8UC1, HEIGHT, WIDTH, NPC1 >(imgInput1,imgInput2,imgOutput);
	//	xf::bitwise_not<XF_8UC1, HEIGHT, WIDTH, NPC1>(imgInput1,imgOutput);
	//	xf::bitwise_xor< XF_8UC1, HEIGHT, WIDTH, NPC1 >(imgInput1,imgInput2,imgOutput);
		xf::multiply< XF_CONVERT_POLICY_SATURATE,XF_8UC1, HEIGHT, WIDTH, NPC1 >(imgInput1,imgInput2,imgOutput,0.05);
	}
#endif

#if T_16S
	void arithm_accel(xf::Mat<XF_16SC1, HEIGHT, WIDTH, NPC1> &imgInput1,xf::Mat<XF_16SC1, HEIGHT, WIDTH, NPC1> &imgInput2,xf::Mat<XF_16SC1, HEIGHT, WIDTH, NPC1> &imgOutput)
	{
	//xf::add<XF_CONVERT_POLICY_SATURATE, XF_16SC1, HEIGHT, WIDTH, NPC1 >(imgInput1,imgInput2,imgOutput);
	//xf::subtract<XF_CONVERT_POLICY_SATURATE, XF_16SC1, HEIGHT, WIDTH, NPC1 >(imgInput1,imgInput2,imgOutput);
	xf::multiply< XF_CONVERT_POLICY_SATURATE,XF_16SC1, HEIGHT, WIDTH,NPC1 >(imgInput1,imgInput2,imgOutput,0.05);
	}
#endif
