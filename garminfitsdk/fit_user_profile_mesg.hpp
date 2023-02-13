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


#if !defined(FIT_USER_PROFILE_MESG_HPP)
#define FIT_USER_PROFILE_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class UserProfileMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 MessageIndex = 254;
       static const FIT_UINT8 FriendlyName = 0;
       static const FIT_UINT8 Gender = 1;
       static const FIT_UINT8 Age = 2;
       static const FIT_UINT8 Height = 3;
       static const FIT_UINT8 Weight = 4;
       static const FIT_UINT8 Language = 5;
       static const FIT_UINT8 ElevSetting = 6;
       static const FIT_UINT8 WeightSetting = 7;
       static const FIT_UINT8 RestingHeartRate = 8;
       static const FIT_UINT8 DefaultMaxRunningHeartRate = 9;
       static const FIT_UINT8 DefaultMaxBikingHeartRate = 10;
       static const FIT_UINT8 DefaultMaxHeartRate = 11;
       static const FIT_UINT8 HrSetting = 12;
       static const FIT_UINT8 SpeedSetting = 13;
       static const FIT_UINT8 DistSetting = 14;
       static const FIT_UINT8 PowerSetting = 16;
       static const FIT_UINT8 ActivityClass = 17;
       static const FIT_UINT8 PositionSetting = 18;
       static const FIT_UINT8 TemperatureSetting = 21;
       static const FIT_UINT8 LocalId = 22;
       static const FIT_UINT8 GlobalId = 23;
       static const FIT_UINT8 WakeTime = 28;
       static const FIT_UINT8 SleepTime = 29;
       static const FIT_UINT8 HeightSetting = 30;
       static const FIT_UINT8 UserRunningStepLength = 31;
       static const FIT_UINT8 UserWalkingStepLength = 32;
       static const FIT_UINT8 DepthSetting = 47;
       static const FIT_UINT8 DiveCount = 49;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    UserProfileMesg(void) : Mesg(Profile::MESG_USER_PROFILE)
    {
    }

    UserProfileMesg(const Mesg &mesg) : Mesg(mesg)
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
    // Checks the validity of friendly_name field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsFriendlyNameValid() const
    {
        const Field* field = GetField(0);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns friendly_name field
    ///////////////////////////////////////////////////////////////////////
    FIT_WSTRING GetFriendlyName(void) const
    {
        return GetFieldSTRINGValue(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set friendly_name field
    ///////////////////////////////////////////////////////////////////////
    void SetFriendlyName(FIT_WSTRING friendlyName)
    {
        SetFieldSTRINGValue(0, friendlyName, 0);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of gender field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsGenderValid() const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns gender field
    ///////////////////////////////////////////////////////////////////////
    FIT_GENDER GetGender(void) const
    {
        return GetFieldENUMValue(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set gender field
    ///////////////////////////////////////////////////////////////////////
    void SetGender(FIT_GENDER gender)
    {
        SetFieldENUMValue(1, gender, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of age field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsAgeValid() const
    {
        const Field* field = GetField(2);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns age field
    // Units: years
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetAge(void) const
    {
        return GetFieldUINT8Value(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set age field
    // Units: years
    ///////////////////////////////////////////////////////////////////////
    void SetAge(FIT_UINT8 age)
    {
        SetFieldUINT8Value(2, age, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of height field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsHeightValid() const
    {
        const Field* field = GetField(3);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns height field
    // Units: m
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetHeight(void) const
    {
        return GetFieldFLOAT32Value(3, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set height field
    // Units: m
    ///////////////////////////////////////////////////////////////////////
    void SetHeight(FIT_FLOAT32 height)
    {
        SetFieldFLOAT32Value(3, height, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of weight field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsWeightValid() const
    {
        const Field* field = GetField(4);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns weight field
    // Units: kg
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetWeight(void) const
    {
        return GetFieldFLOAT32Value(4, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set weight field
    // Units: kg
    ///////////////////////////////////////////////////////////////////////
    void SetWeight(FIT_FLOAT32 weight)
    {
        SetFieldFLOAT32Value(4, weight, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of language field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsLanguageValid() const
    {
        const Field* field = GetField(5);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns language field
    ///////////////////////////////////////////////////////////////////////
    FIT_LANGUAGE GetLanguage(void) const
    {
        return GetFieldENUMValue(5, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set language field
    ///////////////////////////////////////////////////////////////////////
    void SetLanguage(FIT_LANGUAGE language)
    {
        SetFieldENUMValue(5, language, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of elev_setting field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsElevSettingValid() const
    {
        const Field* field = GetField(6);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns elev_setting field
    ///////////////////////////////////////////////////////////////////////
    FIT_DISPLAY_MEASURE GetElevSetting(void) const
    {
        return GetFieldENUMValue(6, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set elev_setting field
    ///////////////////////////////////////////////////////////////////////
    void SetElevSetting(FIT_DISPLAY_MEASURE elevSetting)
    {
        SetFieldENUMValue(6, elevSetting, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of weight_setting field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsWeightSettingValid() const
    {
        const Field* field = GetField(7);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns weight_setting field
    ///////////////////////////////////////////////////////////////////////
    FIT_DISPLAY_MEASURE GetWeightSetting(void) const
    {
        return GetFieldENUMValue(7, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set weight_setting field
    ///////////////////////////////////////////////////////////////////////
    void SetWeightSetting(FIT_DISPLAY_MEASURE weightSetting)
    {
        SetFieldENUMValue(7, weightSetting, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of resting_heart_rate field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsRestingHeartRateValid() const
    {
        const Field* field = GetField(8);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns resting_heart_rate field
    // Units: bpm
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetRestingHeartRate(void) const
    {
        return GetFieldUINT8Value(8, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set resting_heart_rate field
    // Units: bpm
    ///////////////////////////////////////////////////////////////////////
    void SetRestingHeartRate(FIT_UINT8 restingHeartRate)
    {
        SetFieldUINT8Value(8, restingHeartRate, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of default_max_running_heart_rate field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsDefaultMaxRunningHeartRateValid() const
    {
        const Field* field = GetField(9);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns default_max_running_heart_rate field
    // Units: bpm
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetDefaultMaxRunningHeartRate(void) const
    {
        return GetFieldUINT8Value(9, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set default_max_running_heart_rate field
    // Units: bpm
    ///////////////////////////////////////////////////////////////////////
    void SetDefaultMaxRunningHeartRate(FIT_UINT8 defaultMaxRunningHeartRate)
    {
        SetFieldUINT8Value(9, defaultMaxRunningHeartRate, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of default_max_biking_heart_rate field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsDefaultMaxBikingHeartRateValid() const
    {
        const Field* field = GetField(10);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns default_max_biking_heart_rate field
    // Units: bpm
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetDefaultMaxBikingHeartRate(void) const
    {
        return GetFieldUINT8Value(10, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set default_max_biking_heart_rate field
    // Units: bpm
    ///////////////////////////////////////////////////////////////////////
    void SetDefaultMaxBikingHeartRate(FIT_UINT8 defaultMaxBikingHeartRate)
    {
        SetFieldUINT8Value(10, defaultMaxBikingHeartRate, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of default_max_heart_rate field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsDefaultMaxHeartRateValid() const
    {
        const Field* field = GetField(11);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns default_max_heart_rate field
    // Units: bpm
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetDefaultMaxHeartRate(void) const
    {
        return GetFieldUINT8Value(11, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set default_max_heart_rate field
    // Units: bpm
    ///////////////////////////////////////////////////////////////////////
    void SetDefaultMaxHeartRate(FIT_UINT8 defaultMaxHeartRate)
    {
        SetFieldUINT8Value(11, defaultMaxHeartRate, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of hr_setting field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsHrSettingValid() const
    {
        const Field* field = GetField(12);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns hr_setting field
    ///////////////////////////////////////////////////////////////////////
    FIT_DISPLAY_HEART GetHrSetting(void) const
    {
        return GetFieldENUMValue(12, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set hr_setting field
    ///////////////////////////////////////////////////////////////////////
    void SetHrSetting(FIT_DISPLAY_HEART hrSetting)
    {
        SetFieldENUMValue(12, hrSetting, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of speed_setting field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsSpeedSettingValid() const
    {
        const Field* field = GetField(13);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns speed_setting field
    ///////////////////////////////////////////////////////////////////////
    FIT_DISPLAY_MEASURE GetSpeedSetting(void) const
    {
        return GetFieldENUMValue(13, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set speed_setting field
    ///////////////////////////////////////////////////////////////////////
    void SetSpeedSetting(FIT_DISPLAY_MEASURE speedSetting)
    {
        SetFieldENUMValue(13, speedSetting, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of dist_setting field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsDistSettingValid() const
    {
        const Field* field = GetField(14);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns dist_setting field
    ///////////////////////////////////////////////////////////////////////
    FIT_DISPLAY_MEASURE GetDistSetting(void) const
    {
        return GetFieldENUMValue(14, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set dist_setting field
    ///////////////////////////////////////////////////////////////////////
    void SetDistSetting(FIT_DISPLAY_MEASURE distSetting)
    {
        SetFieldENUMValue(14, distSetting, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of power_setting field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsPowerSettingValid() const
    {
        const Field* field = GetField(16);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns power_setting field
    ///////////////////////////////////////////////////////////////////////
    FIT_DISPLAY_POWER GetPowerSetting(void) const
    {
        return GetFieldENUMValue(16, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set power_setting field
    ///////////////////////////////////////////////////////////////////////
    void SetPowerSetting(FIT_DISPLAY_POWER powerSetting)
    {
        SetFieldENUMValue(16, powerSetting, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of activity_class field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsActivityClassValid() const
    {
        const Field* field = GetField(17);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns activity_class field
    ///////////////////////////////////////////////////////////////////////
    FIT_ACTIVITY_CLASS GetActivityClass(void) const
    {
        return GetFieldENUMValue(17, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set activity_class field
    ///////////////////////////////////////////////////////////////////////
    void SetActivityClass(FIT_ACTIVITY_CLASS activityClass)
    {
        SetFieldENUMValue(17, activityClass, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of position_setting field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsPositionSettingValid() const
    {
        const Field* field = GetField(18);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns position_setting field
    ///////////////////////////////////////////////////////////////////////
    FIT_DISPLAY_POSITION GetPositionSetting(void) const
    {
        return GetFieldENUMValue(18, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set position_setting field
    ///////////////////////////////////////////////////////////////////////
    void SetPositionSetting(FIT_DISPLAY_POSITION positionSetting)
    {
        SetFieldENUMValue(18, positionSetting, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of temperature_setting field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTemperatureSettingValid() const
    {
        const Field* field = GetField(21);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns temperature_setting field
    ///////////////////////////////////////////////////////////////////////
    FIT_DISPLAY_MEASURE GetTemperatureSetting(void) const
    {
        return GetFieldENUMValue(21, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set temperature_setting field
    ///////////////////////////////////////////////////////////////////////
    void SetTemperatureSetting(FIT_DISPLAY_MEASURE temperatureSetting)
    {
        SetFieldENUMValue(21, temperatureSetting, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of local_id field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsLocalIdValid() const
    {
        const Field* field = GetField(22);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns local_id field
    ///////////////////////////////////////////////////////////////////////
    FIT_USER_LOCAL_ID GetLocalId(void) const
    {
        return GetFieldUINT16Value(22, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set local_id field
    ///////////////////////////////////////////////////////////////////////
    void SetLocalId(FIT_USER_LOCAL_ID localId)
    {
        SetFieldUINT16Value(22, localId, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of global_id
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumGlobalId(void) const
    {
        return GetFieldNumValues(23, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of global_id field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsGlobalIdValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(23);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns global_id field
    ///////////////////////////////////////////////////////////////////////
    FIT_BYTE GetGlobalId(FIT_UINT8 index) const
    {
        return GetFieldBYTEValue(23, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set global_id field
    ///////////////////////////////////////////////////////////////////////
    void SetGlobalId(FIT_UINT8 index, FIT_BYTE globalId)
    {
        SetFieldBYTEValue(23, globalId, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of wake_time field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsWakeTimeValid() const
    {
        const Field* field = GetField(28);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns wake_time field
    // Comment: Typical wake time
    ///////////////////////////////////////////////////////////////////////
    FIT_LOCALTIME_INTO_DAY GetWakeTime(void) const
    {
        return GetFieldUINT32Value(28, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set wake_time field
    // Comment: Typical wake time
    ///////////////////////////////////////////////////////////////////////
    void SetWakeTime(FIT_LOCALTIME_INTO_DAY wakeTime)
    {
        SetFieldUINT32Value(28, wakeTime, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of sleep_time field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsSleepTimeValid() const
    {
        const Field* field = GetField(29);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns sleep_time field
    // Comment: Typical bed time
    ///////////////////////////////////////////////////////////////////////
    FIT_LOCALTIME_INTO_DAY GetSleepTime(void) const
    {
        return GetFieldUINT32Value(29, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set sleep_time field
    // Comment: Typical bed time
    ///////////////////////////////////////////////////////////////////////
    void SetSleepTime(FIT_LOCALTIME_INTO_DAY sleepTime)
    {
        SetFieldUINT32Value(29, sleepTime, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of height_setting field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsHeightSettingValid() const
    {
        const Field* field = GetField(30);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns height_setting field
    ///////////////////////////////////////////////////////////////////////
    FIT_DISPLAY_MEASURE GetHeightSetting(void) const
    {
        return GetFieldENUMValue(30, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set height_setting field
    ///////////////////////////////////////////////////////////////////////
    void SetHeightSetting(FIT_DISPLAY_MEASURE heightSetting)
    {
        SetFieldENUMValue(30, heightSetting, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of user_running_step_length field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsUserRunningStepLengthValid() const
    {
        const Field* field = GetField(31);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns user_running_step_length field
    // Units: m
    // Comment: User defined running step length set to 0 for auto length
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetUserRunningStepLength(void) const
    {
        return GetFieldFLOAT32Value(31, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set user_running_step_length field
    // Units: m
    // Comment: User defined running step length set to 0 for auto length
    ///////////////////////////////////////////////////////////////////////
    void SetUserRunningStepLength(FIT_FLOAT32 userRunningStepLength)
    {
        SetFieldFLOAT32Value(31, userRunningStepLength, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of user_walking_step_length field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsUserWalkingStepLengthValid() const
    {
        const Field* field = GetField(32);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns user_walking_step_length field
    // Units: m
    // Comment: User defined walking step length set to 0 for auto length
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetUserWalkingStepLength(void) const
    {
        return GetFieldFLOAT32Value(32, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set user_walking_step_length field
    // Units: m
    // Comment: User defined walking step length set to 0 for auto length
    ///////////////////////////////////////////////////////////////////////
    void SetUserWalkingStepLength(FIT_FLOAT32 userWalkingStepLength)
    {
        SetFieldFLOAT32Value(32, userWalkingStepLength, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of depth_setting field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsDepthSettingValid() const
    {
        const Field* field = GetField(47);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns depth_setting field
    ///////////////////////////////////////////////////////////////////////
    FIT_DISPLAY_MEASURE GetDepthSetting(void) const
    {
        return GetFieldENUMValue(47, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set depth_setting field
    ///////////////////////////////////////////////////////////////////////
    void SetDepthSetting(FIT_DISPLAY_MEASURE depthSetting)
    {
        SetFieldENUMValue(47, depthSetting, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of dive_count field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsDiveCountValid() const
    {
        const Field* field = GetField(49);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns dive_count field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT32 GetDiveCount(void) const
    {
        return GetFieldUINT32Value(49, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set dive_count field
    ///////////////////////////////////////////////////////////////////////
    void SetDiveCount(FIT_UINT32 diveCount)
    {
        SetFieldUINT32Value(49, diveCount, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_USER_PROFILE_MESG_HPP)
