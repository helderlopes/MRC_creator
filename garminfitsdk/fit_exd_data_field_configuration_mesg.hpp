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


#if !defined(FIT_EXD_DATA_FIELD_CONFIGURATION_MESG_HPP)
#define FIT_EXD_DATA_FIELD_CONFIGURATION_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class ExdDataFieldConfigurationMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 ScreenIndex = 0;
       static const FIT_UINT8 ConceptField = 1;
       static const FIT_UINT8 FieldId = 2;
       static const FIT_UINT8 ConceptCount = 3;
       static const FIT_UINT8 DisplayType = 4;
       static const FIT_UINT8 Title = 5;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    ExdDataFieldConfigurationMesg(void) : Mesg(Profile::MESG_EXD_DATA_FIELD_CONFIGURATION)
    {
    }

    ExdDataFieldConfigurationMesg(const Mesg &mesg) : Mesg(mesg)
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of screen_index field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsScreenIndexValid() const
    {
        const Field* field = GetField(0);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns screen_index field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetScreenIndex(void) const
    {
        return GetFieldUINT8Value(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set screen_index field
    ///////////////////////////////////////////////////////////////////////
    void SetScreenIndex(FIT_UINT8 screenIndex)
    {
        SetFieldUINT8Value(0, screenIndex, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of concept_field field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsConceptFieldValid() const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns concept_field field
    ///////////////////////////////////////////////////////////////////////
    FIT_BYTE GetConceptField(void) const
    {
        return GetFieldBYTEValue(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set concept_field field
    ///////////////////////////////////////////////////////////////////////
    void SetConceptField(FIT_BYTE conceptField)
    {
        SetFieldBYTEValue(1, conceptField, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of field_id field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsFieldIdValid() const
    {
        const Field* field = GetField(2);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns field_id field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetFieldId(void) const
    {
        return GetFieldUINT8Value(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set field_id field
    ///////////////////////////////////////////////////////////////////////
    void SetFieldId(FIT_UINT8 fieldId)
    {
        SetFieldUINT8Value(2, fieldId, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of concept_count field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsConceptCountValid() const
    {
        const Field* field = GetField(3);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns concept_count field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetConceptCount(void) const
    {
        return GetFieldUINT8Value(3, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set concept_count field
    ///////////////////////////////////////////////////////////////////////
    void SetConceptCount(FIT_UINT8 conceptCount)
    {
        SetFieldUINT8Value(3, conceptCount, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of display_type field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsDisplayTypeValid() const
    {
        const Field* field = GetField(4);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns display_type field
    ///////////////////////////////////////////////////////////////////////
    FIT_EXD_DISPLAY_TYPE GetDisplayType(void) const
    {
        return GetFieldENUMValue(4, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set display_type field
    ///////////////////////////////////////////////////////////////////////
    void SetDisplayType(FIT_EXD_DISPLAY_TYPE displayType)
    {
        SetFieldENUMValue(4, displayType, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of title
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumTitle(void) const
    {
        return GetFieldNumValues(5, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of title field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTitleValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(5);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns title field
    ///////////////////////////////////////////////////////////////////////
    FIT_WSTRING GetTitle(FIT_UINT8 index) const
    {
        return GetFieldSTRINGValue(5, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set title field
    ///////////////////////////////////////////////////////////////////////
    void SetTitle(FIT_UINT8 index, FIT_WSTRING title)
    {
        SetFieldSTRINGValue(5, title, index);
    }

};

} // namespace fit

#endif // !defined(FIT_EXD_DATA_FIELD_CONFIGURATION_MESG_HPP)
