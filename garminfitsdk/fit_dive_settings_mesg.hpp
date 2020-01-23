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


#if !defined(FIT_DIVE_SETTINGS_MESG_HPP)
#define FIT_DIVE_SETTINGS_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class DiveSettingsMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 MessageIndex = 254;
       static const FIT_UINT8 Name = 0;
       static const FIT_UINT8 Model = 1;
       static const FIT_UINT8 GfLow = 2;
       static const FIT_UINT8 GfHigh = 3;
       static const FIT_UINT8 WaterType = 4;
       static const FIT_UINT8 WaterDensity = 5;
       static const FIT_UINT8 Po2Warn = 6;
       static const FIT_UINT8 Po2Critical = 7;
       static const FIT_UINT8 Po2Deco = 8;
       static const FIT_UINT8 SafetyStopEnabled = 9;
       static const FIT_UINT8 BottomDepth = 10;
       static const FIT_UINT8 BottomTime = 11;
       static const FIT_UINT8 ApneaCountdownEnabled = 12;
       static const FIT_UINT8 ApneaCountdownTime = 13;
       static const FIT_UINT8 BacklightMode = 14;
       static const FIT_UINT8 BacklightBrightness = 15;
       static const FIT_UINT8 BacklightTimeout = 16;
       static const FIT_UINT8 RepeatDiveInterval = 17;
       static const FIT_UINT8 SafetyStopTime = 18;
       static const FIT_UINT8 HeartRateSourceType = 19;
       static const FIT_UINT8 HeartRateSource = 20;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    DiveSettingsMesg(void) : Mesg(Profile::MESG_DIVE_SETTINGS)
    {
    }

    DiveSettingsMesg(const Mesg &mesg) : Mesg(mesg)
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
    // Checks the validity of model field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsModelValid() const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns model field
    ///////////////////////////////////////////////////////////////////////
    FIT_TISSUE_MODEL_TYPE GetModel(void) const
    {
        return GetFieldENUMValue(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set model field
    ///////////////////////////////////////////////////////////////////////
    void SetModel(FIT_TISSUE_MODEL_TYPE model)
    {
        SetFieldENUMValue(1, model, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of gf_low field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsGfLowValid() const
    {
        const Field* field = GetField(2);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns gf_low field
    // Units: percent
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetGfLow(void) const
    {
        return GetFieldUINT8Value(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set gf_low field
    // Units: percent
    ///////////////////////////////////////////////////////////////////////
    void SetGfLow(FIT_UINT8 gfLow)
    {
        SetFieldUINT8Value(2, gfLow, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of gf_high field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsGfHighValid() const
    {
        const Field* field = GetField(3);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns gf_high field
    // Units: percent
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetGfHigh(void) const
    {
        return GetFieldUINT8Value(3, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set gf_high field
    // Units: percent
    ///////////////////////////////////////////////////////////////////////
    void SetGfHigh(FIT_UINT8 gfHigh)
    {
        SetFieldUINT8Value(3, gfHigh, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of water_type field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsWaterTypeValid() const
    {
        const Field* field = GetField(4);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns water_type field
    ///////////////////////////////////////////////////////////////////////
    FIT_WATER_TYPE GetWaterType(void) const
    {
        return GetFieldENUMValue(4, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set water_type field
    ///////////////////////////////////////////////////////////////////////
    void SetWaterType(FIT_WATER_TYPE waterType)
    {
        SetFieldENUMValue(4, waterType, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of water_density field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsWaterDensityValid() const
    {
        const Field* field = GetField(5);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns water_density field
    // Units: kg/m^3
    // Comment: Fresh water is usually 1000; salt water is usually 1025
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetWaterDensity(void) const
    {
        return GetFieldFLOAT32Value(5, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set water_density field
    // Units: kg/m^3
    // Comment: Fresh water is usually 1000; salt water is usually 1025
    ///////////////////////////////////////////////////////////////////////
    void SetWaterDensity(FIT_FLOAT32 waterDensity)
    {
        SetFieldFLOAT32Value(5, waterDensity, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of po2_warn field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsPo2WarnValid() const
    {
        const Field* field = GetField(6);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns po2_warn field
    // Units: percent
    // Comment: Typically 1.40
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetPo2Warn(void) const
    {
        return GetFieldFLOAT32Value(6, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set po2_warn field
    // Units: percent
    // Comment: Typically 1.40
    ///////////////////////////////////////////////////////////////////////
    void SetPo2Warn(FIT_FLOAT32 po2Warn)
    {
        SetFieldFLOAT32Value(6, po2Warn, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of po2_critical field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsPo2CriticalValid() const
    {
        const Field* field = GetField(7);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns po2_critical field
    // Units: percent
    // Comment: Typically 1.60
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetPo2Critical(void) const
    {
        return GetFieldFLOAT32Value(7, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set po2_critical field
    // Units: percent
    // Comment: Typically 1.60
    ///////////////////////////////////////////////////////////////////////
    void SetPo2Critical(FIT_FLOAT32 po2Critical)
    {
        SetFieldFLOAT32Value(7, po2Critical, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of po2_deco field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsPo2DecoValid() const
    {
        const Field* field = GetField(8);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns po2_deco field
    // Units: percent
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetPo2Deco(void) const
    {
        return GetFieldFLOAT32Value(8, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set po2_deco field
    // Units: percent
    ///////////////////////////////////////////////////////////////////////
    void SetPo2Deco(FIT_FLOAT32 po2Deco)
    {
        SetFieldFLOAT32Value(8, po2Deco, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of safety_stop_enabled field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsSafetyStopEnabledValid() const
    {
        const Field* field = GetField(9);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns safety_stop_enabled field
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL GetSafetyStopEnabled(void) const
    {
        return GetFieldENUMValue(9, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set safety_stop_enabled field
    ///////////////////////////////////////////////////////////////////////
    void SetSafetyStopEnabled(FIT_BOOL safetyStopEnabled)
    {
        SetFieldENUMValue(9, safetyStopEnabled, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of bottom_depth field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsBottomDepthValid() const
    {
        const Field* field = GetField(10);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns bottom_depth field
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetBottomDepth(void) const
    {
        return GetFieldFLOAT32Value(10, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set bottom_depth field
    ///////////////////////////////////////////////////////////////////////
    void SetBottomDepth(FIT_FLOAT32 bottomDepth)
    {
        SetFieldFLOAT32Value(10, bottomDepth, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of bottom_time field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsBottomTimeValid() const
    {
        const Field* field = GetField(11);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns bottom_time field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT32 GetBottomTime(void) const
    {
        return GetFieldUINT32Value(11, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set bottom_time field
    ///////////////////////////////////////////////////////////////////////
    void SetBottomTime(FIT_UINT32 bottomTime)
    {
        SetFieldUINT32Value(11, bottomTime, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of apnea_countdown_enabled field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsApneaCountdownEnabledValid() const
    {
        const Field* field = GetField(12);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns apnea_countdown_enabled field
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL GetApneaCountdownEnabled(void) const
    {
        return GetFieldENUMValue(12, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set apnea_countdown_enabled field
    ///////////////////////////////////////////////////////////////////////
    void SetApneaCountdownEnabled(FIT_BOOL apneaCountdownEnabled)
    {
        SetFieldENUMValue(12, apneaCountdownEnabled, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of apnea_countdown_time field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsApneaCountdownTimeValid() const
    {
        const Field* field = GetField(13);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns apnea_countdown_time field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT32 GetApneaCountdownTime(void) const
    {
        return GetFieldUINT32Value(13, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set apnea_countdown_time field
    ///////////////////////////////////////////////////////////////////////
    void SetApneaCountdownTime(FIT_UINT32 apneaCountdownTime)
    {
        SetFieldUINT32Value(13, apneaCountdownTime, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of backlight_mode field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsBacklightModeValid() const
    {
        const Field* field = GetField(14);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns backlight_mode field
    ///////////////////////////////////////////////////////////////////////
    FIT_DIVE_BACKLIGHT_MODE GetBacklightMode(void) const
    {
        return GetFieldENUMValue(14, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set backlight_mode field
    ///////////////////////////////////////////////////////////////////////
    void SetBacklightMode(FIT_DIVE_BACKLIGHT_MODE backlightMode)
    {
        SetFieldENUMValue(14, backlightMode, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of backlight_brightness field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsBacklightBrightnessValid() const
    {
        const Field* field = GetField(15);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns backlight_brightness field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetBacklightBrightness(void) const
    {
        return GetFieldUINT8Value(15, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set backlight_brightness field
    ///////////////////////////////////////////////////////////////////////
    void SetBacklightBrightness(FIT_UINT8 backlightBrightness)
    {
        SetFieldUINT8Value(15, backlightBrightness, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of backlight_timeout field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsBacklightTimeoutValid() const
    {
        const Field* field = GetField(16);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns backlight_timeout field
    ///////////////////////////////////////////////////////////////////////
    FIT_BACKLIGHT_TIMEOUT GetBacklightTimeout(void) const
    {
        return GetFieldUINT8Value(16, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set backlight_timeout field
    ///////////////////////////////////////////////////////////////////////
    void SetBacklightTimeout(FIT_BACKLIGHT_TIMEOUT backlightTimeout)
    {
        SetFieldUINT8Value(16, backlightTimeout, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of repeat_dive_interval field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsRepeatDiveIntervalValid() const
    {
        const Field* field = GetField(17);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns repeat_dive_interval field
    // Units: s
    // Comment: Time between surfacing and ending the activity
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetRepeatDiveInterval(void) const
    {
        return GetFieldUINT16Value(17, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set repeat_dive_interval field
    // Units: s
    // Comment: Time between surfacing and ending the activity
    ///////////////////////////////////////////////////////////////////////
    void SetRepeatDiveInterval(FIT_UINT16 repeatDiveInterval)
    {
        SetFieldUINT16Value(17, repeatDiveInterval, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of safety_stop_time field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsSafetyStopTimeValid() const
    {
        const Field* field = GetField(18);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns safety_stop_time field
    // Units: s
    // Comment: Time at safety stop (if enabled)
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetSafetyStopTime(void) const
    {
        return GetFieldUINT16Value(18, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set safety_stop_time field
    // Units: s
    // Comment: Time at safety stop (if enabled)
    ///////////////////////////////////////////////////////////////////////
    void SetSafetyStopTime(FIT_UINT16 safetyStopTime)
    {
        SetFieldUINT16Value(18, safetyStopTime, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of heart_rate_source_type field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsHeartRateSourceTypeValid() const
    {
        const Field* field = GetField(19);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns heart_rate_source_type field
    ///////////////////////////////////////////////////////////////////////
    FIT_SOURCE_TYPE GetHeartRateSourceType(void) const
    {
        return GetFieldENUMValue(19, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set heart_rate_source_type field
    ///////////////////////////////////////////////////////////////////////
    void SetHeartRateSourceType(FIT_SOURCE_TYPE heartRateSourceType)
    {
        SetFieldENUMValue(19, heartRateSourceType, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of heart_rate_source field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsHeartRateSourceValid() const
    {
        const Field* field = GetField(20);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns heart_rate_source field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetHeartRateSource(void) const
    {
        return GetFieldUINT8Value(20, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set heart_rate_source field
    ///////////////////////////////////////////////////////////////////////
    void SetHeartRateSource(FIT_UINT8 heartRateSource)
    {
        SetFieldUINT8Value(20, heartRateSource, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of heart_rate_antplus_device_type field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsHeartRateAntplusDeviceTypeValid() const
    {
        const Field* field = GetField(20);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        if( !CanSupportSubField( field, (FIT_UINT16) Profile::DIVE_SETTINGS_MESG_HEART_RATE_SOURCE_FIELD_HEART_RATE_ANTPLUS_DEVICE_TYPE ) )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(0, (FIT_UINT16) Profile::DIVE_SETTINGS_MESG_HEART_RATE_SOURCE_FIELD_HEART_RATE_ANTPLUS_DEVICE_TYPE);
    }


    ///////////////////////////////////////////////////////////////////////
    // Returns heart_rate_antplus_device_type field
    ///////////////////////////////////////////////////////////////////////
    FIT_ANTPLUS_DEVICE_TYPE GetHeartRateAntplusDeviceType(void) const
    {
        return GetFieldUINT8Value(20, 0, (FIT_UINT16) Profile::DIVE_SETTINGS_MESG_HEART_RATE_SOURCE_FIELD_HEART_RATE_ANTPLUS_DEVICE_TYPE);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set heart_rate_antplus_device_type field
    ///////////////////////////////////////////////////////////////////////
    void SetHeartRateAntplusDeviceType(FIT_ANTPLUS_DEVICE_TYPE heartRateAntplusDeviceType)
    {
        SetFieldUINT8Value(20, heartRateAntplusDeviceType, 0, (FIT_UINT16) Profile::DIVE_SETTINGS_MESG_HEART_RATE_SOURCE_FIELD_HEART_RATE_ANTPLUS_DEVICE_TYPE);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of heart_rate_local_device_type field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsHeartRateLocalDeviceTypeValid() const
    {
        const Field* field = GetField(20);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        if( !CanSupportSubField( field, (FIT_UINT16) Profile::DIVE_SETTINGS_MESG_HEART_RATE_SOURCE_FIELD_HEART_RATE_LOCAL_DEVICE_TYPE ) )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(0, (FIT_UINT16) Profile::DIVE_SETTINGS_MESG_HEART_RATE_SOURCE_FIELD_HEART_RATE_LOCAL_DEVICE_TYPE);
    }


    ///////////////////////////////////////////////////////////////////////
    // Returns heart_rate_local_device_type field
    ///////////////////////////////////////////////////////////////////////
    FIT_LOCAL_DEVICE_TYPE GetHeartRateLocalDeviceType(void) const
    {
        return GetFieldUINT8Value(20, 0, (FIT_UINT16) Profile::DIVE_SETTINGS_MESG_HEART_RATE_SOURCE_FIELD_HEART_RATE_LOCAL_DEVICE_TYPE);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set heart_rate_local_device_type field
    ///////////////////////////////////////////////////////////////////////
    void SetHeartRateLocalDeviceType(FIT_LOCAL_DEVICE_TYPE heartRateLocalDeviceType)
    {
        SetFieldUINT8Value(20, heartRateLocalDeviceType, 0, (FIT_UINT16) Profile::DIVE_SETTINGS_MESG_HEART_RATE_SOURCE_FIELD_HEART_RATE_LOCAL_DEVICE_TYPE);
    }

};

} // namespace fit

#endif // !defined(FIT_DIVE_SETTINGS_MESG_HPP)
