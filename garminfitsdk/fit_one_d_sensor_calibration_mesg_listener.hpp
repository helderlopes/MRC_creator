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


#if !defined(FIT_ONE_D_SENSOR_CALIBRATION_MESG_LISTENER_HPP)
#define FIT_ONE_D_SENSOR_CALIBRATION_MESG_LISTENER_HPP

#include "fit_one_d_sensor_calibration_mesg.hpp"

namespace fit
{

class OneDSensorCalibrationMesgListener
{
public:
    virtual ~OneDSensorCalibrationMesgListener() {}
    virtual void OnMesg(OneDSensorCalibrationMesg& mesg) = 0;
};

} // namespace fit

#endif // !defined(FIT_ONE_D_SENSOR_CALIBRATION_MESG_LISTENER_HPP)
