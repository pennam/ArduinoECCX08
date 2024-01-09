/*
  This file is part of the ArduinoECCX08 library.
  Copyright (c) 2023 Arduino SA. All rights reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _ECCX08_UTILS_CONFIG_H_
#define _ECCX08_UTILS_CONFIG_H_

#if defined __has_include
  #if !__has_include ("ArduinoIoTCloud.h")
    #define ECCX08_ENABLE_ASN1 1
    #define ECCX08_ENABLE_CSR  1
    #define ECCX08_ENABLE_JWS  1
    #define ECCX08_ENABLE_SSC  1
    #define ECCX08_ENABLE_PEM  1
  #endif
#else
  #define ECCX08_ENABLE_ASN1 1
  #define ECCX08_ENABLE_CSR  1
  #define ECCX08_ENABLE_JWS  1
  #define ECCX08_ENABLE_SSC  1
  #define ECCX08_ENABLE_PEM  1
#endif

#endif
