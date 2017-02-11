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

SEXP r_so_MLE_new()
{
	so_MLE *obj = so_MLE_new();
	if (!obj) {
		error("Failed to create so_MLE object");
	}
	return R_MakeExternalPtr(obj, R_NilValue, R_NilValue);
}

SEXP r_so_MLE_copy(SEXP self)
{
	so_MLE *obj = so_MLE_copy(R_ExternalPtrAddr(self));
	if (!obj) {
		error("Failed to copy so_MLE object");
	}
	return R_MakeExternalPtr(obj, R_NilValue, R_NilValue);
}

SEXP r_so_MLE_free(SEXP self)
{
	so_MLE_free(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_MLE_ref(SEXP self)
{
	so_MLE_ref(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_MLE_unref(SEXP self)
{
	so_MLE_unref(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_MLE_get_FIM(SEXP self)
{
	so_Matrix *child = so_MLE_get_FIM(R_ExternalPtrAddr(self));
	SEXP result = matrix2Rmatrix(child);
	return result;
}

SEXP r_so_MLE_set_FIM(SEXP self, SEXP child)
{
	so_Matrix *matrix = Rmatrix2matrix(child);
	so_MLE_set_FIM(R_ExternalPtrAddr(self), matrix);
	return R_NilValue;
}

SEXP r_so_MLE_create_FIM(SEXP self)
{
	so_Matrix *child = so_MLE_create_FIM(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_MLE_get_CovarianceMatrix(SEXP self)
{
	so_Matrix *child = so_MLE_get_CovarianceMatrix(R_ExternalPtrAddr(self));
	SEXP result = matrix2Rmatrix(child);
	return result;
}

SEXP r_so_MLE_set_CovarianceMatrix(SEXP self, SEXP child)
{
	so_Matrix *matrix = Rmatrix2matrix(child);
	so_MLE_set_CovarianceMatrix(R_ExternalPtrAddr(self), matrix);
	return R_NilValue;
}

SEXP r_so_MLE_create_CovarianceMatrix(SEXP self)
{
	so_Matrix *child = so_MLE_create_CovarianceMatrix(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_MLE_get_CorrelationMatrix(SEXP self)
{
	so_Matrix *child = so_MLE_get_CorrelationMatrix(R_ExternalPtrAddr(self));
	SEXP result = matrix2Rmatrix(child);
	return result;
}

SEXP r_so_MLE_set_CorrelationMatrix(SEXP self, SEXP child)
{
	so_Matrix *matrix = Rmatrix2matrix(child);
	so_MLE_set_CorrelationMatrix(R_ExternalPtrAddr(self), matrix);
	return R_NilValue;
}

SEXP r_so_MLE_create_CorrelationMatrix(SEXP self)
{
	so_Matrix *child = so_MLE_create_CorrelationMatrix(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_MLE_get_StandardError(SEXP self)
{
	so_Table *child = so_MLE_get_StandardError(R_ExternalPtrAddr(self));
	SEXP result = table2df(child);
	return result;
}

SEXP r_so_MLE_set_StandardError(SEXP self, SEXP child)
{
	so_Table *table = df2table(child);
	so_MLE_set_StandardError(R_ExternalPtrAddr(self), table);
	return R_NilValue;
}

SEXP r_so_MLE_create_StandardError(SEXP self)
{
	so_Table *child = so_MLE_create_StandardError(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_MLE_get_RelativeStandardError(SEXP self)
{
	so_Table *child = so_MLE_get_RelativeStandardError(R_ExternalPtrAddr(self));
	SEXP result = table2df(child);
	return result;
}

SEXP r_so_MLE_set_RelativeStandardError(SEXP self, SEXP child)
{
	so_Table *table = df2table(child);
	so_MLE_set_RelativeStandardError(R_ExternalPtrAddr(self), table);
	return R_NilValue;
}

SEXP r_so_MLE_create_RelativeStandardError(SEXP self)
{
	so_Table *child = so_MLE_create_RelativeStandardError(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_MLE_get_AsymptoticCI(SEXP self)
{
	so_Table *child = so_MLE_get_AsymptoticCI(R_ExternalPtrAddr(self));
	SEXP result = table2df(child);
	return result;
}

SEXP r_so_MLE_set_AsymptoticCI(SEXP self, SEXP child)
{
	so_Table *table = df2table(child);
	so_MLE_set_AsymptoticCI(R_ExternalPtrAddr(self), table);
	return R_NilValue;
}

SEXP r_so_MLE_create_AsymptoticCI(SEXP self)
{
	so_Table *child = so_MLE_create_AsymptoticCI(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_MLE_get_ConditionNumber(SEXP self)
{
	double *child = so_MLE_get_ConditionNumber(R_ExternalPtrAddr(self));
	if (!child) {
		return R_NilValue;
	}
	SEXP result;
	PROTECT(result = NEW_NUMERIC(1));
	REAL(result)[0] = *child;
	UNPROTECT(1);
	return result;
}

SEXP r_so_MLE_set_ConditionNumber(SEXP self, SEXP child)
{
	so_MLE_set_ConditionNumber(R_ExternalPtrAddr(self), REAL(child));
	return R_NilValue;
}

