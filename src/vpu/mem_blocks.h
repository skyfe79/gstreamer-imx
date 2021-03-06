/* VPU memory block lists
 * Copyright (C) 2013  Carlos Rafael Giani
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */


#ifndef GST_IMX_PHYS_MEM_BLOCKS_H
#define GST_IMX_PHYS_MEM_BLOCKS_H

#include <gst/gst.h>
#include "../common/phys_mem_allocator.h"


G_BEGIN_DECLS


gboolean gst_imx_vpu_alloc_virt_mem_block(unsigned char **mem_block, int size);
void gst_imx_vpu_append_virt_mem_block(unsigned char *mem_block, GSList **virt_mem_blocks);
gboolean gst_imx_vpu_free_virt_mem_blocks(GSList **virt_mem_blocks);

/* currently, there is no gst_imx_vpu_alloc_phys_mem_block function, because
 * every subsystem (IPU, VPU ..) has its own set of physical memory allocators */
void gst_imx_vpu_append_phys_mem_block(GstImxPhysMemory *memory, GSList **phys_mem_blocks);
gboolean gst_imx_vpu_free_phys_mem_blocks(GstImxPhysMemAllocator *phys_mem_allocator, GSList **phys_mem_blocks);


G_END_DECLS


#endif

