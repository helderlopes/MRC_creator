////////////////////////////////////////////////////////////////////////////////
// The following FIT Protocol software provided may be used with FIT protocol
// devices only and remains the copyrighted property of Garmin Canada Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2021 Garmin Canada Inc.
////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.54Release
// Tag = production/akw/21.54.01-0-g081c465c
////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_SEGMENT_FILE_MESG_HPP)
#define FIT_SEGMENT_FILE_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class SegmentFileMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 MessageIndex = 254;
       static const FIT_UINT8 FileUuid = 1;
       static const FIT_UINT8 Enabled = 3;
       static const FIT_UINT8 UserProfilePrimaryKey = 4;
       static const FIT_UINT8 LeaderType = 7;
       static const FIT_UINT8 LeaderGroupPrimaryKey = 8;
       static const FIT_UINT8 LeaderActivityId = 9;
       static const FIT_UINT8 LeaderActivityIdString = 10;
       static const FIT_UINT8 DefaultRaceLeader = 11;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    SegmentFileMesg(void) : Mesg(Profile::MESG_SEGMENT_FILE)
    {
    }

    SegmentFileMesg(const Mesg &mesg) : Mesg(mesg)
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
    // Checks the validity of file_uuid field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsFileUuidValid() const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns file_uuid field
    // Comment: UUID of the segment file
    ///////////////////////////////////////////////////////////////////////
    FIT_WSTRING GetFileUuid(void) const
    {
        return GetFieldSTRINGValue(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set file_uuid field
    // Comment: UUID of the segment file
    ///////////////////////////////////////////////////////////////////////
    void SetFileUuid(FIT_WSTRING fileUuid)
    {
        SetFieldSTRINGValue(1, fileUuid, 0);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of enabled field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsEnabledValid() const
    {
        const Field* field = GetField(3);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns enabled field
    // Comment: Enabled state of the segment file
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL GetEnabled(void) const
    {
        return GetFieldENUMValue(3, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set enabled field
    // Comment: Enabled state of the segment file
    ///////////////////////////////////////////////////////////////////////
    void SetEnabled(FIT_BOOL enabled)
    {
        SetFieldENUMValue(3, enabled, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of user_profile_primary_key field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsUserProfilePrimaryKeyValid() const
    {
        const Field* field = GetField(4);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns user_profile_primary_key field
    // Comment: Primary key of the user that created the segment file
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT32 GetUserProfilePrimaryKey(void) const
    {
        return GetFieldUINT32Value(4, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set user_profile_primary_key field
    // Comment: Primary key of the user that created the segment file
    ///////////////////////////////////////////////////////////////////////
    void SetUserProfilePrimaryKey(FIT_UINT32 userProfilePrimaryKey)
    {
        SetFieldUINT32Value(4, userProfilePrimaryKey, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of leader_type
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumLeaderType(void) const
    {
        return GetFieldNumValues(7, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of leader_type field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsLeaderTypeValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(7);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns leader_type field
    // Comment: Leader type of each leader in the segment file
    ///////////////////////////////////////////////////////////////////////
    FIT_SEGMENT_LEADERBOARD_TYPE GetLeaderType(FIT_UINT8 index) const
    {
        return GetFieldENUMValue(7, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set leader_type field
    // Comment: Leader type of each leader in the segment file
    ///////////////////////////////////////////////////////////////////////
    void SetLeaderType(FIT_UINT8 index, FIT_SEGMENT_LEADERBOARD_TYPE leaderType)
    {
        SetFieldENUMValue(7, leaderType, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of leader_group_primary_key
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumLeaderGroupPrimaryKey(void) const
    {
        return GetFieldNumValues(8, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of leader_group_primary_key field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsLeaderGroupPrimaryKeyValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(8);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns leader_group_primary_key field
    // Comment: Group primary key of each leader in the segment file
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT32 GetLeaderGroupPrimaryKey(FIT_UINT8 index) const
    {
        return GetFieldUINT32Value(8, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set leader_group_primary_key field
    // Comment: Group primary key of each leader in the segment file
    ///////////////////////////////////////////////////////////////////////
    void SetLeaderGroupPrimaryKey(FIT_UINT8 index, FIT_UINT32 leaderGroupPrimaryKey)
    {
        SetFieldUINT32Value(8, leaderGroupPrimaryKey, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of leader_activity_id
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumLeaderActivityId(void) const
    {
        return GetFieldNumValues(9, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of leader_activity_id field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsLeaderActivityIdValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(9);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns leader_activity_id field
    // Comment: Activity ID of each leader in the segment file
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT32 GetLeaderActivityId(FIT_UINT8 index) const
    {
        return GetFieldUINT32Value(9, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set leader_activity_id field
    // Comment: Activity ID of each leader in the segment file
    ///////////////////////////////////////////////////////////////////////
    void SetLeaderActivityId(FIT_UINT8 index, FIT_UINT32 leaderActivityId)
    {
        SetFieldUINT32Value(9, leaderActivityId, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of leader_activity_id_string
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumLeaderActivityIdString(void) const
    {
        return GetFieldNumValues(10, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of leader_activity_id_string field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsLeaderActivityIdStringValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(10);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns leader_activity_id_string field
    // Comment: String version of the activity ID of each leader in the segment file. 21 characters long for each ID, express in decimal
    ///////////////////////////////////////////////////////////////////////
    FIT_WSTRING GetLeaderActivityIdString(FIT_UINT8 index) const
    {
        return GetFieldSTRINGValue(10, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set leader_activity_id_string field
    // Comment: String version of the activity ID of each leader in the segment file. 21 characters long for each ID, express in decimal
    ///////////////////////////////////////////////////////////////////////
    void SetLeaderActivityIdString(FIT_UINT8 index, FIT_WSTRING leaderActivityIdString)
    {
        SetFieldSTRINGValue(10, leaderActivityIdString, index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of default_race_leader field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsDefaultRaceLeaderValid() const
    {
        const Field* field = GetField(11);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns default_race_leader field
    // Comment: Index for the Leader Board entry selected as the default race participant
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetDefaultRaceLeader(void) const
    {
        return GetFieldUINT8Value(11, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set default_race_leader field
    // Comment: Index for the Leader Board entry selected as the default race participant
    ///////////////////////////////////////////////////////////////////////
    void SetDefaultRaceLeader(FIT_UINT8 defaultRaceLeader)
    {
        SetFieldUINT8Value(11, defaultRaceLeader, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_SEGMENT_FILE_MESG_HPP)
