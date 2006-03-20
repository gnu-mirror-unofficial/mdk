/* -*-c-*- ---------------- mixgtk_fontsel.h :
 * Functions for handling font selection.
 * ------------------------------------------------------------------
 *  $Id: mixgtk_fontsel.h,v 1.8 2005/09/20 19:43:14 jao Exp $
 * ------------------------------------------------------------------
 * Copyright (C) 2001, 2004 Free Software Foundation, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */


#ifndef MIXGTK_FONTSEL_H
#define MIXGTK_FONTSEL_H

#include <glib.h>
#include "mixgtk_widgets.h"

typedef enum {
  MIX_FONT_MIXVM,
  MIX_FONT_LOG,
  MIX_FONT_PROMPT,
  MIX_FONT_MIXAL,
  MIX_FONT_DEVICES,
  MIX_FONT_SYMBOLS,
  MIX_FONT_DEFAULT,
  MIX_FONT_NO
} mixgtk_font_t;

/* configured fonts */
extern void
mixgtk_fontsel_set_font (mixgtk_font_t f, GtkWidget *w);

extern gboolean
mixgtk_fontsel_query_font (mixgtk_font_t f, GtkWidget **ws, size_t no);


#endif /* MIXGTK_FONTSEL_H */
