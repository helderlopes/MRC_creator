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


#if !defined(FIT_BIKE_PROFILE_MESG_HPP)
#define FIT_BIKE_PROFILE_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class BikeProfileMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 MessageIndex = 254;
       static const FIT_UINT8 Name = 0;
       static const FIT_UINT8 Sport = 1;
       static const FIT_UINT8 SubSport = 2;
       static const FIT_UINT8 Odometer = 3;
       static const FIT_UINT8 BikeSpdAntId = 4;
       static const FIT_UINT8 BikeCadAntId = 5;
       static const FIT_UINT8 BikeSpdcadAntId = 6;
       static const FIT_UINT8 BikePowerAntId = 7;
       static const FIT_UINT8 CustomWheelsize = 8;
       static const FIT_UINT8 AutoWheelsize = 9;
       static const FIT_UINT8 BikeWeight = 10;
       static const FIT_UINT8 PowerCalFactor = 11;
       static const FIT_UINT8 AutoWheelCal = 12;
       static const FIT_UINT8 AutoPowerZero = 13;
       static const FIT_UINT8 Id = 14;
       static const FIT_UINT8 SpdEnabled = 15;
       static const FIT_UINT8 CadEnabled = 16;
       static const FIT_UINT8 SpdcadEnabled = 17;
       static const FIT_UINT8 PowerEnabled = 18;
       static const FIT_UINT8 CrankLength = 19;
       static const FIT_UINT8 Enabled = 20;
       static const FIT_UINT8 BikeSpdAntIdTransType = 21;
       static const FIT_UINT8 BikeCadAntIdTransType = 22;
       static const FIT_UINT8 BikeSpdcadAntIdTransType = 23;
       static const FIT_UINT8 BikePowerAntIdTransType = 24;
       static const FIT_UINT8 OdometerRollover = 37;
       static const FIT_UINT8 FrontGearNum = 38;
       static const FIT_UINT8 FrontGear = 39;
       static const FIT_UINT8 RearGearNum = 40;
       static const FIT_UINT8 RearGear = 41;
       static const FIT_UINT8 ShimanoDi2Enabled = 44;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    BikeProfileMesg(void) : Mesg(Profile::MESG_BIKE_PROFILE)
    {
    }

    BikeProfileMesg(const Mesg &mesg) : Mesg(mesg)
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
    // Checks the validity of name field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsNameValid() const
    {
        const Field* field = GetField(0);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns name field
    ///////////////////////////////////////////////////////////////////////
    FIT_WSTRING GetName(void) const
    {
        return GetFieldSTRINGValue(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set name field
    ///////////////////////////////////////////////////////////////////////
    void SetName(FIT_WSTRING name)
    {
        SetFieldSTRINGValue(0, name, 0);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of sport field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsSportValid() const
    {
        const Field* field = GetField(1);
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
        return GetFieldENUMValue(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set sport field
    ///////////////////////////////////////////////////////////////////////
    void SetSport(FIT_SPORT sport)
    {
        SetFieldENUMValue(1, sport, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of sub_sport field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsSubSportValid() const
    {
        const Field* field = GetField(2);
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
        return GetFieldENUMValue(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set sub_sport field
    ///////////////////////////////////////////////////////////////////////
    void SetSubSport(FIT_SUB_SPORT subSport)
    {
        SetFieldENUMValue(2, subSport, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
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
    // Checks the validity of bike_spd_ant_id field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsBikeSpdAntIdValid() const
    {
        const Field* field = GetField(4);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns bike_spd_ant_id field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16Z GetBikeSpdAntId(void) const
    {
        return GetFieldUINT16ZValue(4, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set bike_spd_ant_id field
    ///////////////////////////////////////////////////////////////////////
    void SetBikeSpdAntId(FIT_UINT16Z bikeSpdAntId)
    {
        SetFieldUINT16ZValue(4, bikeSpdAntId, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of bike_cad_ant_id field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsBikeCadAntIdValid() const
    {
        const Field* field = GetField(5);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns bike_cad_ant_id field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16Z GetBikeCadAntId(void) const
    {
        return GetFieldUINT16ZValue(5, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set bike_cad_ant_id field
    ///////////////////////////////////////////////////////////////////////
    void SetBikeCadAntId(FIT_UINT16Z bikeCadAntId)
    {
        SetFieldUINT16ZValue(5, bikeCadAntId, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of bike_spdcad_ant_id field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsBikeSpdcadAntIdValid() const
    {
        const Field* field = GetField(6);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns bike_spdcad_ant_id field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16Z GetBikeSpdcadAntId(void) const
    {
        return GetFieldUINT16ZValue(6, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set bike_spdcad_ant_id field
    ///////////////////////////////////////////////////////////////////////
    void SetBikeSpdcadAntId(FIT_UINT16Z bikeSpdcadAntId)
    {
        SetFieldUINT16ZValue(6, bikeSpdcadAntId, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of bike_power_ant_id field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsBikePowerAntIdValid() const
    {
        const Field* field = GetField(7);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns bike_power_ant_id field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16Z GetBikePowerAntId(void) const
    {
        return GetFieldUINT16ZValue(7, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set bike_power_ant_id field
    ///////////////////////////////////////////////////////////////////////
    void SetBikePowerAntId(FIT_UINT16Z bikePowerAntId)
    {
        SetFieldUINT16ZValue(7, bikePowerAntId, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of custom_wheelsize field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsCustomWheelsizeValid() const
    {
        const Field* field = GetField(8);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns custom_wheelsize field
    // Units: m
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetCustomWheelsize(void) const
    {
        return GetFieldFLOAT32Value(8, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set custom_wheelsize field
    // Units: m
    ///////////////////////////////////////////////////////////////////////
    void SetCustomWheelsize(FIT_FLOAT32 customWheelsize)
    {
        SetFieldFLOAT32Value(8, customWheelsize, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of auto_wheelsize field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsAutoWheelsizeValid() const
    {
        const Field* field = GetField(9);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns auto_wheelsize field
    // Units: m
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetAutoWheelsize(void) const
    {
        return GetFieldFLOAT32Value(9, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set auto_wheelsize field
    // Units: m
    ///////////////////////////////////////////////////////////////////////
    void SetAutoWheelsize(FIT_FLOAT32 autoWheelsize)
    {
        SetFieldFLOAT32Value(9, autoWheelsize, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of bike_weight field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsBikeWeightValid() const
    {
        const Field* field = GetField(10);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns bike_weight field
    // Units: kg
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetBikeWeight(void) const
    {
        return GetFieldFLOAT32Value(10, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set bike_weight field
    // Units: kg
    ///////////////////////////////////////////////////////////////////////
    void SetBikeWeight(FIT_FLOAT32 bikeWeight)
    {
        SetFieldFLOAT32Value(10, bikeWeight, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of power_cal_factor field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsPowerCalFactorValid() const
    {
        const Field* field = GetField(11);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns power_cal_factor field
    // Units: %
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetPowerCalFactor(void) const
    {
        return GetFieldFLOAT32Value(11, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set power_cal_factor field
    // Units: %
    ///////////////////////////////////////////////////////////////////////
    void SetPowerCalFactor(FIT_FLOAT32 powerCalFactor)
    {
        SetFieldFLOAT32Value(11, powerCalFactor, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of auto_wheel_cal field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsAutoWheelCalValid() const
    {
        const Field* field = GetField(12);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns auto_wheel_cal field
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL GetAutoWheelCal(void) const
    {
        return GetFieldENUMValue(12, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set auto_wheel_cal field
    ///////////////////////////////////////////////////////////////////////
    void SetAutoWheelCal(FIT_BOOL autoWheelCal)
    {
        SetFieldENUMValue(12, autoWheelCal, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of auto_power_zero field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsAutoPowerZeroValid() const
    {
        const Field* field = GetField(13);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns auto_power_zero field
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL GetAutoPowerZero(void) const
    {
        return GetFieldENUMValue(13, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set auto_power_zero field
    ///////////////////////////////////////////////////////////////////////
    void SetAutoPowerZero(FIT_BOOL autoPowerZero)
    {
        SetFieldENUMValue(13, autoPowerZero, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of id field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsIdValid() const
    {
        const Field* field = GetField(14);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns id field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetId(void) const
    {
        return GetFieldUINT8Value(14, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set id field
    ///////////////////////////////////////////////////////////////////////
    void SetId(FIT_UINT8 id)
    {
        SetFieldUINT8Value(14, id, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of spd_enabled field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsSpdEnabledValid() const
    {
        const Field* field = GetField(15);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns spd_enabled field
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL GetSpdEnabled(void) const
    {
        return GetFieldENUMValue(15, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set spd_enabled field
    ///////////////////////////////////////////////////////////////////////
    void SetSpdEnabled(FIT_BOOL spdEnabled)
    {
        SetFieldENUMValue(15, spdEnabled, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of cad_enabled field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsCadEnabledValid() const
    {
        const Field* field = GetField(16);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns cad_enabled field
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL GetCadEnabled(void) const
    {
        return GetFieldENUMValue(16, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set cad_enabled field
    ///////////////////////////////////////////////////////////////////////
    void SetCadEnabled(FIT_BOOL cadEnabled)
    {
        SetFieldENUMValue(16, cadEnabled, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of spdcad_enabled field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsSpdcadEnabledValid() const
    {
        const Field* field = GetField(17);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns spdcad_enabled field
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL GetSpdcadEnabled(void) const
    {
        return GetFieldENUMValue(17, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set spdcad_enabled field
    ///////////////////////////////////////////////////////////////////////
    void SetSpdcadEnabled(FIT_BOOL spdcadEnabled)
    {
        SetFieldENUMValue(17, spdcadEnabled, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of power_enabled field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsPowerEnabledValid() const
    {
        const Field* field = GetField(18);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns power_enabled field
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL GetPowerEnabled(void) const
    {
        return GetFieldENUMValue(18, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set power_enabled field
    ///////////////////////////////////////////////////////////////////////
    void SetPowerEnabled(FIT_BOOL powerEnabled)
    {
        SetFieldENUMValue(18, powerEnabled, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of crank_length field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsCrankLengthValid() const
    {
        const Field* field = GetField(19);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns crank_length field
    // Units: mm
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetCrankLength(void) const
    {
        return GetFieldFLOAT32Value(19, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set crank_length field
    // Units: mm
    ///////////////////////////////////////////////////////////////////////
    void SetCrankLength(FIT_FLOAT32 crankLength)
    {
        SetFieldFLOAT32Value(19, crankLength, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of enabled field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsEnabledValid() const
    {
        const Field* field = GetField(20);
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
        return GetFieldENUMValue(20, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set enabled field
    ///////////////////////////////////////////////////////////////////////
    void SetEnabled(FIT_BOOL enabled)
    {
        SetFieldENUMValue(20, enabled, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of bike_spd_ant_id_trans_type field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsBikeSpdAntIdTransTypeValid() const
    {
        const Field* field = GetField(21);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns bike_spd_ant_id_trans_type field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8Z GetBikeSpdAntIdTransType(void) const
    {
        return GetFieldUINT8ZValue(21, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set bike_spd_ant_id_trans_type field
    ///////////////////////////////////////////////////////////////////////
    void SetBikeSpdAntIdTransType(FIT_UINT8Z bikeSpdAntIdTransType)
    {
        SetFieldUINT8ZValue(21, bikeSpdAntIdTransType, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of bike_cad_ant_id_trans_type field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsBikeCadAntIdTransTypeValid() const
    {
        const Field* field = GetField(22);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns bike_cad_ant_id_trans_type field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8Z GetBikeCadAntIdTransType(void) const
    {
        return GetFieldUINT8ZValue(22, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set bike_cad_ant_id_trans_type field
    ///////////////////////////////////////////////////////////////////////
    void SetBikeCadAntIdTransType(FIT_UINT8Z bikeCadAntIdTransType)
    {
        SetFieldUINT8ZValue(22, bikeCadAntIdTransType, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of bike_spdcad_ant_id_trans_type field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsBikeSpdcadAntIdTransTypeValid() const
    {
        const Field* field = GetField(23);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns bike_spdcad_ant_id_trans_type field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8Z GetBikeSpdcadAntIdTransType(void) const
    {
        return GetFieldUINT8ZValue(23, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set bike_spdcad_ant_id_trans_type field
    ///////////////////////////////////////////////////////////////////////
    void SetBikeSpdcadAntIdTransType(FIT_UINT8Z bikeSpdcadAntIdTransType)
    {
        SetFieldUINT8ZValue(23, bikeSpdcadAntIdTransType, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of bike_power_ant_id_trans_type field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsBikePowerAntIdTransTypeValid() const
    {
        const Field* field = GetField(24);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns bike_power_ant_id_trans_type field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8Z GetBikePowerAntIdTransType(void) const
    {
        return GetFieldUINT8ZValue(24, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set bike_power_ant_id_trans_type field
    ///////////////////////////////////////////////////////////////////////
    void SetBikePowerAntIdTransType(FIT_UINT8Z bikePowerAntIdTransType)
    {
        SetFieldUINT8ZValue(24, bikePowerAntIdTransType, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of odometer_rollover field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsOdometerRolloverValid() const
    {
        const Field* field = GetField(37);
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
        return GetFieldUINT8Value(37, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set odometer_rollover field
    // Comment: Rollover counter that can be used to extend the odometer
    ///////////////////////////////////////////////////////////////////////
    void SetOdometerRollover(FIT_UINT8 odometerRollover)
    {
        SetFieldUINT8Value(37, odometerRollover, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of front_gear_num field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsFrontGearNumValid() const
    {
        const Field* field = GetField(38);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns front_gear_num field
    // Comment: Number of front gears
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8Z GetFrontGearNum(void) const
    {
        return GetFieldUINT8ZValue(38, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set front_gear_num field
    // Comment: Number of front gears
    ///////////////////////////////////////////////////////////////////////
    void SetFrontGearNum(FIT_UINT8Z frontGearNum)
    {
        SetFieldUINT8ZValue(38, frontGearNum, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of front_gear
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumFrontGear(void) const
    {
        return GetFieldNumValues(39, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of front_gear field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsFrontGearValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(39);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns front_gear field
    // Comment: Number of teeth on each gear 0 is innermost
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8Z GetFrontGear(FIT_UINT8 index) const
    {
        return GetFieldUINT8ZValue(39, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set front_gear field
    // Comment: Number of teeth on each gear 0 is innermost
    ///////////////////////////////////////////////////////////////////////
    void SetFrontGear(FIT_UINT8 index, FIT_UINT8Z frontGear)
    {
        SetFieldUINT8ZValue(39, frontGear, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of rear_gear_num field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsRearGearNumValid() const
    {
        const Field* field = GetField(40);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns rear_gear_num field
    // Comment: Number of rear gears
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8Z GetRearGearNum(void) const
    {
        return GetFieldUINT8ZValue(40, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set rear_gear_num field
    // Comment: Number of rear gears
    ///////////////////////////////////////////////////////////////////////
    void SetRearGearNum(FIT_UINT8Z rearGearNum)
    {
        SetFieldUINT8ZValue(40, rearGearNum, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of rear_gear
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumRearGear(void) const
    {
        return GetFieldNumValues(41, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of rear_gear field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsRearGearValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(41);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns rear_gear field
    // Comment: Number of teeth on each gear 0 is innermost
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8Z GetRearGear(FIT_UINT8 index) const
    {
        return GetFieldUINT8ZValue(41, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set rear_gear field
    // Comment: Number of teeth on each gear 0 is innermost
    ///////////////////////////////////////////////////////////////////////
    void SetRearGear(FIT_UINT8 index, FIT_UINT8Z rearGear)
    {
        SetFieldUINT8ZValue(41, rearGear, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of shimano_di2_enabled field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsShimanoDi2EnabledValid() const
    {
        const Field* field = GetField(44);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns shimano_di2_enabled field
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL GetShimanoDi2Enabled(void) const
    {
        return GetFieldENUMValue(44, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set shimano_di2_enabled field
    ///////////////////////////////////////////////////////////////////////
    void SetShimanoDi2Enabled(FIT_BOOL shimanoDi2Enabled)
    {
        SetFieldENUMValue(44, shimanoDi2Enabled, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_BIKE_PROFILE_MESG_HPP)
