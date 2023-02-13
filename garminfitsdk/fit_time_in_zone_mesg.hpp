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


#if !defined(FIT_TIME_IN_ZONE_MESG_HPP)
#define FIT_TIME_IN_ZONE_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class TimeInZoneMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 Timestamp = 253;
       static const FIT_UINT8 ReferenceMesg = 0;
       static const FIT_UINT8 ReferenceIndex = 1;
       static const FIT_UINT8 TimeInHrZone = 2;
       static const FIT_UINT8 TimeInSpeedZone = 3;
       static const FIT_UINT8 TimeInCadenceZone = 4;
       static const FIT_UINT8 TimeInPowerZone = 5;
       static const FIT_UINT8 HrZoneHighBoundary = 6;
       static const FIT_UINT8 SpeedZoneHighBoundary = 7;
       static const FIT_UINT8 CadenceZoneHighBondary = 8;
       static const FIT_UINT8 PowerZoneHighBoundary = 9;
       static const FIT_UINT8 HrCalcType = 10;
       static const FIT_UINT8 MaxHeartRate = 11;
       static const FIT_UINT8 RestingHeartRate = 12;
       static const FIT_UINT8 ThresholdHeartRate = 13;
       static const FIT_UINT8 PwrCalcType = 14;
       static const FIT_UINT8 FunctionalThresholdPower = 15;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    TimeInZoneMesg(void) : Mesg(Profile::MESG_TIME_IN_ZONE)
    {
    }

    TimeInZoneMesg(const Mesg &mesg) : Mesg(mesg)
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of timestamp field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTimestampValid() const
    {
        const Field* field = GetField(253);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns timestamp field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    FIT_DATE_TIME GetTimestamp(void) const
    {
        return GetFieldUINT32Value(253, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set timestamp field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    void SetTimestamp(FIT_DATE_TIME timestamp)
    {
        SetFieldUINT32Value(253, timestamp, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of reference_mesg field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsReferenceMesgValid() const
    {
        const Field* field = GetField(0);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns reference_mesg field
    ///////////////////////////////////////////////////////////////////////
    FIT_MESG_NUM GetReferenceMesg(void) const
    {
        return GetFieldUINT16Value(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set reference_mesg field
    ///////////////////////////////////////////////////////////////////////
    void SetReferenceMesg(FIT_MESG_NUM referenceMesg)
    {
        SetFieldUINT16Value(0, referenceMesg, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of reference_index field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsReferenceIndexValid() const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns reference_index field
    ///////////////////////////////////////////////////////////////////////
    FIT_MESSAGE_INDEX GetReferenceIndex(void) const
    {
        return GetFieldUINT16Value(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set reference_index field
    ///////////////////////////////////////////////////////////////////////
    void SetReferenceIndex(FIT_MESSAGE_INDEX referenceIndex)
    {
        SetFieldUINT16Value(1, referenceIndex, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of time_in_hr_zone
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumTimeInHrZone(void) const
    {
        return GetFieldNumValues(2, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of time_in_hr_zone field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTimeInHrZoneValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(2);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns time_in_hr_zone field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetTimeInHrZone(FIT_UINT8 index) const
    {
        return GetFieldFLOAT32Value(2, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set time_in_hr_zone field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    void SetTimeInHrZone(FIT_UINT8 index, FIT_FLOAT32 timeInHrZone)
    {
        SetFieldFLOAT32Value(2, timeInHrZone, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of time_in_speed_zone
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumTimeInSpeedZone(void) const
    {
        return GetFieldNumValues(3, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of time_in_speed_zone field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTimeInSpeedZoneValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(3);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns time_in_speed_zone field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetTimeInSpeedZone(FIT_UINT8 index) const
    {
        return GetFieldFLOAT32Value(3, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set time_in_speed_zone field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    void SetTimeInSpeedZone(FIT_UINT8 index, FIT_FLOAT32 timeInSpeedZone)
    {
        SetFieldFLOAT32Value(3, timeInSpeedZone, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of time_in_cadence_zone
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumTimeInCadenceZone(void) const
    {
        return GetFieldNumValues(4, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of time_in_cadence_zone field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTimeInCadenceZoneValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(4);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns time_in_cadence_zone field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetTimeInCadenceZone(FIT_UINT8 index) const
    {
        return GetFieldFLOAT32Value(4, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set time_in_cadence_zone field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    void SetTimeInCadenceZone(FIT_UINT8 index, FIT_FLOAT32 timeInCadenceZone)
    {
        SetFieldFLOAT32Value(4, timeInCadenceZone, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of time_in_power_zone
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumTimeInPowerZone(void) const
    {
        return GetFieldNumValues(5, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of time_in_power_zone field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTimeInPowerZoneValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(5);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns time_in_power_zone field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetTimeInPowerZone(FIT_UINT8 index) const
    {
        return GetFieldFLOAT32Value(5, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set time_in_power_zone field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    void SetTimeInPowerZone(FIT_UINT8 index, FIT_FLOAT32 timeInPowerZone)
    {
        SetFieldFLOAT32Value(5, timeInPowerZone, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of hr_zone_high_boundary
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumHrZoneHighBoundary(void) const
    {
        return GetFieldNumValues(6, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of hr_zone_high_boundary field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsHrZoneHighBoundaryValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(6);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns hr_zone_high_boundary field
    // Units: bpm
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetHrZoneHighBoundary(FIT_UINT8 index) const
    {
        return GetFieldUINT8Value(6, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set hr_zone_high_boundary field
    // Units: bpm
    ///////////////////////////////////////////////////////////////////////
    void SetHrZoneHighBoundary(FIT_UINT8 index, FIT_UINT8 hrZoneHighBoundary)
    {
        SetFieldUINT8Value(6, hrZoneHighBoundary, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of speed_zone_high_boundary
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumSpeedZoneHighBoundary(void) const
    {
        return GetFieldNumValues(7, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of speed_zone_high_boundary field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsSpeedZoneHighBoundaryValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(7);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns speed_zone_high_boundary field
    // Units: m/s
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetSpeedZoneHighBoundary(FIT_UINT8 index) const
    {
        return GetFieldFLOAT32Value(7, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set speed_zone_high_boundary field
    // Units: m/s
    ///////////////////////////////////////////////////////////////////////
    void SetSpeedZoneHighBoundary(FIT_UINT8 index, FIT_FLOAT32 speedZoneHighBoundary)
    {
        SetFieldFLOAT32Value(7, speedZoneHighBoundary, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of cadence_zone_high_bondary
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumCadenceZoneHighBondary(void) const
    {
        return GetFieldNumValues(8, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of cadence_zone_high_bondary field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsCadenceZoneHighBondaryValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(8);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns cadence_zone_high_bondary field
    // Units: rpm
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetCadenceZoneHighBondary(FIT_UINT8 index) const
    {
        return GetFieldUINT8Value(8, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set cadence_zone_high_bondary field
    // Units: rpm
    ///////////////////////////////////////////////////////////////////////
    void SetCadenceZoneHighBondary(FIT_UINT8 index, FIT_UINT8 cadenceZoneHighBondary)
    {
        SetFieldUINT8Value(8, cadenceZoneHighBondary, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of power_zone_high_boundary
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumPowerZoneHighBoundary(void) const
    {
        return GetFieldNumValues(9, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of power_zone_high_boundary field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsPowerZoneHighBoundaryValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(9);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns power_zone_high_boundary field
    // Units: watts
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetPowerZoneHighBoundary(FIT_UINT8 index) const
    {
        return GetFieldUINT16Value(9, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set power_zone_high_boundary field
    // Units: watts
    ///////////////////////////////////////////////////////////////////////
    void SetPowerZoneHighBoundary(FIT_UINT8 index, FIT_UINT16 powerZoneHighBoundary)
    {
        SetFieldUINT16Value(9, powerZoneHighBoundary, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of hr_calc_type field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsHrCalcTypeValid() const
    {
        const Field* field = GetField(10);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns hr_calc_type field
    ///////////////////////////////////////////////////////////////////////
    FIT_HR_ZONE_CALC GetHrCalcType(void) const
    {
        return GetFieldENUMValue(10, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set hr_calc_type field
    ///////////////////////////////////////////////////////////////////////
    void SetHrCalcType(FIT_HR_ZONE_CALC hrCalcType)
    {
        SetFieldENUMValue(10, hrCalcType, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of max_heart_rate field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsMaxHeartRateValid() const
    {
        const Field* field = GetField(11);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns max_heart_rate field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetMaxHeartRate(void) const
    {
        return GetFieldUINT8Value(11, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set max_heart_rate field
    ///////////////////////////////////////////////////////////////////////
    void SetMaxHeartRate(FIT_UINT8 maxHeartRate)
    {
        SetFieldUINT8Value(11, maxHeartRate, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of resting_heart_rate field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsRestingHeartRateValid() const
    {
        const Field* field = GetField(12);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns resting_heart_rate field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetRestingHeartRate(void) const
    {
        return GetFieldUINT8Value(12, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set resting_heart_rate field
    ///////////////////////////////////////////////////////////////////////
    void SetRestingHeartRate(FIT_UINT8 restingHeartRate)
    {
        SetFieldUINT8Value(12, restingHeartRate, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of threshold_heart_rate field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsThresholdHeartRateValid() const
    {
        const Field* field = GetField(13);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns threshold_heart_rate field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetThresholdHeartRate(void) const
    {
        return GetFieldUINT8Value(13, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set threshold_heart_rate field
    ///////////////////////////////////////////////////////////////////////
    void SetThresholdHeartRate(FIT_UINT8 thresholdHeartRate)
    {
        SetFieldUINT8Value(13, thresholdHeartRate, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of pwr_calc_type field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsPwrCalcTypeValid() const
    {
        const Field* field = GetField(14);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns pwr_calc_type field
    ///////////////////////////////////////////////////////////////////////
    FIT_PWR_ZONE_CALC GetPwrCalcType(void) const
    {
        return GetFieldENUMValue(14, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set pwr_calc_type field
    ///////////////////////////////////////////////////////////////////////
    void SetPwrCalcType(FIT_PWR_ZONE_CALC pwrCalcType)
    {
        SetFieldENUMValue(14, pwrCalcType, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of functional_threshold_power field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsFunctionalThresholdPowerValid() const
    {
        const Field* field = GetField(15);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns functional_threshold_power field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetFunctionalThresholdPower(void) const
    {
        return GetFieldUINT16Value(15, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set functional_threshold_power field
    ///////////////////////////////////////////////////////////////////////
    void SetFunctionalThresholdPower(FIT_UINT16 functionalThresholdPower)
    {
        SetFieldUINT16Value(15, functionalThresholdPower, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_TIME_IN_ZONE_MESG_HPP)
