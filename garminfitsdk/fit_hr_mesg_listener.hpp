////////////////////////////////////////////////////////////////////////////////
// The following FIT Protocol software provided may be used with FIT protocol
// devices only and remains the copyrighted property of Garmin Canada Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2021 Garmin Canada Inc.
////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.54Release
// Tag = production/akw/21.54.01-0-g081c465c
////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_HR_MESG_LISTENER_HPP)
#define FIT_HR_MESG_LISTENER_HPP

#include "fit_hr_mesg.hpp"

namespace fit
{

class HrMesgListener
{
public:
    virtual ~HrMesgListener() {}
    virtual void OnMesg(HrMesg& mesg) = 0;
};

} // namespace fit

#endif // !defined(FIT_HR_MESG_LISTENER_HPP)
