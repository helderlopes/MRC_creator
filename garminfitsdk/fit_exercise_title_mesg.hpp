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


#if !defined(FIT_EXERCISE_TITLE_MESG_HPP)
#define FIT_EXERCISE_TITLE_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class ExerciseTitleMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 MessageIndex = 254;
       static const FIT_UINT8 ExerciseCategory = 0;
       static const FIT_UINT8 ExerciseName = 1;
       static const FIT_UINT8 WktStepName = 2;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    ExerciseTitleMesg(void) : Mesg(Profile::MESG_EXERCISE_TITLE)
    {
    }

    ExerciseTitleMesg(const Mesg &mesg) : Mesg(mesg)
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
    // Checks the validity of exercise_category field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsExerciseCategoryValid() const
    {
        const Field* field = GetField(0);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns exercise_category field
    ///////////////////////////////////////////////////////////////////////
    FIT_EXERCISE_CATEGORY GetExerciseCategory(void) const
    {
        return GetFieldUINT16Value(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set exercise_category field
    ///////////////////////////////////////////////////////////////////////
    void SetExerciseCategory(FIT_EXERCISE_CATEGORY exerciseCategory)
    {
        SetFieldUINT16Value(0, exerciseCategory, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of exercise_name field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsExerciseNameValid() const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns exercise_name field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetExerciseName(void) const
    {
        return GetFieldUINT16Value(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set exercise_name field
    ///////////////////////////////////////////////////////////////////////
    void SetExerciseName(FIT_UINT16 exerciseName)
    {
        SetFieldUINT16Value(1, exerciseName, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of wkt_step_name
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumWktStepName(void) const
    {
        return GetFieldNumValues(2, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of wkt_step_name field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsWktStepNameValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(2);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns wkt_step_name field
    ///////////////////////////////////////////////////////////////////////
    FIT_WSTRING GetWktStepName(FIT_UINT8 index) const
    {
        return GetFieldSTRINGValue(2, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set wkt_step_name field
    ///////////////////////////////////////////////////////////////////////
    void SetWktStepName(FIT_UINT8 index, FIT_WSTRING wktStepName)
    {
        SetFieldSTRINGValue(2, wktStepName, index);
    }

};

} // namespace fit

#endif // !defined(FIT_EXERCISE_TITLE_MESG_HPP)
