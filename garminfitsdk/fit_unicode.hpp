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
// Profile Version = 20.94Release
// Tag = production/akw/20.94.00-0-g9f67a9c
////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_UNICODE_HPP)
#define FIT_UNICODE_HPP

#include <iosfwd>
#include <string>
#include "fit.hpp"

namespace fit
{

class Unicode
{
public:
    typedef std::string UTF8_STRING;    // UTF-8 encoded strings used for file/message input and output.
    typedef std::fstream UTF8_FSTREAM;
    typedef std::ofstream UTF8_OFSTREAM;
    typedef std::ifstream UTF8_IFSTREAM;
    typedef std::stringstream UTF8_SSTREAM;
    typedef std::ostringstream UTF8_OSSTREAM;
    typedef std::istringstream UTF8_ISSTREAM;

public:
    static Unicode::UTF8_STRING Encode_BaseToUTF8(const FIT_WSTRING& strSrc);
    static FIT_WSTRING Encode_UTF8ToBase(const Unicode::UTF8_STRING& strSrc);
    static Unicode::UTF8_STRING Copy_StdToUTF8(const std::string& strSrc);
    static std::string Copy_UTF8ToStd(const Unicode::UTF8_STRING& strSrc);
};

} // namespace fit

#endif // !defined(FIT_UNICODE_HPP)
