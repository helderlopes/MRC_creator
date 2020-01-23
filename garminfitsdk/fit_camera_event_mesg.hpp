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


#if !defined(FIT_CAMERA_EVENT_MESG_HPP)
#define FIT_CAMERA_EVENT_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class CameraEventMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 Timestamp = 253;
       static const FIT_UINT8 TimestampMs = 0;
       static const FIT_UINT8 CameraEventType = 1;
       static const FIT_UINT8 CameraFileUuid = 2;
       static const FIT_UINT8 CameraOrientation = 3;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    CameraEventMesg(void) : Mesg(Profile::MESG_CAMERA_EVENT)
    {
    }

    CameraEventMesg(const Mesg &mesg) : Mesg(mesg)
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
    // Comment: Whole second part of the timestamp.
    ///////////////////////////////////////////////////////////////////////
    FIT_DATE_TIME GetTimestamp(void) const
    {
        return GetFieldUINT32Value(253, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set timestamp field
    // Units: s
    // Comment: Whole second part of the timestamp.
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
    // Checks the validity of camera_event_type field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsCameraEventTypeValid() const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns camera_event_type field
    ///////////////////////////////////////////////////////////////////////
    FIT_CAMERA_EVENT_TYPE GetCameraEventType(void) const
    {
        return GetFieldENUMValue(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set camera_event_type field
    ///////////////////////////////////////////////////////////////////////
    void SetCameraEventType(FIT_CAMERA_EVENT_TYPE cameraEventType)
    {
        SetFieldENUMValue(1, cameraEventType, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of camera_file_uuid field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsCameraFileUuidValid() const
    {
        const Field* field = GetField(2);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns camera_file_uuid field
    ///////////////////////////////////////////////////////////////////////
    FIT_WSTRING GetCameraFileUuid(void) const
    {
        return GetFieldSTRINGValue(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set camera_file_uuid field
    ///////////////////////////////////////////////////////////////////////
    void SetCameraFileUuid(FIT_WSTRING cameraFileUuid)
    {
        SetFieldSTRINGValue(2, cameraFileUuid, 0);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of camera_orientation field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsCameraOrientationValid() const
    {
        const Field* field = GetField(3);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns camera_orientation field
    ///////////////////////////////////////////////////////////////////////
    FIT_CAMERA_ORIENTATION_TYPE GetCameraOrientation(void) const
    {
        return GetFieldENUMValue(3, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set camera_orientation field
    ///////////////////////////////////////////////////////////////////////
    void SetCameraOrientation(FIT_CAMERA_ORIENTATION_TYPE cameraOrientation)
    {
        SetFieldENUMValue(3, cameraOrientation, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_CAMERA_EVENT_MESG_HPP)
