//------------------------------------------------------------------------------
// Copyright 2014 Silicon Laboratories, Inc.
// All rights reserved. This program and the accompanying materials
// are made available under the terms of the Silicon Laboratories End User
// License Agreement which accompanies this distribution, and is available at
// http://developer.silabs.com/legal/version/v11/Silicon_Labs_Software_License_Agreement.txt
// Original content and implementation provided by Silicon Laboratories.
//------------------------------------------------------------------------------
//Supported Devices:
//  EFM8BB31F16G
//  EFM8BB31F16G
//  EFM8BB31F16G
//  EFM8BB31F16G
//  EFM8BB31F16I
//  EFM8BB31F16I
//  EFM8BB31F16I
//  EFM8BB31F16I
//  EFM8BB31F32G
//  EFM8BB31F32G
//  EFM8BB31F32G
//  EFM8BB31F32G
//  EFM8BB31F32I
//  EFM8BB31F32I
//  EFM8BB31F32I
//  EFM8BB31F32I
//  EFM8BB31F64G
//  EFM8BB31F64G
//  EFM8BB31F64G
//  EFM8BB31F64G
//  EFM8BB31F64I
//  EFM8BB31F64I
//  EFM8BB31F64I
//  EFM8BB31F64I

#ifndef SI_EFM8BB3_DEVICES_H
#define SI_EFM8BB3_DEVICES_H

#define EFM8BB31F16G_QFN24 0x0C
#define EFM8BB31F16G_QFN32 0x09
#define EFM8BB31F16G_QFP32 0x0A
#define EFM8BB31F16G_QSOP24 0x0B
#define EFM8BB31F16I_QFN24 0x1C
#define EFM8BB31F16I_QFN32 0x19
#define EFM8BB31F16I_QFP32 0x1A
#define EFM8BB31F16I_QSOP24 0x1B
#define EFM8BB31F32G_QFN24 0x08
#define EFM8BB31F32G_QFN32 0x05
#define EFM8BB31F32G_QFP32 0x06
#define EFM8BB31F32G_QSOP24 0x07
#define EFM8BB31F32I_QFN24 0x18
#define EFM8BB31F32I_QFN32 0x15
#define EFM8BB31F32I_QFP32 0x16
#define EFM8BB31F32I_QSOP24 0x17
#define EFM8BB31F64G_QFN24 0x04
#define EFM8BB31F64G_QFN32 0x01
#define EFM8BB31F64G_QFP32 0x02
#define EFM8BB31F64G_QSOP24 0x03
#define EFM8BB31F64I_QFN24 0x14
#define EFM8BB31F64I_QFN32 0x11
#define EFM8BB31F64I_QFP32 0x12
#define EFM8BB31F64I_QSOP24 0x13

#if (EFM8BB3_DEVICE == EFM8BB31F16G_QFN24)
#define DEVICE_DERIVID EFM8BB31F16G_QFN24
#define DEVICE_FLASH_SIZE 0x4000
#define DEVICE_XRAM_SIZE 0x0400
#define DEVICE_PKG_QFN24 1

#elif (EFM8BB3_DEVICE == EFM8BB31F16G_QFN32)
#define DEVICE_DERIVID EFM8BB31F16G_QFN32
#define DEVICE_FLASH_SIZE 0x4000
#define DEVICE_XRAM_SIZE 0x0400
#define DEVICE_PKG_QFN32 1

#elif (EFM8BB3_DEVICE == EFM8BB31F16G_QFP32)
#define DEVICE_DERIVID EFM8BB31F16G_QFP32
#define DEVICE_FLASH_SIZE 0x4000
#define DEVICE_XRAM_SIZE 0x0400
#define DEVICE_PKG_QFP32 1

#elif (EFM8BB3_DEVICE == EFM8BB31F16G_QSOP24)
#define DEVICE_DERIVID EFM8BB31F16G_QSOP24
#define DEVICE_FLASH_SIZE 0x4000
#define DEVICE_XRAM_SIZE 0x0400
#define DEVICE_PKG_QSOP24 1

#elif (EFM8BB3_DEVICE == EFM8BB31F16I_QFN24)
#define DEVICE_DERIVID EFM8BB31F16I_QFN24
#define DEVICE_FLASH_SIZE 0x4000
#define DEVICE_XRAM_SIZE 0x0400
#define DEVICE_PKG_QFN24 1

#elif (EFM8BB3_DEVICE == EFM8BB31F16I_QFN32)
#define DEVICE_DERIVID EFM8BB31F16I_QFN32
#define DEVICE_FLASH_SIZE 0x4000
#define DEVICE_XRAM_SIZE 0x0400
#define DEVICE_PKG_QFN32 1

#elif (EFM8BB3_DEVICE == EFM8BB31F16I_QFP32)
#define DEVICE_DERIVID EFM8BB31F16I_QFP32
#define DEVICE_FLASH_SIZE 0x4000
#define DEVICE_XRAM_SIZE 0x0400
#define DEVICE_PKG_QFP32 1

#elif (EFM8BB3_DEVICE == EFM8BB31F16I_QSOP24)
#define DEVICE_DERIVID EFM8BB31F16I_QSOP24
#define DEVICE_FLASH_SIZE 0x4000
#define DEVICE_XRAM_SIZE 0x0400
#define DEVICE_PKG_QSOP24 1

