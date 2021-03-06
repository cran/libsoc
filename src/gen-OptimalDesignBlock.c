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

SEXP r_so_OptimalDesignBlock_new()
{
	so_OptimalDesignBlock *obj = so_OptimalDesignBlock_new();
	if (!obj) {
		error("Failed to create so_OptimalDesignBlock object");
	}
	return R_MakeExternalPtr(obj, R_NilValue, R_NilValue);
}

SEXP r_so_OptimalDesignBlock_copy(SEXP self)
{
	so_OptimalDesignBlock *obj = so_OptimalDesignBlock_copy(R_ExternalPtrAddr(self));
	if (!obj) {
		error("Failed to copy so_OptimalDesignBlock object");
	}
	return R_MakeExternalPtr(obj, R_NilValue, R_NilValue);
}

SEXP r_so_OptimalDesignBlock_free(SEXP self)
{
	so_OptimalDesignBlock_free(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_OptimalDesignBlock_ref(SEXP self)
{
	so_OptimalDesignBlock_ref(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_OptimalDesignBlock_unref(SEXP self)
{
	so_OptimalDesignBlock_unref(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_OptimalDesignBlock_get_FIM(SEXP self)
{
	so_Matrix *child = so_OptimalDesignBlock_get_FIM(R_ExternalPtrAddr(self));
	SEXP result = matrix2Rmatrix(child);
	return result;
}

SEXP r_so_OptimalDesignBlock_set_FIM(SEXP self, SEXP child)
{
	so_Matrix *matrix = Rmatrix2matrix(child);
	so_OptimalDesignBlock_set_FIM(R_ExternalPtrAddr(self), matrix);
	return R_NilValue;
}

SEXP r_so_OptimalDesignBlock_create_FIM(SEXP self)
{
	so_Matrix *child = so_OptimalDesignBlock_create_FIM(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_OptimalDesignBlock_get_CovarianceMatrix(SEXP self)
{
	so_Matrix *child = so_OptimalDesignBlock_get_CovarianceMatrix(R_ExternalPtrAddr(self));
	SEXP result = matrix2Rmatrix(child);
	return result;
}

SEXP r_so_OptimalDesignBlock_set_CovarianceMatrix(SEXP self, SEXP child)
{
	so_Matrix *matrix = Rmatrix2matrix(child);
	so_OptimalDesignBlock_set_CovarianceMatrix(R_ExternalPtrAddr(self), matrix);
	return R_NilValue;
}

SEXP r_so_OptimalDesignBlock_create_CovarianceMatrix(SEXP self)
{
	so_Matrix *child = so_OptimalDesignBlock_create_CovarianceMatrix(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_OptimalDesignBlock_get_ParameterPrecision(SEXP self)
{
	so_Table *child = so_OptimalDesignBlock_get_ParameterPrecision(R_ExternalPtrAddr(self));
	SEXP result = table2df(child);
	return result;
}

SEXP r_so_OptimalDesignBlock_set_ParameterPrecision(SEXP self, SEXP child)
{
	so_Table *table = df2table(child);
	so_OptimalDesignBlock_set_ParameterPrecision(R_ExternalPtrAddr(self), table);
	return R_NilValue;
}

SEXP r_so_OptimalDesignBlock_create_ParameterPrecision(SEXP self)
{
	so_Table *child = so_OptimalDesignBlock_create_ParameterPrecision(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_OptimalDesignBlock_get_Criteria(SEXP self)
{
	so_Table *child = so_OptimalDesignBlock_get_Criteria(R_ExternalPtrAddr(self));
	SEXP result = table2df(child);
	return result;
}

SEXP r_so_OptimalDesignBlock_set_Criteria(SEXP self, SEXP child)
{
	so_Table *table = df2table(child);
	so_OptimalDesignBlock_set_Criteria(R_ExternalPtrAddr(self), table);
	return R_NilValue;
}

SEXP r_so_OptimalDesignBlock_create_Criteria(SEXP self)
{
	so_Table *child = so_OptimalDesignBlock_create_Criteria(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_OptimalDesignBlock_get_Tests(SEXP self)
{
	so_Table *child = so_OptimalDesignBlock_get_Tests(R_ExternalPtrAddr(self));
	SEXP result = table2df(child);
	return result;
}

SEXP r_so_OptimalDesignBlock_set_Tests(SEXP self, SEXP child)
{
	so_Table *table = df2table(child);
	so_OptimalDesignBlock_set_Tests(R_ExternalPtrAddr(self), table);
	return R_NilValue;
}

SEXP r_so_OptimalDesignBlock_create_Tests(SEXP self)
{
	so_Table *child = so_OptimalDesignBlock_create_Tests(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_OptimalDesignBlock_get_SimulatedData(SEXP self)
{
	so_ExternalFile *child = so_OptimalDesignBlock_get_SimulatedData(R_ExternalPtrAddr(self));
	SEXP result = R_MakeExternalPtr(child, R_NilValue, R_NilValue);
	return result;
}

SEXP r_so_OptimalDesignBlock_set_SimulatedData(SEXP self, SEXP child)
{
	so_OptimalDesignBlock_set_SimulatedData(R_ExternalPtrAddr(self), R_ExternalPtrAddr(child));
	return R_NilValue;
}

SEXP r_so_OptimalDesignBlock_create_SimulatedData(SEXP self)
{
	so_ExternalFile *child = so_OptimalDesignBlock_create_SimulatedData(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_OptimalDesignBlock_get_Design(SEXP self)
{
	so_ExternalFile *child = so_OptimalDesignBlock_get_Design(R_ExternalPtrAddr(self));
	SEXP result = R_MakeExternalPtr(child, R_NilValue, R_NilValue);
	return result;
}

SEXP r_so_OptimalDesignBlock_set_Design(SEXP self, SEXP child)
{
	so_OptimalDesignBlock_set_Design(R_ExternalPtrAddr(self), R_ExternalPtrAddr(child));
	return R_NilValue;
}

SEXP r_so_OptimalDesignBlock_create_Design(SEXP self)
{
	so_ExternalFile *child = so_OptimalDesignBlock_create_Design(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_OptimalDesignBlock_get_blockNumber(SEXP self)
{
	int *value = so_OptimalDesignBlock_get_blockNumber(R_ExternalPtrAddr(self));

	SEXP result;

	if (value) {
		result = PROTECT(NEW_INTEGER(1));
		INTEGER(result)[0] = *value;

		UNPROTECT(1);
	} else {
		result = R_NilValue;
	}
	return result;
}

SEXP r_so_OptimalDesignBlock_set_blockNumber(SEXP self, SEXP string)
{
	so_OptimalDesignBlock_set_blockNumber(R_ExternalPtrAddr(self), INTEGER(string));

	return R_NilValue;
}

