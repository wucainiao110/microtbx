/************************************************************************************//**
* \file         microtbx.h
* \brief        MicroTBX global header file.
* \internal
*----------------------------------------------------------------------------------------
*                          C O P Y R I G H T
*----------------------------------------------------------------------------------------
*   Copyright (c) 2019  by Feaser    http://www.feaser.com    All rights reserved
*
*----------------------------------------------------------------------------------------
*                            L I C E N S E
*----------------------------------------------------------------------------------------
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
* \endinternal
****************************************************************************************/
#ifndef MICROTBX_H
#define MICROTBX_H

/****************************************************************************************
* Include files
****************************************************************************************/
/* Note that it is possible to override the standard tbx_conf.h configuration header
 * file with a project specific one that is defined in the IDE/makefile. For example,
 * the following define could be configured: PROJ_TBX_CONF_H="my_tbx_config.h". This can
 * be handy if you use MicroTBX in several projects with a different configuration,
 * and enables you to have just one MicroTBX source base.
 */
#include <stdint.h>                         /* Standard integer types                  */
#include <stddef.h>                         /* Standard definitions                    */
#ifdef PROJ_TBX_CONF_H
#include PROJ_TBX_CONF_H                    /* Custom MicroTBX configuration file      */
#else
#include "tbx_conf.h"                       /* Standard MicroTBX configuration file    */
#endif /* PROJ_TBX_CONF_H */
#include "tbxassert.h"                      /* Run-time assertions                     */


#ifdef __cplusplus
extern "C" {
#endif
/****************************************************************************************
* Macro definitions
****************************************************************************************/
/** \brief Boolean true value. */
#define TBX_TRUE       (1u)

/** \brief Boolean false value. */
#define TBX_FALSE      (0u)

/** \brief Macro to flag a function parameter as unused, which allows the associated
 *         lint message and/or compiler warning to be suppressed.
 */
/*lint !e9026 */
#define TBX_UNUSED_ARG(x) (void)x


#ifdef __cplusplus
}
#endif

#endif /* MICROTBX_H */
/*********************************** end of microtbx.h *********************************/