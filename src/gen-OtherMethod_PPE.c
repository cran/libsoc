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

SEXP r_so_OtherMethod_PPE_new()
{
	so_OtherMethod_PPE *obj = so_OtherMethod_PPE_new();
	if (!obj) {
		error("Failed to create so_OtherMethod_PPE object");
	}
	return R_MakeExternalPtr(obj, R_NilValue, R_NilValue);
}

SEXP r_so_OtherMethod_PPE_copy(SEXP self)
{
	so_OtherMethod_PPE *obj = so_OtherMethod_PPE_copy(R_ExternalPtrAddr(self));
	if (!obj) {
		error("Failed to copy so_OtherMethod_PPE object");
	}
	return R_MakeExternalPtr(obj, R_NilValue, R_NilValue);
}

SEXP r_so_OtherMethod_PPE_free(SEXP self)
{
	so_OtherMethod_PPE_free(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_OtherMethod_PPE_ref(SEXP self)
{
	so_OtherMethod_PPE_ref(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_OtherMethod_PPE_unref(SEXP self)
{
	so_OtherMethod_PPE_unref(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_OtherMethod_PPE_get_CovarianceMatrix(SEXP self)
{
	so_Matrix *child = so_OtherMethod_PPE_get_CovarianceMatrix(R_ExternalPtrAddr(self));
	SEXP result = matrix2Rmatrix(child);
	return result;
}

SEXP r_so_OtherMethod_PPE_set_CovarianceMatrix(SEXP self, SEXP child)
{
	so_Matrix *matrix = Rmatrix2matrix(child);
	so_OtherMethod_PPE_set_CovarianceMatrix(R_ExternalPtrAddr(self), matrix);
	return R_NilValue;
}

SEXP r_so_OtherMethod_PPE_create_CovarianceMatrix(SEXP self)
{
	so_Matrix *child = so_OtherMethod_PPE_create_CovarianceMatrix(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_OtherMethod_PPE_get_CorrelationMatrix(SEXP self)
{
	so_Matrix *child = so_OtherMethod_PPE_get_CorrelationMatrix(R_ExternalPtrAddr(self));
	SEXP result = matrix2Rmatrix(child);
	return result;
}

SEXP r_so_OtherMethod_PPE_set_CorrelationMatrix(SEXP self, SEXP child)
{
	so_Matrix *matrix = Rmatrix2matrix(child);
	so_OtherMethod_PPE_set_CorrelationMatrix(R_ExternalPtrAddr(self), matrix);
	return R_NilValue;
}

SEXP r_so_OtherMethod_PPE_create_CorrelationMatrix(SEXP self)
{
	so_Matrix *child = so_OtherMethod_PPE_create_CorrelationMatrix(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_OtherMethod_PPE_get_StandardDeviation(SEXP self)
{
	so_Table *child = so_OtherMethod_PPE_get_StandardDeviation(R_ExternalPtrAddr(self));
	SEXP result = table2df(child);
	return result;
}

SEXP r_so_OtherMethod_PPE_set_StandardDeviation(SEXP self, SEXP child)
{
	so_Table *table = df2table(child);
	so_OtherMethod_PPE_set_StandardDeviation(R_ExternalPtrAddr(self), table);
	return R_NilValue;
}

SEXP r_so_OtherMethod_PPE_create_StandardDeviation(SEXP self)
{
	so_Table *child = so_OtherMethod_PPE_create_StandardDeviation(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_OtherMethod_PPE_get_StandardError(SEXP self)
{
	so_Table *child = so_OtherMethod_PPE_get_StandardError(R_ExternalPtrAddr(self));
	SEXP result = table2df(child);
	return result;
}

SEXP r_so_OtherMethod_PPE_set_StandardError(SEXP self, SEXP child)
{
	so_Table *table = df2table(child);
	so_OtherMethod_PPE_set_StandardError(R_ExternalPtrAddr(self), table);
	return R_NilValue;
}

SEXP r_so_OtherMethod_PPE_create_StandardError(SEXP self)
{
	so_Table *child = so_OtherMethod_PPE_create_StandardError(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_OtherMethod_PPE_get_AsymptoticCI(SEXP self)
{
	so_Table *child = so_OtherMethod_PPE_get_AsymptoticCI(R_ExternalPtrAddr(self));
	SEXP result = table2df(child);
	return result;
}

SEXP r_so_OtherMethod_PPE_set_AsymptoticCI(SEXP self, SEXP child)
{
	so_Table *table = df2table(child);
	so_OtherMethod_PPE_set_AsymptoticCI(R_ExternalPtrAddr(self), table);
	return R_NilValue;
}

SEXP r_so_OtherMethod_PPE_create_AsymptoticCI(SEXP self)
{
	so_Table *child = so_OtherMethod_PPE_create_AsymptoticCI(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_OtherMethod_PPE_get_PercentilesCI(SEXP self)
{
	so_Table *child = so_OtherMethod_PPE_get_PercentilesCI(R_ExternalPtrAddr(self));
	SEXP result = table2df(child);
	return result;
}

SEXP r_so_OtherMethod_PPE_set_PercentilesCI(SEXP self, SEXP child)
{
	so_Table *table = df2table(child);
	so_OtherMethod_PPE_set_PercentilesCI(R_ExternalPtrAddr(self), table);
	return R_NilValue;
}

SEXP r_so_OtherMethod_PPE_create_PercentilesCI(SEXP self)
{
	so_Table *child = so_OtherMethod_PPE_create_PercentilesCI(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}
