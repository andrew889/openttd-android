/* $Id$ */

/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file toolbar_type.h Types related to toolbars. */

#ifndef TOOLBAR_TYPE_H
#define TOOLBAR_TYPE_H

/** Types of touchscreen modes. */
enum TouchscreenMode {
	TSC_NONE = 0,
	TSC_SIMPLE,
	TSC_CONFIRM,
};
DECLARE_CYCLE(TouchscreenMode, TSC_NONE, TSC_CONFIRM)
typedef SimpleTinyEnumT<TouchscreenMode, byte> TouchscreenModeByte;

#endif /* TOOLBAR_TYPE_H */
