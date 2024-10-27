/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2024 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.141.0Release
// Tag = production/release/21.141.0-0-g2aa27e1
/////////////////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_WEATHER_CONDITIONS_MESG_HPP)
#define FIT_WEATHER_CONDITIONS_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class WeatherConditionsMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 Timestamp = 253;
       static const FIT_UINT8 WeatherReport = 0;
       static const FIT_UINT8 Temperature = 1;
       static const FIT_UINT8 Condition = 2;
       static const FIT_UINT8 WindDirection = 3;
       static const FIT_UINT8 WindSpeed = 4;
       static const FIT_UINT8 PrecipitationProbability = 5;
       static const FIT_UINT8 TemperatureFeelsLike = 6;
       static const FIT_UINT8 RelativeHumidity = 7;
       static const FIT_UINT8 Location = 8;
       static const FIT_UINT8 ObservedAtTime = 9;
       static const FIT_UINT8 ObservedLocationLat = 10;
       static const FIT_UINT8 ObservedLocationLong = 11;
       static const FIT_UINT8 DayOfWeek = 12;
       static const FIT_UINT8 HighTemperature = 13;
       static const FIT_UINT8 LowTemperature = 14;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    WeatherConditionsMesg(void) : Mesg(Profile::MESG_WEATHER_CONDITIONS)
    {
    }

    WeatherConditionsMesg(const Mesg &mesg) : Mesg(mesg)
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
    // Comment: time of update for current conditions, else forecast time
    ///////////////////////////////////////////////////////////////////////
    FIT_DATE_TIME GetTimestamp(void) const
    {
        return GetFieldUINT32Value(253, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set timestamp field
    // Comment: time of update for current conditions, else forecast time
    ///////////////////////////////////////////////////////////////////////
    void SetTimestamp(FIT_DATE_TIME timestamp)
    {
        SetFieldUINT32Value(253, timestamp, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of weather_report field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsWeatherReportValid() const
    {
        const Field* field = GetField(0);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns weather_report field
    // Comment: Current or forecast
    ///////////////////////////////////////////////////////////////////////
    FIT_WEATHER_REPORT GetWeatherReport(void) const
    {
        return GetFieldENUMValue(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set weather_report field
    // Comment: Current or forecast
    ///////////////////////////////////////////////////////////////////////
    void SetWeatherReport(FIT_WEATHER_REPORT weatherReport)
    {
        SetFieldENUMValue(0, weatherReport, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of temperature field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTemperatureValid() const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns temperature field
    // Units: C
    ///////////////////////////////////////////////////////////////////////
    FIT_SINT8 GetTemperature(void) const
    {
        return GetFieldSINT8Value(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set temperature field
    // Units: C
    ///////////////////////////////////////////////////////////////////////
    void SetTemperature(FIT_SINT8 temperature)
    {
        SetFieldSINT8Value(1, temperature, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of condition field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsConditionValid() const
    {
        const Field* field = GetField(2);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns condition field
    // Comment: Corresponds to GSC Response weatherIcon field
    ///////////////////////////////////////////////////////////////////////
    FIT_WEATHER_STATUS GetCondition(void) const
    {
        return GetFieldENUMValue(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set condition field
    // Comment: Corresponds to GSC Response weatherIcon field
    ///////////////////////////////////////////////////////////////////////
    void SetCondition(FIT_WEATHER_STATUS condition)
    {
        SetFieldENUMValue(2, condition, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of wind_direction field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsWindDirectionValid() const
    {
        const Field* field = GetField(3);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns wind_direction field
    // Units: degrees
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetWindDirection(void) const
    {
        return GetFieldUINT16Value(3, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set wind_direction field
    // Units: degrees
    ///////////////////////////////////////////////////////////////////////
    void SetWindDirection(FIT_UINT16 windDirection)
    {
        SetFieldUINT16Value(3, windDirection, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of wind_speed field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsWindSpeedValid() const
    {
        const Field* field = GetField(4);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns wind_speed field
    // Units: m/s
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetWindSpeed(void) const
    {
        return GetFieldFLOAT32Value(4, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set wind_speed field
    // Units: m/s
    ///////////////////////////////////////////////////////////////////////
    void SetWindSpeed(FIT_FLOAT32 windSpeed)
    {
        SetFieldFLOAT32Value(4, windSpeed, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of precipitation_probability field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsPrecipitationProbabilityValid() const
    {
        const Field* field = GetField(5);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns precipitation_probability field
    // Comment: range 0-100
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetPrecipitationProbability(void) const
    {
        return GetFieldUINT8Value(5, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set precipitation_probability field
    // Comment: range 0-100
    ///////////////////////////////////////////////////////////////////////
    void SetPrecipitationProbability(FIT_UINT8 precipitationProbability)
    {
        SetFieldUINT8Value(5, precipitationProbability, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of temperature_feels_like field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTemperatureFeelsLikeValid() const
    {
        const Field* field = GetField(6);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns temperature_feels_like field
    // Units: C
    // Comment: Heat Index if GCS heatIdx above or equal to 90F or wind chill if GCS windChill below or equal to 32F
    ///////////////////////////////////////////////////////////////////////
    FIT_SINT8 GetTemperatureFeelsLike(void) const
    {
        return GetFieldSINT8Value(6, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set temperature_feels_like field
    // Units: C
    // Comment: Heat Index if GCS heatIdx above or equal to 90F or wind chill if GCS windChill below or equal to 32F
    ///////////////////////////////////////////////////////////////////////
    void SetTemperatureFeelsLike(FIT_SINT8 temperatureFeelsLike)
    {
        SetFieldSINT8Value(6, temperatureFeelsLike, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of relative_humidity field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsRelativeHumidityValid() const
    {
        const Field* field = GetField(7);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns relative_humidity field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetRelativeHumidity(void) const
    {
        return GetFieldUINT8Value(7, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set relative_humidity field
    ///////////////////////////////////////////////////////////////////////
    void SetRelativeHumidity(FIT_UINT8 relativeHumidity)
    {
        SetFieldUINT8Value(7, relativeHumidity, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of location field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsLocationValid() const
    {
        const Field* field = GetField(8);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns location field
    // Comment: string corresponding to GCS response location string
    ///////////////////////////////////////////////////////////////////////
    FIT_WSTRING GetLocation(void) const
    {
        return GetFieldSTRINGValue(8, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set location field
    // Comment: string corresponding to GCS response location string
    ///////////////////////////////////////////////////////////////////////
    void SetLocation(FIT_WSTRING location)
    {
        SetFieldSTRINGValue(8, location, 0);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of observed_at_time field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsObservedAtTimeValid() const
    {
        const Field* field = GetField(9);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns observed_at_time field
    ///////////////////////////////////////////////////////////////////////
    FIT_DATE_TIME GetObservedAtTime(void) const
    {
        return GetFieldUINT32Value(9, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set observed_at_time field
    ///////////////////////////////////////////////////////////////////////
    void SetObservedAtTime(FIT_DATE_TIME observedAtTime)
    {
        SetFieldUINT32Value(9, observedAtTime, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of observed_location_lat field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsObservedLocationLatValid() const
    {
        const Field* field = GetField(10);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns observed_location_lat field
    // Units: semicircles
    ///////////////////////////////////////////////////////////////////////
    FIT_SINT32 GetObservedLocationLat(void) const
    {
        return GetFieldSINT32Value(10, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set observed_location_lat field
    // Units: semicircles
    ///////////////////////////////////////////////////////////////////////
    void SetObservedLocationLat(FIT_SINT32 observedLocationLat)
    {
        SetFieldSINT32Value(10, observedLocationLat, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of observed_location_long field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsObservedLocationLongValid() const
    {
        const Field* field = GetField(11);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns observed_location_long field
    // Units: semicircles
    ///////////////////////////////////////////////////////////////////////
    FIT_SINT32 GetObservedLocationLong(void) const
    {
        return GetFieldSINT32Value(11, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set observed_location_long field
    // Units: semicircles
    ///////////////////////////////////////////////////////////////////////
    void SetObservedLocationLong(FIT_SINT32 observedLocationLong)
    {
        SetFieldSINT32Value(11, observedLocationLong, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of day_of_week field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsDayOfWeekValid() const
    {
        const Field* field = GetField(12);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns day_of_week field
    ///////////////////////////////////////////////////////////////////////
    FIT_DAY_OF_WEEK GetDayOfWeek(void) const
    {
        return GetFieldENUMValue(12, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set day_of_week field
    ///////////////////////////////////////////////////////////////////////
    void SetDayOfWeek(FIT_DAY_OF_WEEK dayOfWeek)
    {
        SetFieldENUMValue(12, dayOfWeek, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of high_temperature field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsHighTemperatureValid() const
    {
        const Field* field = GetField(13);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns high_temperature field
    // Units: C
    ///////////////////////////////////////////////////////////////////////
    FIT_SINT8 GetHighTemperature(void) const
    {
        return GetFieldSINT8Value(13, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set high_temperature field
    // Units: C
    ///////////////////////////////////////////////////////////////////////
    void SetHighTemperature(FIT_SINT8 highTemperature)
    {
        SetFieldSINT8Value(13, highTemperature, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of low_temperature field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsLowTemperatureValid() const
    {
        const Field* field = GetField(14);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns low_temperature field
    // Units: C
    ///////////////////////////////////////////////////////////////////////
    FIT_SINT8 GetLowTemperature(void) const
    {
        return GetFieldSINT8Value(14, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set low_temperature field
    // Units: C
    ///////////////////////////////////////////////////////////////////////
    void SetLowTemperature(FIT_SINT8 lowTemperature)
    {
        SetFieldSINT8Value(14, lowTemperature, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_WEATHER_CONDITIONS_MESG_HPP)
