/* GIO - GLib Input, Output and Streaming Library
 * 
 * Copyright (C) 2006-2007 Red Hat, Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, see <http://www.gnu.org/licenses/>.
 *
 * Authors: Alexander Larsson <alexl@redhat.com>
 *          John McCutchan <john@johnmccutchan.com> 
 *          Sebastian Dröge <slomo@circular-chaos.org>
 */

#ifndef __FAM_HELPER_H__
#define __FAM_HELPER_H__

typedef struct _fam_sub fam_sub;

gboolean  _fam_sub_startup (void);
void      _fam_sub_shutdown (void);
fam_sub*  _fam_sub_add     (const gchar* pathname,
			    gboolean     directory,
			    gpointer     user_data);
gboolean  _fam_sub_cancel  (fam_sub* sub);
void      _fam_sub_free    (fam_sub* sub);

#endif /* __FAM_HELPER_H__ */
