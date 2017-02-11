/* libsoc - Library to handle standardised output files
 * Copyright (C) 2015 Rikard Nordgren
 * 
 * This file was autogenerated and should not be edited
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 * 
 * his library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

#include <R.h>
#include <Rdefines.h>
#include <so.h>
#include "soc.h"

SEXP r_so_OtherMethod_new()
{
	so_OtherMethod *obj = so_OtherMethod_new();
	if (!obj) {
		error("Failed to create so_OtherMethod object");
	}
	return R_MakeExternalPtr(obj, R_NilValue, R_NilValue);
}

SEXP r_so_OtherMethod_copy(SEXP self)
{
	so_OtherMethod *obj = so_OtherMethod_copy(R_ExternalPtrAddr(self));
	if (!obj) {
		error("Failed to copy so_OtherMethod object");
	}
	return R_MakeExternalPtr(obj, R_NilValue, R_NilValue);
}

SEXP r_so_OtherMethod_free(SEXP self)
{
	so_OtherMethod_free(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_OtherMethod_ref(SEXP self)
{
	so_OtherMethod_ref(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_OtherMethod_unref(SEXP self)
{
	so_OtherMethod_unref(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_OtherMethod_get_Mean(SEXP self)
{
	so_Table *child = so_OtherMethod_get_Mean(R_ExternalPtrAddr(self));
	SEXP result = table2df(child);
	return result;
}

SEXP r_so_OtherMethod_set_Mean(SEXP self, SEXP child)
{
	so_Table *table = df2table(child);
	so_OtherMethod_set_Mean(R_ExternalPtrAddr(self), table);
	return R_NilValue;
}

SEXP r_so_OtherMethod_create_Mean(SEXP self)
{
	so_Table *child = so_OtherMethod_create_Mean(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_OtherMethod_get_Median(SEXP self)
{
	so_Table *child = so_OtherMethod_get_Median(R_ExternalPtrAddr(self));
	SEXP result = table2df(child);
	return result;
}

SEXP r_so_OtherMethod_set_Median(SEXP self, SEXP child)
{
	so_Table *table = df2table(child);
	so_OtherMethod_set_Median(R_ExternalPtrAddr(self), table);
	return R_NilValue;
}

SEXP r_so_OtherMethod_create_Median(SEXP self)
{
	so_Table *child = so_OtherMethod_create_Median(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_OtherMethod_get_method(SEXP self)
{
	char *value = so_OtherMethod_get_method(R_ExternalPtrAddr(self));

	SEXP result;

	if (value) {
		result = PROTECT(NEW_STRING(1));
		SET_STRING_ELT(result, 0, mkChar(value));

		UNPROTECT(1);
	} else {
		result = R_NilValue;
	}
	return result;
}

SEXP r_so_OtherMethod_set_method(SEXP self, SEXP string)
{
	char *c_string = (char *) CHAR(STRING_ELT(string, 0));
	int fail = so_OtherMethod_set_method(R_ExternalPtrAddr(self), c_string);
	if (fail) {
		error("so_OtherMethod_set_method failed");
	}

	return R_NilValue;
}
