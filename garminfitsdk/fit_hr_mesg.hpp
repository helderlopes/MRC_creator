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


#if !defined(FIT_HR_MESG_HPP)
#define FIT_HR_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class HrMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 Timestamp = 253;
       static const FIT_UINT8 FractionalTimestamp = 0;
       static const FIT_UINT8 Time256 = 1;
       static const FIT_UINT8 FilteredBpm = 6;
       static const FIT_UINT8 EventTimestamp = 9;
       static const FIT_UINT8 EventTimestamp12 = 10;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    HrMesg(void) : Mesg(Profile::MESG_HR)
    {
    }

    HrMesg(const Mesg &mesg) : Mesg(mesg)
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
    ///////////////////////////////////////////////////////////////////////
    FIT_DATE_TIME GetTimestamp(void) const
    {
        return GetFieldUINT32Value(253, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set timestamp field
    ///////////////////////////////////////////////////////////////////////
    void SetTimestamp(FIT_DATE_TIME timestamp)
    {
        SetFieldUINT32Value(253, timestamp, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of fractional_timestamp field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsFractionalTimestampValid() const
    {
        const Field* field = GetField(0);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns fractional_timestamp field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetFractionalTimestamp(void) const
    {
        return GetFieldFLOAT32Value(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set fractional_timestamp field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    void SetFractionalTimestamp(FIT_FLOAT32 fractionalTimestamp)
    {
        SetFieldFLOAT32Value(0, fractionalTimestamp, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of time256 field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTime256Valid() const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns time256 field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetTime256(void) const
    {
        return GetFieldFLOAT32Value(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set time256 field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    void SetTime256(FIT_FLOAT32 time256)
    {
        SetFieldFLOAT32Value(1, time256, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of filtered_bpm
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumFilteredBpm(void) const
    {
        return GetFieldNumValues(6, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of filtered_bpm field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsFilteredBpmValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(6);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns filtered_bpm field
    // Units: bpm
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetFilteredBpm(FIT_UINT8 index) const
    {
        return GetFieldUINT8Value(6, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set filtered_bpm field
    // Units: bpm
    ///////////////////////////////////////////////////////////////////////
    void SetFilteredBpm(FIT_UINT8 index, FIT_UINT8 filteredBpm)
    {
        SetFieldUINT8Value(6, filteredBpm, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of event_timestamp
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumEventTimestamp(void) const
    {
        return GetFieldNumValues(9, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of event_timestamp field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsEventTimestampValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(9);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns event_timestamp field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetEventTimestamp(FIT_UINT8 index) const
    {
        return GetFieldFLOAT32Value(9, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set event_timestamp field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    void SetEventTimestamp(FIT_UINT8 index, FIT_FLOAT32 eventTimestamp)
    {
        SetFieldFLOAT32Value(9, eventTimestamp, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of event_timestamp_12
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumEventTimestamp12(void) const
    {
        return GetFieldNumValues(10, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of event_timestamp_12 field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsEventTimestamp12Valid(FIT_UINT8 index) const
    {
        const Field* field = GetField(10);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns event_timestamp_12 field
    ///////////////////////////////////////////////////////////////////////
    FIT_BYTE GetEventTimestamp12(FIT_UINT8 index) const
    {
        return GetFieldBYTEValue(10, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set event_timestamp_12 field
    ///////////////////////////////////////////////////////////////////////
    void SetEventTimestamp12(FIT_UINT8 index, FIT_BYTE eventTimestamp12)
    {
        SetFieldBYTEValue(10, eventTimestamp12, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_HR_MESG_HPP)
