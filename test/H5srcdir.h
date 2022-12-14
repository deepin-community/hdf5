/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Copyright by The HDF Group.                                               *
 * Copyright by the Board of Trustees of the University of Illinois.         *
 * All rights reserved.                                                      *
 *                                                                           *
 * This file is part of HDF5.  The full HDF5 copyright notice, including     *
 * terms governing use, modification, and redistribution, is contained in    *
 * the COPYING file, which can be found at the root of the source code       *
 * distribution tree, or in https://support.hdfgroup.org/ftp/HDF5/releases.  *
 * If you do not have access to either file, you may request a copy from     *
 * help@hdfgroup.org.                                                        *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/*
 * Programmer:  Quincey Koziol
 *              Wednesday, March 17, 2010
 *
 * Purpose:     srcdir querying support.
 */
#ifndef _H5SRCDIR_H
#define _H5SRCDIR_H

#ifdef __cplusplus
extern "C" {
#endif
/* Just return the srcdir path */
H5TEST_DLL const char *H5_get_srcdir(void);

/* Append the test file name to the srcdir path and return the whole string */
H5TEST_DLL const char *H5_get_srcdir_filename(const char *filename);

#ifdef __cplusplus
}
#endif

#endif /* _H5SRCDIR_H */