#elif (EFM8BB3_DEVICE == EFM8BB31F32G_QFN24)
#define DEVICE_DERIVID EFM8BB31F32G_QFN24
#define DEVICE_FLASH_SIZE 0x8000
#define DEVICE_XRAM_SIZE 0x0800
#define DEVICE_PKG_QFN24 1

#elif (EFM8BB3_DEVICE == EFM8BB31F32G_QFN32)
#define DEVICE_DERIVID EFM8BB31F32G_QFN32
#define DEVICE_FLASH_SIZE 0x8000
#define DEVICE_XRAM_SIZE 0x0800
#define DEVICE_PKG_QFN32 1

#elif (EFM8BB3_DEVICE == EFM8BB31F32G_QFP32)
#define DEVICE_DERIVID EFM8BB31F32G_QFP32
#define DEVICE_FLASH_SIZE 0x8000
#define DEVICE_XRAM_SIZE 0x0800
#define DEVICE_PKG_QFP32 1

#elif (EFM8BB3_DEVICE == EFM8BB31F32G_QSOP24)
#define DEVICE_DERIVID EFM8BB31F32G_QSOP24
#define DEVICE_FLASH_SIZE 0x8000
#define DEVICE_XRAM_SIZE 0x0800
#define DEVICE_PKG_QSOP24 1

#elif (EFM8BB3_DEVICE == EFM8BB31F32I_QFN24)
#define DEVICE_DERIVID EFM8BB31F32I_QFN24
#define DEVICE_FLASH_SIZE 0x8000
#define DEVICE_XRAM_SIZE 0x0800
#define DEVICE_PKG_QFN24 1

#elif (EFM8BB3_DEVICE == EFM8BB31F32I_QFN32)
#define DEVICE_DERIVID EFM8BB31F32I_QFN32
#define DEVICE_FLASH_SIZE 0x8000
#define DEVICE_XRAM_SIZE 0x0800
#define DEVICE_PKG_QFN32 1

#elif (EFM8BB3_DEVICE == EFM8BB31F32I_QFP32)
#define DEVICE_DERIVID EFM8BB31F32I_QFP32
#define DEVICE_FLASH_SIZE 0x8000
#define DEVICE_XRAM_SIZE 0x0800
#define DEVICE_PKG_QFP32 1

#elif (EFM8BB3_DEVICE == EFM8BB31F32I_QSOP24)
#define DEVICE_DERIVID EFM8BB31F32I_QSOP24
#define DEVICE_FLASH_SIZE 0x8000
#define DEVICE_XRAM_SIZE 0x0800
#define DEVICE_PKG_QSOP24 1

#elif (EFM8BB3_DEVICE == EFM8BB31F64G_QFN24)
#define DEVICE_DERIVID EFM8BB31F64G_QFN24
#define DEVICE_FLASH_SIZE 0xFC00
#define DEVICE_XRAM_SIZE 0x1000
#define DEVICE_PKG_QFN24 1

#elif (EFM8BB3_DEVICE == EFM8BB31F64G_QFN32)
#define DEVICE_DERIVID EFM8BB31F64G_QFN32
#define DEVICE_FLASH_SIZE 0xFC00
#define DEVICE_XRAM_SIZE 0x1000
#define DEVICE_PKG_QFN32 1

#elif (EFM8BB3_DEVICE == EFM8BB31F64G_QFP32)
#define DEVICE_DERIVID EFM8BB31F64G_QFP32
#define DEVICE_FLASH_SIZE 0xFC00
#define DEVICE_XRAM_SIZE 0x1000
#define DEVICE_PKG_QFP32 1

#elif (EFM8BB3_DEVICE == EFM8BB31F64G_QSOP24)
#define DEVICE_DERIVID EFM8BB31F64G_QSOP24
#define DEVICE_FLASH_SIZE 0xFC00
#define DEVICE_XRAM_SIZE 0x1000
#define DEVICE_PKG_QSOP24 1

#elif (EFM8BB3_DEVICE == EFM8BB31F64I_QFN24)
#define DEVICE_DERIVID EFM8BB31F64I_QFN24
#define DEVICE_FLASH_SIZE 0xFC00
#define DEVICE_XRAM_SIZE 0x1000
#define DEVICE_PKG_QFN24 1

#elif (EFM8BB3_DEVICE == EFM8BB31F64I_QFN32)
#define DEVICE_DERIVID EFM8BB31F64I_QFN32
#define DEVICE_FLASH_SIZE 0xFC00
#define DEVICE_XRAM_SIZE 0x1000
#define DEVICE_PKG_QFN32 1

#elif (EFM8BB3_DEVICE == EFM8BB31F64I_QFP32)
#define DEVICE_DERIVID EFM8BB31F64I_QFP32
#define DEVICE_FLASH_SIZE 0xFC00
#define DEVICE_XRAM_SIZE 0x1000
#define DEVICE_PKG_QFP32 1

#elif (EFM8BB3_DEVICE == EFM8BB31F64I_QSOP24)
#define DEVICE_DERIVID EFM8BB31F64I_QSOP24
#define DEVICE_FLASH_SIZE 0xFC00
#define DEVICE_XRAM_SIZE 0x1000
#define DEVICE_PKG_QSOP24 1

#endif

#endif // SI_EFM8BB3_DEVICES_H

//-eof--------------------------------------------------------------------------

