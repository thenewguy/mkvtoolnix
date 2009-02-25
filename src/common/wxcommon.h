/*
   wxcommon.h

   Distributed under the GPL
   see the file COPYING for details
   or visit http://www.gnu.org/copyleft/gpl.html

   definitions for wxWindows

   Written by Moritz Bunkus <moritz@bunkus.org>.
*/

#ifndef __WXCOMMON_H
#define __WXCOMMON_H

#include "config.h"

#include <wx/filedlg.h>

#if defined(wxUSE_UNICODE) && wxUSE_UNICODE
# define wxU(s) wxString(s, wxConvUTF8)
# define wxCS(s) ((const wchar_t *)(s).c_str())
# define wxMB(s) ((const char *)(s).mb_str(wxConvUTF8))
# define wxUCS(s) wxU(s).c_str()
# define wxCS2WS(s) wxUCS((s).c_str())
# define WXUNICODE 1
#else
# define wxU(s) wxString(s)
# define wxCS(s) ((const char *)(s).c_str())
# define wxMB(s) ((const char *)(s).c_str())
# define wxCS2WS(s) ((const char *)(s).c_str())
# define wxUCS(s) wxString(s).c_str()
# define WXUNICODE 0
#endif

/* i18n stuff */
#if defined(HAVE_LIBINTL_H)
# include <libintl.h>
# if !defined Z
#  define Z(s) wxU(gettext(s))
# endif
#else /* HAVE_LIBINTL_H */
# if !defined Z
#  define Z(s) wxU(s)
# endif
#endif

// Some of these constants are not defined in wxWidgets 2.6,
// but the old ones are outdated in 2.8 and not present if
// it was compiled without 2.6 compatibility.
#if !defined(wxFD_OPEN)
# define wxFD_OPEN wxOPEN
#endif

#if !defined(wxFD_SAVE)
# define wxFD_SAVE wxSAVE
#endif

#if !defined(wxFD_MULTIPLE)
# define wxFD_MULTIPLE wxMULTIPLE
#endif

#if !defined(wxFD_OVERWRITE_PROMPT)
# define wxFD_OVERWRITE_PROMPT wxOVERWRITE_PROMPT
#endif

#endif /* __WXCOMMON_H */
