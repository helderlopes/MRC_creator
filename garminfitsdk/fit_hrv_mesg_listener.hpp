////////////////////////////////////////////////////////////////////////////////
// The following FIT Protocol software provided may be used with FIT protocol
// devices only and remains the copyrighted property of Garmin Canada Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2019 Garmin Canada Inc.
////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 20.94Release
// Tag = production/akw/20.94.00-0-g9f67a9c
////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_HRV_MESG_LISTENER_HPP)
#define FIT_HRV_MESG_LISTENER_HPP

#include "fit_hrv_mesg.hpp"

namespace fit
{

class HrvMesgListener
{
public:
    virtual ~HrvMesgListener() {}
    virtual void OnMesg(HrvMesg& mesg) = 0;
};

} // namespace fit

#endif // !defined(FIT_HRV_MESG_LISTENER_HPP)
