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


#if !defined(FIT_WORKOUT_MESG_HPP)
#define FIT_WORKOUT_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class WorkoutMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 Sport = 4;
       static const FIT_UINT8 Capabilities = 5;
       static const FIT_UINT8 NumValidSteps = 6;
       static const FIT_UINT8 WktName = 8;
       static const FIT_UINT8 SubSport = 11;
       static const FIT_UINT8 PoolLength = 14;
       static const FIT_UINT8 PoolLengthUnit = 15;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    WorkoutMesg(void) : Mesg(Profile::MESG_WORKOUT)
    {
    }

    WorkoutMesg(const Mesg &mesg) : Mesg(mesg)
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of sport field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsSportValid() const
    {
        const Field* field = GetField(4);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns sport field
    ///////////////////////////////////////////////////////////////////////
    FIT_SPORT GetSport(void) const
    {
        return GetFieldENUMValue(4, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set sport field
    ///////////////////////////////////////////////////////////////////////
    void SetSport(FIT_SPORT sport)
    {
        SetFieldENUMValue(4, sport, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of capabilities field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsCapabilitiesValid() const
    {
        const Field* field = GetField(5);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns capabilities field
    ///////////////////////////////////////////////////////////////////////
    FIT_WORKOUT_CAPABILITIES GetCapabilities(void) const
    {
        return GetFieldUINT32ZValue(5, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set capabilities field
    ///////////////////////////////////////////////////////////////////////
    void SetCapabilities(FIT_WORKOUT_CAPABILITIES capabilities)
    {
        SetFieldUINT32ZValue(5, capabilities, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of num_valid_steps field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsNumValidStepsValid() const
    {
        const Field* field = GetField(6);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns num_valid_steps field
    // Comment: number of valid steps
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetNumValidSteps(void) const
    {
        return GetFieldUINT16Value(6, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set num_valid_steps field
    // Comment: number of valid steps
    ///////////////////////////////////////////////////////////////////////
    void SetNumValidSteps(FIT_UINT16 numValidSteps)
    {
        SetFieldUINT16Value(6, numValidSteps, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of wkt_name field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsWktNameValid() const
    {
        const Field* field = GetField(8);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns wkt_name field
    ///////////////////////////////////////////////////////////////////////
    FIT_WSTRING GetWktName(void) const
    {
        return GetFieldSTRINGValue(8, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set wkt_name field
    ///////////////////////////////////////////////////////////////////////
    void SetWktName(FIT_WSTRING wktName)
    {
        SetFieldSTRINGValue(8, wktName, 0);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of sub_sport field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsSubSportValid() const
    {
        const Field* field = GetField(11);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns sub_sport field
    ///////////////////////////////////////////////////////////////////////
    FIT_SUB_SPORT GetSubSport(void) const
    {
        return GetFieldENUMValue(11, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set sub_sport field
    ///////////////////////////////////////////////////////////////////////
    void SetSubSport(FIT_SUB_SPORT subSport)
    {
        SetFieldENUMValue(11, subSport, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of pool_length field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsPoolLengthValid() const
    {
        const Field* field = GetField(14);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns pool_length field
    // Units: m
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetPoolLength(void) const
    {
        return GetFieldFLOAT32Value(14, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set pool_length field
    // Units: m
    ///////////////////////////////////////////////////////////////////////
    void SetPoolLength(FIT_FLOAT32 poolLength)
    {
        SetFieldFLOAT32Value(14, poolLength, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of pool_length_unit field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsPoolLengthUnitValid() const
    {
        const Field* field = GetField(15);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns pool_length_unit field
    ///////////////////////////////////////////////////////////////////////
    FIT_DISPLAY_MEASURE GetPoolLengthUnit(void) const
    {
        return GetFieldENUMValue(15, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set pool_length_unit field
    ///////////////////////////////////////////////////////////////////////
    void SetPoolLengthUnit(FIT_DISPLAY_MEASURE poolLengthUnit)
    {
        SetFieldENUMValue(15, poolLengthUnit, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_WORKOUT_MESG_HPP)
