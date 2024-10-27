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


#if !defined(FIT_ACCELEROMETER_DATA_MESG_HPP)
#define FIT_ACCELEROMETER_DATA_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class AccelerometerDataMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 Timestamp = 253;
       static const FIT_UINT8 TimestampMs = 0;
       static const FIT_UINT8 SampleTimeOffset = 1;
       static const FIT_UINT8 AccelX = 2;
       static const FIT_UINT8 AccelY = 3;
       static const FIT_UINT8 AccelZ = 4;
       static const FIT_UINT8 CalibratedAccelX = 5;
       static const FIT_UINT8 CalibratedAccelY = 6;
       static const FIT_UINT8 CalibratedAccelZ = 7;
       static const FIT_UINT8 CompressedCalibratedAccelX = 8;
       static const FIT_UINT8 CompressedCalibratedAccelY = 9;
       static const FIT_UINT8 CompressedCalibratedAccelZ = 10;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    AccelerometerDataMesg(void) : Mesg(Profile::MESG_ACCELEROMETER_DATA)
    {
    }

    AccelerometerDataMesg(const Mesg &mesg) : Mesg(mesg)
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
    // Comment: Whole second part of the timestamp
    ///////////////////////////////////////////////////////////////////////
    FIT_DATE_TIME GetTimestamp(void) const
    {
        return GetFieldUINT32Value(253, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set timestamp field
    // Units: s
    // Comment: Whole second part of the timestamp
    ///////////////////////////////////////////////////////////////////////
    void SetTimestamp(FIT_DATE_TIME timestamp)
    {
        SetFieldUINT32Value(253, timestamp, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of timestamp_ms field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTimestampMsValid() const
    {
        const Field* field = GetField(0);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns timestamp_ms field
    // Units: ms
    // Comment: Millisecond part of the timestamp.
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetTimestampMs(void) const
    {
        return GetFieldUINT16Value(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set timestamp_ms field
    // Units: ms
    // Comment: Millisecond part of the timestamp.
    ///////////////////////////////////////////////////////////////////////
    void SetTimestampMs(FIT_UINT16 timestampMs)
    {
        SetFieldUINT16Value(0, timestampMs, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of sample_time_offset
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumSampleTimeOffset(void) const
    {
        return GetFieldNumValues(1, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of sample_time_offset field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsSampleTimeOffsetValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns sample_time_offset field
    // Units: ms
    // Comment: Each time in the array describes the time at which the accelerometer sample with the corrosponding index was taken. Limited to 30 samples in each message. The samples may span across seconds. Array size must match the number of samples in accel_x and accel_y and accel_z
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetSampleTimeOffset(FIT_UINT8 index) const
    {
        return GetFieldUINT16Value(1, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set sample_time_offset field
    // Units: ms
    // Comment: Each time in the array describes the time at which the accelerometer sample with the corrosponding index was taken. Limited to 30 samples in each message. The samples may span across seconds. Array size must match the number of samples in accel_x and accel_y and accel_z
    ///////////////////////////////////////////////////////////////////////
    void SetSampleTimeOffset(FIT_UINT8 index, FIT_UINT16 sampleTimeOffset)
    {
        SetFieldUINT16Value(1, sampleTimeOffset, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of accel_x
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumAccelX(void) const
    {
        return GetFieldNumValues(2, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of accel_x field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsAccelXValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(2);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns accel_x field
    // Units: counts
    // Comment: These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples may span across seconds. A conversion will need to be done on this data once read.
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetAccelX(FIT_UINT8 index) const
    {
        return GetFieldUINT16Value(2, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set accel_x field
    // Units: counts
    // Comment: These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples may span across seconds. A conversion will need to be done on this data once read.
    ///////////////////////////////////////////////////////////////////////
    void SetAccelX(FIT_UINT8 index, FIT_UINT16 accelX)
    {
        SetFieldUINT16Value(2, accelX, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of accel_y
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumAccelY(void) const
    {
        return GetFieldNumValues(3, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of accel_y field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsAccelYValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(3);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns accel_y field
    // Units: counts
    // Comment: These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples may span across seconds. A conversion will need to be done on this data once read.
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetAccelY(FIT_UINT8 index) const
    {
        return GetFieldUINT16Value(3, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set accel_y field
    // Units: counts
    // Comment: These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples may span across seconds. A conversion will need to be done on this data once read.
    ///////////////////////////////////////////////////////////////////////
    void SetAccelY(FIT_UINT8 index, FIT_UINT16 accelY)
    {
        SetFieldUINT16Value(3, accelY, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of accel_z
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumAccelZ(void) const
    {
        return GetFieldNumValues(4, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of accel_z field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsAccelZValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(4);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns accel_z field
    // Units: counts
    // Comment: These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples may span across seconds. A conversion will need to be done on this data once read.
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetAccelZ(FIT_UINT8 index) const
    {
        return GetFieldUINT16Value(4, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set accel_z field
    // Units: counts
    // Comment: These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples may span across seconds. A conversion will need to be done on this data once read.
    ///////////////////////////////////////////////////////////////////////
    void SetAccelZ(FIT_UINT8 index, FIT_UINT16 accelZ)
    {
        SetFieldUINT16Value(4, accelZ, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of calibrated_accel_x
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumCalibratedAccelX(void) const
    {
        return GetFieldNumValues(5, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of calibrated_accel_x field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsCalibratedAccelXValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(5);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns calibrated_accel_x field
    // Units: g
    // Comment: Calibrated accel reading
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetCalibratedAccelX(FIT_UINT8 index) const
    {
        return GetFieldFLOAT32Value(5, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set calibrated_accel_x field
    // Units: g
    // Comment: Calibrated accel reading
    ///////////////////////////////////////////////////////////////////////
    void SetCalibratedAccelX(FIT_UINT8 index, FIT_FLOAT32 calibratedAccelX)
    {
        SetFieldFLOAT32Value(5, calibratedAccelX, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of calibrated_accel_y
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumCalibratedAccelY(void) const
    {
        return GetFieldNumValues(6, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of calibrated_accel_y field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsCalibratedAccelYValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(6);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns calibrated_accel_y field
    // Units: g
    // Comment: Calibrated accel reading
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetCalibratedAccelY(FIT_UINT8 index) const
    {
        return GetFieldFLOAT32Value(6, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set calibrated_accel_y field
    // Units: g
    // Comment: Calibrated accel reading
    ///////////////////////////////////////////////////////////////////////
    void SetCalibratedAccelY(FIT_UINT8 index, FIT_FLOAT32 calibratedAccelY)
    {
        SetFieldFLOAT32Value(6, calibratedAccelY, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of calibrated_accel_z
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumCalibratedAccelZ(void) const
    {
        return GetFieldNumValues(7, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of calibrated_accel_z field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsCalibratedAccelZValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(7);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns calibrated_accel_z field
    // Units: g
    // Comment: Calibrated accel reading
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetCalibratedAccelZ(FIT_UINT8 index) const
    {
        return GetFieldFLOAT32Value(7, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set calibrated_accel_z field
    // Units: g
    // Comment: Calibrated accel reading
    ///////////////////////////////////////////////////////////////////////
    void SetCalibratedAccelZ(FIT_UINT8 index, FIT_FLOAT32 calibratedAccelZ)
    {
        SetFieldFLOAT32Value(7, calibratedAccelZ, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of compressed_calibrated_accel_x
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumCompressedCalibratedAccelX(void) const
    {
        return GetFieldNumValues(8, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of compressed_calibrated_accel_x field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsCompressedCalibratedAccelXValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(8);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns compressed_calibrated_accel_x field
    // Units: mG
    // Comment: Calibrated accel reading
    ///////////////////////////////////////////////////////////////////////
    FIT_SINT16 GetCompressedCalibratedAccelX(FIT_UINT8 index) const
    {
        return GetFieldSINT16Value(8, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set compressed_calibrated_accel_x field
    // Units: mG
    // Comment: Calibrated accel reading
    ///////////////////////////////////////////////////////////////////////
    void SetCompressedCalibratedAccelX(FIT_UINT8 index, FIT_SINT16 compressedCalibratedAccelX)
    {
        SetFieldSINT16Value(8, compressedCalibratedAccelX, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of compressed_calibrated_accel_y
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumCompressedCalibratedAccelY(void) const
    {
        return GetFieldNumValues(9, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of compressed_calibrated_accel_y field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsCompressedCalibratedAccelYValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(9);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns compressed_calibrated_accel_y field
    // Units: mG
    // Comment: Calibrated accel reading
    ///////////////////////////////////////////////////////////////////////
    FIT_SINT16 GetCompressedCalibratedAccelY(FIT_UINT8 index) const
    {
        return GetFieldSINT16Value(9, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set compressed_calibrated_accel_y field
    // Units: mG
    // Comment: Calibrated accel reading
    ///////////////////////////////////////////////////////////////////////
    void SetCompressedCalibratedAccelY(FIT_UINT8 index, FIT_SINT16 compressedCalibratedAccelY)
    {
        SetFieldSINT16Value(9, compressedCalibratedAccelY, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of compressed_calibrated_accel_z
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumCompressedCalibratedAccelZ(void) const
    {
        return GetFieldNumValues(10, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of compressed_calibrated_accel_z field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsCompressedCalibratedAccelZValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(10);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns compressed_calibrated_accel_z field
    // Units: mG
    // Comment: Calibrated accel reading
    ///////////////////////////////////////////////////////////////////////
    FIT_SINT16 GetCompressedCalibratedAccelZ(FIT_UINT8 index) const
    {
        return GetFieldSINT16Value(10, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set compressed_calibrated_accel_z field
    // Units: mG
    // Comment: Calibrated accel reading
    ///////////////////////////////////////////////////////////////////////
    void SetCompressedCalibratedAccelZ(FIT_UINT8 index, FIT_SINT16 compressedCalibratedAccelZ)
    {
        SetFieldSINT16Value(10, compressedCalibratedAccelZ, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_ACCELEROMETER_DATA_MESG_HPP)
