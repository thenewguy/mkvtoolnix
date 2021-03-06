/*
   mkvmerge -- utility for splicing together matroska files
   from component media subtypes

   Distributed under the GPL
   see the file COPYING for details
   or visit http://www.gnu.org/copyleft/gpl.html

   Definitions for locale handling functions

   Written by Moritz Bunkus <moritz@bunkus.org>.
*/

#ifndef __MTX_COMMON_LOCALE_UTF8_H
#define __MTX_COMMON_LOCALE_UTF8_H

#include "common/common_pch.h"

std::wstring to_wide(const std::string &source);

inline std::wstring
to_wide(std::wstring const &source) {
  return source;
}
inline std::wstring
to_wide(boost::wformat const &source) {
  return source.str();
}

std::string to_utf8(const std::wstring &source);

inline std::string
to_utf8(std::string const &source) {
  return source;
}
inline std::string
to_utf8(boost::format const &source) {
  return source.str();
}

size_t get_width_in_em(wchar_t c);
size_t get_width_in_em(const std::wstring &s);

#endif  // __MTX_COMMON_LOCALE_UTF8_H
