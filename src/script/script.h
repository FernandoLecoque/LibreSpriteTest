/* ASE - Allegro Sprite Editor
 * Copyright (C) 2001-2005, 2007  David A. Capello
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
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef SCRIPT_H
#define SCRIPT_H

/* all Lua header files */
#include "lauxlib.h"
#include "lua.h"
#include "lualib.h"

int init_module_script (void);
void exit_module_script (void);

lua_State *get_lua_state (void);

int script_is_running (void);
void script_show_err (lua_State *L, int err);

int do_script_raw (lua_State *L, int nargs, int nresults);
int do_script_expr (const char *expr);
int do_script_file (const char *filename);

void load_all_scripts (void);

#endif /* SCRIPT_H */
