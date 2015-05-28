/*
 * Astra: Unit tests
 * http://cesbo.com/astra
 *
 * Copyright (C) 2015, Artem Kharitonov <artem@sysert.ru>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <astra.h>
#include <check.h>

#ifndef _UNIT_TESTS_H_
#define _UNIT_TESTS_H_ 1

/* core */
Suite *core_clock(void);
Suite *core_timer(void);

/* unit test list */
typedef Suite (*(*const suite_func_t)(void));

static suite_func_t suite_list[] = {
    /* core */
    core_clock,
    core_timer,

    NULL,
};

#endif /* _UNIT_TESTS_H_ */