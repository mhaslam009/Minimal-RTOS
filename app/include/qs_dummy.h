//$file${include::qs_dummy.h} vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv
//
// Model: qpc.qm
// File:  ${include::qs_dummy.h}
//
// This code has been generated by QM 5.3.0 <www.state-machine.com/qm>.
// DO NOT EDIT THIS FILE MANUALLY. All your changes will be lost.
//
// This code is covered by the following QP license:
// License #    : LicenseRef-QL-dual
// Issued to    : Any user of the QP/C real-time embedded framework
// Framework(s) : qpc
// Support ends : 2024-12-31
// License scope:
//
// Copyright (C) 2005 Quantum Leaps, LLC <state-machine.com>.
//
//                    Q u a n t u m  L e a P s
//                    ------------------------
//                    Modern Embedded Software
//
// SPDX-License-Identifier: GPL-3.0-or-later OR LicenseRef-QL-commercial
//
// This software is dual-licensed under the terms of the open source GNU
// General Public License version 3 (or any later version), or alternatively,
// under the terms of one of the closed source Quantum Leaps commercial
// licenses.
//
// The terms of the open source GNU General Public License version 3
// can be found at: <www.gnu.org/licenses/gpl-3.0>
//
// The terms of the closed source Quantum Leaps commercial licenses
// can be found at: <www.state-machine.com/licensing>
//
// Redistributions in source code must retain this top-level comment block.
// Plagiarizing this software to sidestep the license obligations is illegal.
//
// Contact information:
// <www.state-machine.com/licensing>
// <info@state-machine.com>
//
//$endhead${include::qs_dummy.h} ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
#ifndef QS_DUMMY_H_
#define QS_DUMMY_H_

#ifdef Q_SPY
    #error "Q_SPY must NOT be defined to include qs_dummy.h"
#endif

#ifdef Q_UTEST
    #error "Q_UTEST must NOT be defined to include qs_dummy.h"
#endif

#define QS_INIT(arg_)                   ((uint8_t)1U)
#define QS_EXIT()                       ((void)0)
#define QS_DUMP()                       ((void)0)
#define QS_GLB_FILTER(rec_)             ((void)0)
#define QS_LOC_FILTER(qs_id_)           ((void)0)

#define QS_GET_BYTE(pByte_)             ((uint16_t)0xFFFFU)
#define QS_GET_BLOCK(pSize_)            ((uint8_t *)0)

#define QS_BEGIN_ID(rec_, qs_id_)       if (false) {
#define QS_END()                        }
#define QS_BEGIN_INCRIT(rec_, qs_id_)   if (false) {
#define QS_END_INCRIT()                 }

#define QS_I8(width_, data_)            ((void)0)
#define QS_U8(width_, data_)            ((void)0)
#define QS_I16(width_, data_)           ((void)0)
#define QS_U16(width_, data_)           ((void)0)
#define QS_I32(width_, data_)           ((void)0)
#define QS_U32(width_, data_)           ((void)0)
#define QS_F32(width_, data_)           ((void)0)
#define QS_F64(width_, data_)           ((void)0)
#define QS_I64(width_, data_)           ((void)0)
#define QS_U64(width_, data_)           ((void)0)
#define QS_ENUM(group_, value_)         ((void)0)
#define QS_STR(str_)                    ((void)0)
#define QS_MEM(mem_, size_)             ((void)0)
#define QS_SIG(sig_, obj_)              ((void)0)
#define QS_OBJ(obj_)                    ((void)0)
#define QS_FUN(fun_)                    ((void)0)

#define QS_SIG_DICTIONARY(sig_, obj_)   ((void)0)
#define QS_OBJ_DICTIONARY(obj_)         ((void)0)
#define QS_OBJ_ARR_DICTIONARY(obj_, idx_) ((void)0)
#define QS_FUN_DICTIONARY(fun_)         ((void)0)
#define QS_USR_DICTIONARY(rec_)         ((void)0)
#define QS_ENUM_DICTIONARY(value_, group_)  ((void)0)
#define QS_ASSERTION(module_, loc_, delay_) ((void)0)
#define QS_FLUSH()                      ((void)0)

#define QS_TEST_PROBE_DEF(fun_)
#define QS_TEST_PROBE(code_)
#define QS_TEST_PROBE_ID(id_, code_)
#define QS_TEST_PAUSE()                 ((void)0)

#define QS_OUTPUT()                     ((void)0)
#define QS_RX_INPUT()                   ((void)0)
#define QS_ONLY(code_)                  ((void)0)

//============================================================================
// interface used only for internal implementation, but not in applications
#ifdef QP_IMPL
    // predefined QS trace records
    #define QS_BEGIN_PRE_(rec_, qs_id_) if (false) {
    #define QS_END_PRE_()        }
    #define QS_U8_PRE_(data_)           ((void)0)
    #define QS_2U8_PRE_(data1_, data2_) ((void)0)
    #define QS_U16_PRE_(data_)          ((void)0)
    #define QS_U32_PRE_(data_)          ((void)0)
    #define QS_TIME_PRE_()              ((void)0)
    #define QS_SIG_PRE_(sig_)           ((void)0)
    #define QS_EVS_PRE_(size_)          ((void)0)
    #define QS_OBJ_PRE_(obj_)           ((void)0)
    #define QS_FUN_PRE_(fun_)           ((void)0)
    #define QS_EQC_PRE_(ctr_)           ((void)0)
    #define QS_MPC_PRE_(ctr_)           ((void)0)
    #define QS_MPS_PRE_(size_)          ((void)0)
    #define QS_TEC_PRE_(ctr_)           ((void)0)

    #define QS_CRIT_STAT
    #define QS_CRIT_ENTRY()             ((void)0)
    #define QS_CRIT_EXIT()              ((void)0)

    #define QS_MEM_SYS()                ((void)0)
    #define QS_MEM_APP()                ((void)0)

    #define QS_TR_CRIT_ENTRY()          ((void)0)
    #define QS_TR_CRIT_EXIT()           ((void)0)
    #define QS_TR_ISR_ENTRY(isrnest_, prio_) ((void)0)
    #define QS_TR_ISR_EXIT(isrnest_, prio_)  ((void)0)
#endif // QP_IMPL

#endif // QS_DUMMY_H_
