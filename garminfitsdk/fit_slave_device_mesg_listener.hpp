/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2023 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.101Release
// Tag = production/release/21.101.00-0-gceb92d5
/////////////////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_SLAVE_DEVICE_MESG_LISTENER_HPP)
#define FIT_SLAVE_DEVICE_MESG_LISTENER_HPP

#include "fit_slave_device_mesg.hpp"

namespace fit
{

class SlaveDeviceMesgListener
{
public:
    virtual ~SlaveDeviceMesgListener() {}
    virtual void OnMesg(SlaveDeviceMesg& mesg) = 0;
};

} // namespace fit

#endif // !defined(FIT_SLAVE_DEVICE_MESG_LISTENER_HPP)
