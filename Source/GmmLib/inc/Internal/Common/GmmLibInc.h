/*==============================================================================
Copyright(c) 2017 Intel Corporation

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files(the "Software"),
to deal in the Software without restriction, including without limitation
the rights to use, copy, modify, merge, publish, distribute, sublicense,
and / or sell copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.
============================================================================*/
#pragma once

#ifndef _WIN32
#include <portable_windef.h>
#include <portable_compiler.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif /*__cplusplus*/

#include "Driver_Model.h"

#include "External/Common/GmmInternal.h"

#include "External/Common/GmmConst.h"
#include "External/Common/GmmUtil.h"
#include "External/Common/GmmHw.h"

#include "External/Common/GmmCommonExt.h"
#include "External/Common/GmmPlatformExt.h"
#include "External/Common/GmmCachePolicy.h"
#include "External/Common/GmmResourceInfoExt.h"
#include "External/Common/GmmGttExt.h"
#include "../Platform/GmmPlatforms.h"
#include "Platform/GmmGen8Platform.h"
#include "Platform/GmmGen9Platform.h"
#include "External/Common/GmmTextureExt.h"
#include "../Texture/GmmTexture.h"
#include "Texture/GmmTextureCalc.h"
#include "Texture/GmmGen7TextureCalc.h"
#include "Texture/GmmGen8TextureCalc.h"
#include "Texture/GmmGen9TextureCalc.h"
#include "External/Common/GmmResourceInfo.h"
#include "External/Common/GmmInfoExt.h"
#include "External/Common/GmmInfo.h"
#include "../Utility/GmmUtility.h"

#include "External/Common/GmmProto.h"                   // TBD: Move internal GmmLib protos

#ifdef __cplusplus
}
#endif /*__cplusplus*/

#ifndef DXGKDDI_INTERFACE_VERSION_WDDM1_3
//WinBlue DDK definitions
#define D3DKMT_CROSS_ADAPTER_RESOURCE_PITCH_ALIGNMENT   128
#define D3DKMT_CROSS_ADAPTER_RESOURCE_HEIGHT_ALIGNMENT   4

#endif