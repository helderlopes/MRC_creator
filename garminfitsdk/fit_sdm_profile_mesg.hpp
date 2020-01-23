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
// Profile Version = 21.20Release
// Tag = production/akw/21.20.00-0-g5907bff
////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_SDM_PROFILE_MESG_HPP)
#define FIT_SDM_PROFILE_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class SdmProfileMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 MessageIndex = 254;
       static const FIT_UINT8 Enabled = 0;
       static const FIT_UINT8 SdmAntId = 1;
       static const FIT_UINT8 SdmCalFactor = 2;
       static const FIT_UINT8 Odometer = 3;
       static const FIT_UINT8 SpeedSource = 4;
       static const FIT_UINT8 SdmAntIdTransType = 5;
       static const FIT_UINT8 OdometerRollover = 7;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    SdmProfileMesg(void) : Mesg(Profile::MESG_SDM_PROFILE)
    {
    }

    SdmProfileMesg(const Mesg &mesg) : Mesg(mesg)
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of message_index field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsMessageIndexValid() const
    {
        const Field* field = GetField(254);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns message_index field
    ///////////////////////////////////////////////////////////////////////
    FIT_MESSAGE_INDEX GetMessageIndex(void) const
    {
        return GetFieldUINT16Value(254, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set message_index field
    ///////////////////////////////////////////////////////////////////////
    void SetMessageIndex(FIT_MESSAGE_INDEX messageIndex)
    {
        SetFieldUINT16Value(254, messageIndex, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of enabled field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsEnabledValid() const
    {
        const Field* field = GetField(0);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns enabled field
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL GetEnabled(void) const
    {
        return GetFieldENUMValue(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set enabled field
    ///////////////////////////////////////////////////////////////////////
    void SetEnabled(FIT_BOOL enabled)
    {
        SetFieldENUMValue(0, enabled, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of sdm_ant_id field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsSdmAntIdValid() const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns sdm_ant_id field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16Z GetSdmAntId(void) const
    {
        return GetFieldUINT16ZValue(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set sdm_ant_id field
    ///////////////////////////////////////////////////////////////////////
    void SetSdmAntId(FIT_UINT16Z sdmAntId)
    {
        SetFieldUINT16ZValue(1, sdmAntId, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of sdm_cal_factor field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsSdmCalFactorValid() const
    {
        const Field* field = GetField(2);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns sdm_cal_factor field
    // Units: %
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetSdmCalFactor(void) const
    {
        return GetFieldFLOAT32Value(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set sdm_cal_factor field
    // Units: %
    ///////////////////////////////////////////////////////////////////////
    void SetSdmCalFactor(FIT_FLOAT32 sdmCalFactor)
    {
        SetFieldFLOAT32Value(2, sdmCalFactor, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of odometer field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsOdometerValid() const
    {
        const Field* field = GetField(3);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns odometer field
    // Units: m
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetOdometer(void) const
    {
        return GetFieldFLOAT32Value(3, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set odometer field
    // Units: m
    ///////////////////////////////////////////////////////////////////////
    void SetOdometer(FIT_FLOAT32 odometer)
    {
        SetFieldFLOAT32Value(3, odometer, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of speed_source field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsSpeedSourceValid() const
    {
        const Field* field = GetField(4);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns speed_source field
    // Comment: Use footpod for speed source instead of GPS
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL GetSpeedSource(void) const
    {
        return GetFieldENUMValue(4, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set speed_source field
    // Comment: Use footpod for speed source instead of GPS
    ///////////////////////////////////////////////////////////////////////
    void SetSpeedSource(FIT_BOOL speedSource)
    {
        SetFieldENUMValue(4, speedSource, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of sdm_ant_id_trans_type field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsSdmAntIdTransTypeValid() const
    {
        const Field* field = GetField(5);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns sdm_ant_id_trans_type field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8Z GetSdmAntIdTransType(void) const
    {
        return GetFieldUINT8ZValue(5, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set sdm_ant_id_trans_type field
    ///////////////////////////////////////////////////////////////////////
    void SetSdmAntIdTransType(FIT_UINT8Z sdmAntIdTransType)
    {
        SetFieldUINT8ZValue(5, sdmAntIdTransType, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of odometer_rollover field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsOdometerRolloverValid() const
    {
        const Field* field = GetField(7);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns odometer_rollover field
    // Comment: Rollover counter that can be used to extend the odometer
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetOdometerRollover(void) const
    {
        return GetFieldUINT8Value(7, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set odometer_rollover field
    // Comment: Rollover counter that can be used to extend the odometer
    ///////////////////////////////////////////////////////////////////////
    void SetOdometerRollover(FIT_UINT8 odometerRollover)
    {
        SetFieldUINT8Value(7, odometerRollover, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_SDM_PROFILE_MESG_HPP)
