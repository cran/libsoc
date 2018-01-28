#include <R.h>
#include <Rinternals.h>
#include <R_ext/Rdynload.h>

SEXP r_so_RawResults_new();
SEXP r_so_RawResults_copy(SEXP arg0);
SEXP r_so_RawResults_free(SEXP arg0);
SEXP r_so_RawResults_ref(SEXP arg0);
SEXP r_so_RawResults_unref(SEXP arg0);
SEXP r_so_RawResults_get_DataFile(SEXP arg0,SEXP arg1);
SEXP r_so_RawResults_get_number_of_DataFile(SEXP arg0);
SEXP r_so_RawResults_add_DataFile(SEXP arg0,SEXP arg1);
SEXP r_so_RawResults_remove_DataFile(SEXP arg0,SEXP arg1);
SEXP r_so_RawResults_create_DataFile(SEXP arg0);
SEXP r_so_RawResults_get_GraphicsFile(SEXP arg0,SEXP arg1);
SEXP r_so_RawResults_get_number_of_GraphicsFile(SEXP arg0);
SEXP r_so_RawResults_add_GraphicsFile(SEXP arg0,SEXP arg1);
SEXP r_so_RawResults_remove_GraphicsFile(SEXP arg0,SEXP arg1);
SEXP r_so_RawResults_create_GraphicsFile(SEXP arg0);
SEXP r_so_MLE_new();
SEXP r_so_MLE_copy(SEXP arg0);
SEXP r_so_MLE_free(SEXP arg0);
SEXP r_so_MLE_ref(SEXP arg0);
SEXP r_so_MLE_unref(SEXP arg0);
SEXP r_so_MLE_get_FIM(SEXP arg0);
SEXP r_so_MLE_set_FIM(SEXP arg0,SEXP arg1);
SEXP r_so_MLE_create_FIM(SEXP arg0);
SEXP r_so_MLE_get_CovarianceMatrix(SEXP arg0);
SEXP r_so_MLE_set_CovarianceMatrix(SEXP arg0,SEXP arg1);
SEXP r_so_MLE_create_CovarianceMatrix(SEXP arg0);
SEXP r_so_MLE_get_CorrelationMatrix(SEXP arg0);
SEXP r_so_MLE_set_CorrelationMatrix(SEXP arg0,SEXP arg1);
SEXP r_so_MLE_create_CorrelationMatrix(SEXP arg0);
SEXP r_so_MLE_get_StandardError(SEXP arg0);
SEXP r_so_MLE_set_StandardError(SEXP arg0,SEXP arg1);
SEXP r_so_MLE_create_StandardError(SEXP arg0);
SEXP r_so_MLE_get_RelativeStandardError(SEXP arg0);
SEXP r_so_MLE_set_RelativeStandardError(SEXP arg0,SEXP arg1);
SEXP r_so_MLE_create_RelativeStandardError(SEXP arg0);
SEXP r_so_MLE_get_AsymptoticCI(SEXP arg0);
SEXP r_so_MLE_set_AsymptoticCI(SEXP arg0,SEXP arg1);
SEXP r_so_MLE_create_AsymptoticCI(SEXP arg0);
SEXP r_so_MLE_get_ConditionNumber(SEXP arg0);
SEXP r_so_MLE_set_ConditionNumber(SEXP arg0,SEXP arg1);
SEXP r_so_Estimates_new();
SEXP r_so_Estimates_copy(SEXP arg0);
SEXP r_so_Estimates_free(SEXP arg0);
SEXP r_so_Estimates_ref(SEXP arg0);
SEXP r_so_Estimates_unref(SEXP arg0);
SEXP r_so_Estimates_get_Mean(SEXP arg0);
SEXP r_so_Estimates_set_Mean(SEXP arg0,SEXP arg1);
SEXP r_so_Estimates_create_Mean(SEXP arg0);
SEXP r_so_Estimates_get_Median(SEXP arg0);
SEXP r_so_Estimates_set_Median(SEXP arg0,SEXP arg1);
SEXP r_so_Estimates_create_Median(SEXP arg0);
SEXP r_so_Estimates_get_Mode(SEXP arg0);
SEXP r_so_Estimates_set_Mode(SEXP arg0,SEXP arg1);
SEXP r_so_Estimates_create_Mode(SEXP arg0);
SEXP r_so_Estimates_get_Samples(SEXP arg0);
SEXP r_so_Estimates_set_Samples(SEXP arg0,SEXP arg1);
SEXP r_so_Estimates_create_Samples(SEXP arg0);
SEXP r_so_TargetToolMessages_new();
SEXP r_so_TargetToolMessages_copy(SEXP arg0);
SEXP r_so_TargetToolMessages_free(SEXP arg0);
SEXP r_so_TargetToolMessages_ref(SEXP arg0);
SEXP r_so_TargetToolMessages_unref(SEXP arg0);
SEXP r_so_TargetToolMessages_get_Termination(SEXP arg0);
SEXP r_so_TargetToolMessages_set_Termination(SEXP arg0,SEXP arg1);
SEXP r_so_TargetToolMessages_get_Warnings(SEXP arg0);
SEXP r_so_TargetToolMessages_set_Warnings(SEXP arg0,SEXP arg1);
SEXP r_so_TargetToolMessages_get_Errors(SEXP arg0);
SEXP r_so_TargetToolMessages_set_Errors(SEXP arg0,SEXP arg1);
SEXP r_so_TargetToolMessages_get_ElapsedTime(SEXP arg0);
SEXP r_so_TargetToolMessages_set_ElapsedTime(SEXP arg0,SEXP arg1);
SEXP r_so_TargetToolMessages_get_OutputFilePath(SEXP arg0);
SEXP r_so_TargetToolMessages_set_OutputFilePath(SEXP arg0,SEXP arg1);
SEXP r_so_TargetToolMessages_create_OutputFilePath(SEXP arg0);
SEXP r_so_TargetToolMessages_get_ChainsNumber(SEXP arg0);
SEXP r_so_TargetToolMessages_set_ChainsNumber(SEXP arg0,SEXP arg1);
SEXP r_so_TargetToolMessages_get_IterationNumber(SEXP arg0);
SEXP r_so_TargetToolMessages_set_IterationNumber(SEXP arg0,SEXP arg1);
SEXP r_so_SO_new();
SEXP r_so_SO_copy(SEXP arg0);
SEXP r_so_SO_free(SEXP arg0);
SEXP r_so_SO_ref(SEXP arg0);
SEXP r_so_SO_unref(SEXP arg0);
SEXP r_so_SO_get_Description(SEXP arg0);
SEXP r_so_SO_set_Description(SEXP arg0,SEXP arg1);
SEXP r_so_SO_get_PharmMLRef(SEXP arg0);
SEXP r_so_SO_set_PharmMLRef(SEXP arg0,SEXP arg1);
SEXP r_so_SO_create_PharmMLRef(SEXP arg0);
SEXP r_so_SO_get_SOBlock(SEXP arg0,SEXP arg1);
SEXP r_so_SO_get_number_of_SOBlock(SEXP arg0);
SEXP r_so_SO_add_SOBlock(SEXP arg0,SEXP arg1);
SEXP r_so_SO_remove_SOBlock(SEXP arg0,SEXP arg1);
SEXP r_so_SO_create_SOBlock(SEXP arg0);
SEXP r_so_SO_get_id(SEXP arg0);
SEXP r_so_SO_set_id(SEXP arg0,SEXP arg1);
SEXP r_so_SO_get_metadataFile(SEXP arg0);
SEXP r_so_SO_set_metadataFile(SEXP arg0,SEXP arg1);
SEXP r_so_Bayesian_new();
SEXP r_so_Bayesian_copy(SEXP arg0);
SEXP r_so_Bayesian_free(SEXP arg0);
SEXP r_so_Bayesian_ref(SEXP arg0);
SEXP r_so_Bayesian_unref(SEXP arg0);
SEXP r_so_Bayesian_get_PosteriorMean(SEXP arg0);
SEXP r_so_Bayesian_set_PosteriorMean(SEXP arg0,SEXP arg1);
SEXP r_so_Bayesian_create_PosteriorMean(SEXP arg0);
SEXP r_so_Bayesian_get_PosteriorMedian(SEXP arg0);
SEXP r_so_Bayesian_set_PosteriorMedian(SEXP arg0,SEXP arg1);
SEXP r_so_Bayesian_create_PosteriorMedian(SEXP arg0);
SEXP r_so_Bayesian_get_PosteriorMode(SEXP arg0);
SEXP r_so_Bayesian_set_PosteriorMode(SEXP arg0,SEXP arg1);
SEXP r_so_Bayesian_create_PosteriorMode(SEXP arg0);
SEXP r_so_IndividualEstimates_new();
SEXP r_so_IndividualEstimates_copy(SEXP arg0);
SEXP r_so_IndividualEstimates_free(SEXP arg0);
SEXP r_so_IndividualEstimates_ref(SEXP arg0);
SEXP r_so_IndividualEstimates_unref(SEXP arg0);
SEXP r_so_IndividualEstimates_get_Estimates(SEXP arg0);
SEXP r_so_IndividualEstimates_set_Estimates(SEXP arg0,SEXP arg1);
SEXP r_so_IndividualEstimates_create_Estimates(SEXP arg0);
SEXP r_so_IndividualEstimates_get_RandomEffects(SEXP arg0);
SEXP r_so_IndividualEstimates_set_RandomEffects(SEXP arg0,SEXP arg1);
SEXP r_so_IndividualEstimates_create_RandomEffects(SEXP arg0);
SEXP r_so_IndividualEstimates_get_EtaShrinkage(SEXP arg0);
SEXP r_so_IndividualEstimates_set_EtaShrinkage(SEXP arg0,SEXP arg1);
SEXP r_so_IndividualEstimates_create_EtaShrinkage(SEXP arg0);
SEXP r_so_OptimalDesign_new();
SEXP r_so_OptimalDesign_copy(SEXP arg0);
SEXP r_so_OptimalDesign_free(SEXP arg0);
SEXP r_so_OptimalDesign_ref(SEXP arg0);
SEXP r_so_OptimalDesign_unref(SEXP arg0);
SEXP r_so_OptimalDesign_get_OptimalDesignBlock(SEXP arg0,SEXP arg1);
SEXP r_so_OptimalDesign_get_number_of_OptimalDesignBlock(SEXP arg0);
SEXP r_so_OptimalDesign_add_OptimalDesignBlock(SEXP arg0,SEXP arg1);
SEXP r_so_OptimalDesign_remove_OptimalDesignBlock(SEXP arg0,SEXP arg1);
SEXP r_so_OptimalDesign_create_OptimalDesignBlock(SEXP arg0);
SEXP r_so_OptimalDesign_get_type(SEXP arg0);
SEXP r_so_OptimalDesign_set_type(SEXP arg0,SEXP arg1);
SEXP r_so_ToolSettings_new();
SEXP r_so_ToolSettings_copy(SEXP arg0);
SEXP r_so_ToolSettings_free(SEXP arg0);
SEXP r_so_ToolSettings_ref(SEXP arg0);
SEXP r_so_ToolSettings_unref(SEXP arg0);
SEXP r_so_ToolSettings_get_File(SEXP arg0,SEXP arg1);
SEXP r_so_ToolSettings_get_number_of_File(SEXP arg0);
SEXP r_so_ToolSettings_add_File(SEXP arg0,SEXP arg1);
SEXP r_so_ToolSettings_remove_File(SEXP arg0,SEXP arg1);
SEXP r_so_ToolSettings_create_File(SEXP arg0);
SEXP r_so_Estimation_new();
SEXP r_so_Estimation_copy(SEXP arg0);
SEXP r_so_Estimation_free(SEXP arg0);
SEXP r_so_Estimation_ref(SEXP arg0);
SEXP r_so_Estimation_unref(SEXP arg0);
SEXP r_so_Estimation_get_PopulationEstimates(SEXP arg0);
SEXP r_so_Estimation_set_PopulationEstimates(SEXP arg0,SEXP arg1);
SEXP r_so_Estimation_create_PopulationEstimates(SEXP arg0);
SEXP r_so_Estimation_get_PrecisionPopulationEstimates(SEXP arg0);
SEXP r_so_Estimation_set_PrecisionPopulationEstimates(SEXP arg0,SEXP arg1);
SEXP r_so_Estimation_create_PrecisionPopulationEstimates(SEXP arg0);
SEXP r_so_Estimation_get_IndividualEstimates(SEXP arg0);
SEXP r_so_Estimation_set_IndividualEstimates(SEXP arg0,SEXP arg1);
SEXP r_so_Estimation_create_IndividualEstimates(SEXP arg0);
SEXP r_so_Estimation_get_PrecisionIndividualEstimates(SEXP arg0);
SEXP r_so_Estimation_set_PrecisionIndividualEstimates(SEXP arg0,SEXP arg1);
SEXP r_so_Estimation_create_PrecisionIndividualEstimates(SEXP arg0);
SEXP r_so_Estimation_get_Residuals(SEXP arg0);
SEXP r_so_Estimation_set_Residuals(SEXP arg0,SEXP arg1);
SEXP r_so_Estimation_create_Residuals(SEXP arg0);
SEXP r_so_Estimation_get_Predictions(SEXP arg0);
SEXP r_so_Estimation_set_Predictions(SEXP arg0,SEXP arg1);
SEXP r_so_Estimation_create_Predictions(SEXP arg0);
SEXP r_so_Estimation_get_OFMeasures(SEXP arg0);
SEXP r_so_Estimation_set_OFMeasures(SEXP arg0,SEXP arg1);
SEXP r_so_Estimation_create_OFMeasures(SEXP arg0);
SEXP r_so_Estimation_get_TargetToolMessages(SEXP arg0);
SEXP r_so_Estimation_set_TargetToolMessages(SEXP arg0,SEXP arg1);
SEXP r_so_Estimation_create_TargetToolMessages(SEXP arg0);
SEXP r_so_OptimalDesignBlock_new();
SEXP r_so_OptimalDesignBlock_copy(SEXP arg0);
SEXP r_so_OptimalDesignBlock_free(SEXP arg0);
SEXP r_so_OptimalDesignBlock_ref(SEXP arg0);
SEXP r_so_OptimalDesignBlock_unref(SEXP arg0);
SEXP r_so_OptimalDesignBlock_get_FIM(SEXP arg0);
SEXP r_so_OptimalDesignBlock_set_FIM(SEXP arg0,SEXP arg1);
SEXP r_so_OptimalDesignBlock_create_FIM(SEXP arg0);
SEXP r_so_OptimalDesignBlock_get_CovarianceMatrix(SEXP arg0);
SEXP r_so_OptimalDesignBlock_set_CovarianceMatrix(SEXP arg0,SEXP arg1);
SEXP r_so_OptimalDesignBlock_create_CovarianceMatrix(SEXP arg0);
SEXP r_so_OptimalDesignBlock_get_ParameterPrecision(SEXP arg0);
SEXP r_so_OptimalDesignBlock_set_ParameterPrecision(SEXP arg0,SEXP arg1);
SEXP r_so_OptimalDesignBlock_create_ParameterPrecision(SEXP arg0);
SEXP r_so_OptimalDesignBlock_get_Criteria(SEXP arg0);
SEXP r_so_OptimalDesignBlock_set_Criteria(SEXP arg0,SEXP arg1);
SEXP r_so_OptimalDesignBlock_create_Criteria(SEXP arg0);
SEXP r_so_OptimalDesignBlock_get_Tests(SEXP arg0);
SEXP r_so_OptimalDesignBlock_set_Tests(SEXP arg0,SEXP arg1);
SEXP r_so_OptimalDesignBlock_create_Tests(SEXP arg0);
SEXP r_so_OptimalDesignBlock_get_SimulatedData(SEXP arg0);
SEXP r_so_OptimalDesignBlock_set_SimulatedData(SEXP arg0,SEXP arg1);
SEXP r_so_OptimalDesignBlock_create_SimulatedData(SEXP arg0);
SEXP r_so_OptimalDesignBlock_get_Design(SEXP arg0);
SEXP r_so_OptimalDesignBlock_set_Design(SEXP arg0,SEXP arg1);
SEXP r_so_OptimalDesignBlock_create_Design(SEXP arg0);
SEXP r_so_OptimalDesignBlock_get_blockNumber(SEXP arg0);
SEXP r_so_OptimalDesignBlock_set_blockNumber(SEXP arg0,SEXP arg1);
SEXP r_so_OFMeasures_new();
SEXP r_so_OFMeasures_copy(SEXP arg0);
SEXP r_so_OFMeasures_free(SEXP arg0);
SEXP r_so_OFMeasures_ref(SEXP arg0);
SEXP r_so_OFMeasures_unref(SEXP arg0);
SEXP r_so_OFMeasures_get_Likelihood(SEXP arg0);
SEXP r_so_OFMeasures_set_Likelihood(SEXP arg0,SEXP arg1);
SEXP r_so_OFMeasures_get_LogLikelihood(SEXP arg0);
SEXP r_so_OFMeasures_set_LogLikelihood(SEXP arg0,SEXP arg1);
SEXP r_so_OFMeasures_get_Deviance(SEXP arg0);
SEXP r_so_OFMeasures_set_Deviance(SEXP arg0,SEXP arg1);
SEXP r_so_OFMeasures_get_ToolObjFunction(SEXP arg0);
SEXP r_so_OFMeasures_set_ToolObjFunction(SEXP arg0,SEXP arg1);
SEXP r_so_OFMeasures_get_IndividualContribToLL(SEXP arg0);
SEXP r_so_OFMeasures_set_IndividualContribToLL(SEXP arg0,SEXP arg1);
SEXP r_so_OFMeasures_create_IndividualContribToLL(SEXP arg0);
SEXP r_so_OFMeasures_get_InformationCriteria(SEXP arg0);
SEXP r_so_OFMeasures_set_InformationCriteria(SEXP arg0,SEXP arg1);
SEXP r_so_OFMeasures_create_InformationCriteria(SEXP arg0);
SEXP r_so_PrecisionIndividualEstimates_new();
SEXP r_so_PrecisionIndividualEstimates_copy(SEXP arg0);
SEXP r_so_PrecisionIndividualEstimates_free(SEXP arg0);
SEXP r_so_PrecisionIndividualEstimates_ref(SEXP arg0);
SEXP r_so_PrecisionIndividualEstimates_unref(SEXP arg0);
SEXP r_so_PrecisionIndividualEstimates_get_StandardDeviation(SEXP arg0);
SEXP r_so_PrecisionIndividualEstimates_set_StandardDeviation(SEXP arg0,SEXP arg1);
SEXP r_so_PrecisionIndividualEstimates_create_StandardDeviation(SEXP arg0);
SEXP r_so_PrecisionIndividualEstimates_get_PercentilesCI(SEXP arg0);
SEXP r_so_PrecisionIndividualEstimates_set_PercentilesCI(SEXP arg0,SEXP arg1);
SEXP r_so_PrecisionIndividualEstimates_create_PercentilesCI(SEXP arg0);
SEXP r_so_SimulationSubType_new();
SEXP r_so_SimulationSubType_copy(SEXP arg0);
SEXP r_so_SimulationSubType_free(SEXP arg0);
SEXP r_so_SimulationSubType_ref(SEXP arg0);
SEXP r_so_SimulationSubType_unref(SEXP arg0);
SEXP r_so_SimulationSubType_get_base(SEXP arg0);
SEXP r_so_SimulationSubType_set_base(SEXP arg0,SEXP arg1);
SEXP r_so_SimulationSubType_get_name(SEXP arg0);
SEXP r_so_SimulationSubType_set_name(SEXP arg0,SEXP arg1);
SEXP r_so_SimulationSubType_get_extFileNo(SEXP arg0);
SEXP r_so_SimulationSubType_set_extFileNo(SEXP arg0,SEXP arg1);
SEXP r_so_Simulation_new();
SEXP r_so_Simulation_copy(SEXP arg0);
SEXP r_so_Simulation_free(SEXP arg0);
SEXP r_so_Simulation_ref(SEXP arg0);
SEXP r_so_Simulation_unref(SEXP arg0);
SEXP r_so_Simulation_get_SimulationBlock(SEXP arg0,SEXP arg1);
SEXP r_so_Simulation_get_number_of_SimulationBlock(SEXP arg0);
SEXP r_so_Simulation_add_SimulationBlock(SEXP arg0,SEXP arg1);
SEXP r_so_Simulation_remove_SimulationBlock(SEXP arg0,SEXP arg1);
SEXP r_so_Simulation_create_SimulationBlock(SEXP arg0);
SEXP r_so_MissingData_new();
SEXP r_so_MissingData_copy(SEXP arg0);
SEXP r_so_MissingData_free(SEXP arg0);
SEXP r_so_MissingData_ref(SEXP arg0);
SEXP r_so_MissingData_unref(SEXP arg0);
SEXP r_so_MissingData_get_dataCode(SEXP arg0);
SEXP r_so_MissingData_set_dataCode(SEXP arg0,SEXP arg1);
SEXP r_so_MissingData_get_missingDataType(SEXP arg0);
SEXP r_so_MissingData_set_missingDataType(SEXP arg0,SEXP arg1);
SEXP r_so_PharmMLRef_new();
SEXP r_so_PharmMLRef_copy(SEXP arg0);
SEXP r_so_PharmMLRef_free(SEXP arg0);
SEXP r_so_PharmMLRef_ref(SEXP arg0);
SEXP r_so_PharmMLRef_unref(SEXP arg0);
SEXP r_so_PharmMLRef_get_Description(SEXP arg0);
SEXP r_so_PharmMLRef_set_Description(SEXP arg0,SEXP arg1);
SEXP r_so_PharmMLRef_get_name(SEXP arg0);
SEXP r_so_PharmMLRef_set_name(SEXP arg0,SEXP arg1);
SEXP r_so_PharmMLRef_get_id(SEXP arg0);
SEXP r_so_PharmMLRef_set_id(SEXP arg0,SEXP arg1);
SEXP r_so_Bayesian_PPE_new();
SEXP r_so_Bayesian_PPE_copy(SEXP arg0);
SEXP r_so_Bayesian_PPE_free(SEXP arg0);
SEXP r_so_Bayesian_PPE_ref(SEXP arg0);
SEXP r_so_Bayesian_PPE_unref(SEXP arg0);
SEXP r_so_Bayesian_PPE_get_StandardDeviationPosterior(SEXP arg0);
SEXP r_so_Bayesian_PPE_set_StandardDeviationPosterior(SEXP arg0,SEXP arg1);
SEXP r_so_Bayesian_PPE_create_StandardDeviationPosterior(SEXP arg0);
SEXP r_so_Bayesian_PPE_get_PercentilesCI(SEXP arg0);
SEXP r_so_Bayesian_PPE_set_PercentilesCI(SEXP arg0,SEXP arg1);
SEXP r_so_Bayesian_PPE_create_PercentilesCI(SEXP arg0);
SEXP r_so_PopulationEstimates_new();
SEXP r_so_PopulationEstimates_copy(SEXP arg0);
SEXP r_so_PopulationEstimates_free(SEXP arg0);
SEXP r_so_PopulationEstimates_ref(SEXP arg0);
SEXP r_so_PopulationEstimates_unref(SEXP arg0);
SEXP r_so_PopulationEstimates_get_MLE(SEXP arg0);
SEXP r_so_PopulationEstimates_set_MLE(SEXP arg0,SEXP arg1);
SEXP r_so_PopulationEstimates_create_MLE(SEXP arg0);
SEXP r_so_PopulationEstimates_get_Bayesian(SEXP arg0);
SEXP r_so_PopulationEstimates_set_Bayesian(SEXP arg0,SEXP arg1);
SEXP r_so_PopulationEstimates_create_Bayesian(SEXP arg0);
SEXP r_so_PopulationEstimates_get_OtherMethod(SEXP arg0);
SEXP r_so_PopulationEstimates_set_OtherMethod(SEXP arg0,SEXP arg1);
SEXP r_so_PopulationEstimates_create_OtherMethod(SEXP arg0);
SEXP r_so_ModelDiagnostic_new();
SEXP r_so_ModelDiagnostic_copy(SEXP arg0);
SEXP r_so_ModelDiagnostic_free(SEXP arg0);
SEXP r_so_ModelDiagnostic_ref(SEXP arg0);
SEXP r_so_ModelDiagnostic_unref(SEXP arg0);
SEXP r_so_ModelDiagnostic_get_DiagnosticStructuralModel(SEXP arg0);
SEXP r_so_ModelDiagnostic_set_DiagnosticStructuralModel(SEXP arg0,SEXP arg1);
SEXP r_so_ModelDiagnostic_create_DiagnosticStructuralModel(SEXP arg0);
SEXP r_so_ModelDiagnostic_get_DiagnosticIndividualParams(SEXP arg0);
SEXP r_so_ModelDiagnostic_set_DiagnosticIndividualParams(SEXP arg0,SEXP arg1);
SEXP r_so_ModelDiagnostic_create_DiagnosticIndividualParams(SEXP arg0);
SEXP r_so_OtherMethod_PPE_new();
SEXP r_so_OtherMethod_PPE_copy(SEXP arg0);
SEXP r_so_OtherMethod_PPE_free(SEXP arg0);
SEXP r_so_OtherMethod_PPE_ref(SEXP arg0);
SEXP r_so_OtherMethod_PPE_unref(SEXP arg0);
SEXP r_so_OtherMethod_PPE_get_CovarianceMatrix(SEXP arg0);
SEXP r_so_OtherMethod_PPE_set_CovarianceMatrix(SEXP arg0,SEXP arg1);
SEXP r_so_OtherMethod_PPE_create_CovarianceMatrix(SEXP arg0);
SEXP r_so_OtherMethod_PPE_get_CorrelationMatrix(SEXP arg0);
SEXP r_so_OtherMethod_PPE_set_CorrelationMatrix(SEXP arg0,SEXP arg1);
SEXP r_so_OtherMethod_PPE_create_CorrelationMatrix(SEXP arg0);
SEXP r_so_OtherMethod_PPE_get_StandardDeviation(SEXP arg0);
SEXP r_so_OtherMethod_PPE_set_StandardDeviation(SEXP arg0,SEXP arg1);
SEXP r_so_OtherMethod_PPE_create_StandardDeviation(SEXP arg0);
SEXP r_so_OtherMethod_PPE_get_StandardError(SEXP arg0);
SEXP r_so_OtherMethod_PPE_set_StandardError(SEXP arg0,SEXP arg1);
SEXP r_so_OtherMethod_PPE_create_StandardError(SEXP arg0);
SEXP r_so_OtherMethod_PPE_get_AsymptoticCI(SEXP arg0);
SEXP r_so_OtherMethod_PPE_set_AsymptoticCI(SEXP arg0,SEXP arg1);
SEXP r_so_OtherMethod_PPE_create_AsymptoticCI(SEXP arg0);
SEXP r_so_OtherMethod_PPE_get_PercentilesCI(SEXP arg0);
SEXP r_so_OtherMethod_PPE_set_PercentilesCI(SEXP arg0,SEXP arg1);
SEXP r_so_OtherMethod_PPE_create_PercentilesCI(SEXP arg0);
SEXP r_so_ExternalFile_new();
SEXP r_so_ExternalFile_copy(SEXP arg0);
SEXP r_so_ExternalFile_free(SEXP arg0);
SEXP r_so_ExternalFile_ref(SEXP arg0);
SEXP r_so_ExternalFile_unref(SEXP arg0);
SEXP r_so_ExternalFile_get_Description(SEXP arg0);
SEXP r_so_ExternalFile_set_Description(SEXP arg0,SEXP arg1);
SEXP r_so_ExternalFile_get_path(SEXP arg0);
SEXP r_so_ExternalFile_set_path(SEXP arg0,SEXP arg1);
SEXP r_so_ExternalFile_get_format(SEXP arg0);
SEXP r_so_ExternalFile_set_format(SEXP arg0,SEXP arg1);
SEXP r_so_ExternalFile_get_delimiter(SEXP arg0);
SEXP r_so_ExternalFile_set_delimiter(SEXP arg0,SEXP arg1);
SEXP r_so_ExternalFile_get_MissingData(SEXP arg0,SEXP arg1);
SEXP r_so_ExternalFile_get_number_of_MissingData(SEXP arg0);
SEXP r_so_ExternalFile_add_MissingData(SEXP arg0,SEXP arg1);
SEXP r_so_ExternalFile_remove_MissingData(SEXP arg0,SEXP arg1);
SEXP r_so_ExternalFile_create_MissingData(SEXP arg0);
SEXP r_so_ExternalFile_get_oid(SEXP arg0);
SEXP r_so_ExternalFile_set_oid(SEXP arg0,SEXP arg1);
SEXP r_so_OtherMethod_new();
SEXP r_so_OtherMethod_copy(SEXP arg0);
SEXP r_so_OtherMethod_free(SEXP arg0);
SEXP r_so_OtherMethod_ref(SEXP arg0);
SEXP r_so_OtherMethod_unref(SEXP arg0);
SEXP r_so_OtherMethod_get_Mean(SEXP arg0);
SEXP r_so_OtherMethod_set_Mean(SEXP arg0,SEXP arg1);
SEXP r_so_OtherMethod_create_Mean(SEXP arg0);
SEXP r_so_OtherMethod_get_Median(SEXP arg0);
SEXP r_so_OtherMethod_set_Median(SEXP arg0,SEXP arg1);
SEXP r_so_OtherMethod_create_Median(SEXP arg0);
SEXP r_so_OtherMethod_get_method(SEXP arg0);
SEXP r_so_OtherMethod_set_method(SEXP arg0,SEXP arg1);
SEXP r_so_RandomEffects_IE_new();
SEXP r_so_RandomEffects_IE_copy(SEXP arg0);
SEXP r_so_RandomEffects_IE_free(SEXP arg0);
SEXP r_so_RandomEffects_IE_ref(SEXP arg0);
SEXP r_so_RandomEffects_IE_unref(SEXP arg0);
SEXP r_so_RandomEffects_IE_get_EffectMean(SEXP arg0);
SEXP r_so_RandomEffects_IE_set_EffectMean(SEXP arg0,SEXP arg1);
SEXP r_so_RandomEffects_IE_create_EffectMean(SEXP arg0);
SEXP r_so_RandomEffects_IE_get_EffectMedian(SEXP arg0);
SEXP r_so_RandomEffects_IE_set_EffectMedian(SEXP arg0,SEXP arg1);
SEXP r_so_RandomEffects_IE_create_EffectMedian(SEXP arg0);
SEXP r_so_RandomEffects_IE_get_EffectMode(SEXP arg0);
SEXP r_so_RandomEffects_IE_set_EffectMode(SEXP arg0,SEXP arg1);
SEXP r_so_RandomEffects_IE_create_EffectMode(SEXP arg0);
SEXP r_so_RandomEffects_IE_get_Samples(SEXP arg0);
SEXP r_so_RandomEffects_IE_set_Samples(SEXP arg0,SEXP arg1);
SEXP r_so_RandomEffects_IE_create_Samples(SEXP arg0);
SEXP r_so_Message_new();
SEXP r_so_Message_copy(SEXP arg0);
SEXP r_so_Message_free(SEXP arg0);
SEXP r_so_Message_ref(SEXP arg0);
SEXP r_so_Message_unref(SEXP arg0);
SEXP r_so_Message_get_Toolname(SEXP arg0);
SEXP r_so_Message_set_Toolname(SEXP arg0,SEXP arg1);
SEXP r_so_Message_get_Name(SEXP arg0);
SEXP r_so_Message_set_Name(SEXP arg0,SEXP arg1);
SEXP r_so_Message_get_Content(SEXP arg0);
SEXP r_so_Message_set_Content(SEXP arg0,SEXP arg1);
SEXP r_so_Message_get_Severity(SEXP arg0);
SEXP r_so_Message_set_Severity(SEXP arg0,SEXP arg1);
SEXP r_so_Message_get_type(SEXP arg0);
SEXP r_so_Message_set_type(SEXP arg0,SEXP arg1);
SEXP r_so_SimulationBlock_new();
SEXP r_so_SimulationBlock_copy(SEXP arg0);
SEXP r_so_SimulationBlock_free(SEXP arg0);
SEXP r_so_SimulationBlock_ref(SEXP arg0);
SEXP r_so_SimulationBlock_unref(SEXP arg0);
SEXP r_so_SimulationBlock_get_SimulatedProfiles(SEXP arg0,SEXP arg1);
SEXP r_so_SimulationBlock_get_number_of_SimulatedProfiles(SEXP arg0);
SEXP r_so_SimulationBlock_add_SimulatedProfiles(SEXP arg0,SEXP arg1);
SEXP r_so_SimulationBlock_remove_SimulatedProfiles(SEXP arg0,SEXP arg1);
SEXP r_so_SimulationBlock_create_SimulatedProfiles(SEXP arg0);
SEXP r_so_SimulationBlock_get_IndivParameters(SEXP arg0,SEXP arg1);
SEXP r_so_SimulationBlock_get_number_of_IndivParameters(SEXP arg0);
SEXP r_so_SimulationBlock_add_IndivParameters(SEXP arg0,SEXP arg1);
SEXP r_so_SimulationBlock_remove_IndivParameters(SEXP arg0,SEXP arg1);
SEXP r_so_SimulationBlock_create_IndivParameters(SEXP arg0);
SEXP r_so_SimulationBlock_get_RandomEffects(SEXP arg0,SEXP arg1);
SEXP r_so_SimulationBlock_get_number_of_RandomEffects(SEXP arg0);
SEXP r_so_SimulationBlock_add_RandomEffects(SEXP arg0,SEXP arg1);
SEXP r_so_SimulationBlock_remove_RandomEffects(SEXP arg0,SEXP arg1);
SEXP r_so_SimulationBlock_create_RandomEffects(SEXP arg0);
SEXP r_so_SimulationBlock_get_Covariates(SEXP arg0,SEXP arg1);
SEXP r_so_SimulationBlock_get_number_of_Covariates(SEXP arg0);
SEXP r_so_SimulationBlock_add_Covariates(SEXP arg0,SEXP arg1);
SEXP r_so_SimulationBlock_remove_Covariates(SEXP arg0,SEXP arg1);
SEXP r_so_SimulationBlock_create_Covariates(SEXP arg0);
SEXP r_so_SimulationBlock_get_Regressors(SEXP arg0,SEXP arg1);
SEXP r_so_SimulationBlock_get_number_of_Regressors(SEXP arg0);
SEXP r_so_SimulationBlock_add_Regressors(SEXP arg0,SEXP arg1);
SEXP r_so_SimulationBlock_remove_Regressors(SEXP arg0,SEXP arg1);
SEXP r_so_SimulationBlock_create_Regressors(SEXP arg0);
SEXP r_so_SimulationBlock_get_PopulationParameters(SEXP arg0,SEXP arg1);
SEXP r_so_SimulationBlock_get_number_of_PopulationParameters(SEXP arg0);
SEXP r_so_SimulationBlock_add_PopulationParameters(SEXP arg0,SEXP arg1);
SEXP r_so_SimulationBlock_remove_PopulationParameters(SEXP arg0,SEXP arg1);
SEXP r_so_SimulationBlock_create_PopulationParameters(SEXP arg0);
SEXP r_so_SimulationBlock_get_Dosing(SEXP arg0,SEXP arg1);
SEXP r_so_SimulationBlock_get_number_of_Dosing(SEXP arg0);
SEXP r_so_SimulationBlock_add_Dosing(SEXP arg0,SEXP arg1);
SEXP r_so_SimulationBlock_remove_Dosing(SEXP arg0,SEXP arg1);
SEXP r_so_SimulationBlock_create_Dosing(SEXP arg0);
SEXP r_so_SimulationBlock_get_RawResultsFile(SEXP arg0);
SEXP r_so_SimulationBlock_set_RawResultsFile(SEXP arg0,SEXP arg1);
SEXP r_so_SimulationBlock_create_RawResultsFile(SEXP arg0);
SEXP r_so_SimulationBlock_get_replicate(SEXP arg0);
SEXP r_so_SimulationBlock_set_replicate(SEXP arg0,SEXP arg1);
SEXP r_so_Residuals_new();
SEXP r_so_Residuals_copy(SEXP arg0);
SEXP r_so_Residuals_free(SEXP arg0);
SEXP r_so_Residuals_ref(SEXP arg0);
SEXP r_so_Residuals_unref(SEXP arg0);
SEXP r_so_Residuals_get_ResidualTable(SEXP arg0);
SEXP r_so_Residuals_set_ResidualTable(SEXP arg0,SEXP arg1);
SEXP r_so_Residuals_create_ResidualTable(SEXP arg0);
SEXP r_so_Residuals_get_EpsShrinkage(SEXP arg0);
SEXP r_so_Residuals_set_EpsShrinkage(SEXP arg0,SEXP arg1);
SEXP r_so_Residuals_create_EpsShrinkage(SEXP arg0);
SEXP r_so_InformationCriteria_new();
SEXP r_so_InformationCriteria_copy(SEXP arg0);
SEXP r_so_InformationCriteria_free(SEXP arg0);
SEXP r_so_InformationCriteria_ref(SEXP arg0);
SEXP r_so_InformationCriteria_unref(SEXP arg0);
SEXP r_so_InformationCriteria_get_AIC(SEXP arg0);
SEXP r_so_InformationCriteria_set_AIC(SEXP arg0,SEXP arg1);
SEXP r_so_InformationCriteria_get_BIC(SEXP arg0);
SEXP r_so_InformationCriteria_set_BIC(SEXP arg0,SEXP arg1);
SEXP r_so_InformationCriteria_get_DIC(SEXP arg0);
SEXP r_so_InformationCriteria_set_DIC(SEXP arg0,SEXP arg1);
SEXP r_so_DiagnosticIndividualParams_new();
SEXP r_so_DiagnosticIndividualParams_copy(SEXP arg0);
SEXP r_so_DiagnosticIndividualParams_free(SEXP arg0);
SEXP r_so_DiagnosticIndividualParams_ref(SEXP arg0);
SEXP r_so_DiagnosticIndividualParams_unref(SEXP arg0);
SEXP r_so_DiagnosticIndividualParams_get_RandomEffects(SEXP arg0);
SEXP r_so_DiagnosticIndividualParams_set_RandomEffects(SEXP arg0,SEXP arg1);
SEXP r_so_DiagnosticIndividualParams_create_RandomEffects(SEXP arg0);
SEXP r_so_DiagnosticIndividualParams_get_IndivParamsCovariates(SEXP arg0);
SEXP r_so_DiagnosticIndividualParams_set_IndivParamsCovariates(SEXP arg0,SEXP arg1);
SEXP r_so_DiagnosticIndividualParams_create_IndivParamsCovariates(SEXP arg0);
SEXP r_so_DiagnosticIndividualParams_get_DistributionIndivParams(SEXP arg0);
SEXP r_so_DiagnosticIndividualParams_set_DistributionIndivParams(SEXP arg0,SEXP arg1);
SEXP r_so_DiagnosticIndividualParams_create_DistributionIndivParams(SEXP arg0);
SEXP r_so_TaskInformation_new();
SEXP r_so_TaskInformation_copy(SEXP arg0);
SEXP r_so_TaskInformation_free(SEXP arg0);
SEXP r_so_TaskInformation_ref(SEXP arg0);
SEXP r_so_TaskInformation_unref(SEXP arg0);
SEXP r_so_TaskInformation_get_Message(SEXP arg0,SEXP arg1);
SEXP r_so_TaskInformation_get_number_of_Message(SEXP arg0);
SEXP r_so_TaskInformation_add_Message(SEXP arg0,SEXP arg1);
SEXP r_so_TaskInformation_remove_Message(SEXP arg0,SEXP arg1);
SEXP r_so_TaskInformation_create_Message(SEXP arg0);
SEXP r_so_TaskInformation_get_OutputFilePath(SEXP arg0,SEXP arg1);
SEXP r_so_TaskInformation_get_number_of_OutputFilePath(SEXP arg0);
SEXP r_so_TaskInformation_add_OutputFilePath(SEXP arg0,SEXP arg1);
SEXP r_so_TaskInformation_remove_OutputFilePath(SEXP arg0,SEXP arg1);
SEXP r_so_TaskInformation_create_OutputFilePath(SEXP arg0);
SEXP r_so_TaskInformation_get_RunTime(SEXP arg0);
SEXP r_so_TaskInformation_set_RunTime(SEXP arg0,SEXP arg1);
SEXP r_so_TaskInformation_get_NumberChains(SEXP arg0);
SEXP r_so_TaskInformation_set_NumberChains(SEXP arg0,SEXP arg1);
SEXP r_so_TaskInformation_get_NumberIterations(SEXP arg0);
SEXP r_so_TaskInformation_set_NumberIterations(SEXP arg0,SEXP arg1);
SEXP r_so_SOBlock_new();
SEXP r_so_SOBlock_copy(SEXP arg0);
SEXP r_so_SOBlock_free(SEXP arg0);
SEXP r_so_SOBlock_ref(SEXP arg0);
SEXP r_so_SOBlock_unref(SEXP arg0);
SEXP r_so_SOBlock_get_ToolSettings(SEXP arg0);
SEXP r_so_SOBlock_set_ToolSettings(SEXP arg0,SEXP arg1);
SEXP r_so_SOBlock_create_ToolSettings(SEXP arg0);
SEXP r_so_SOBlock_get_RawResults(SEXP arg0);
SEXP r_so_SOBlock_set_RawResults(SEXP arg0,SEXP arg1);
SEXP r_so_SOBlock_create_RawResults(SEXP arg0);
SEXP r_so_SOBlock_get_TaskInformation(SEXP arg0);
SEXP r_so_SOBlock_set_TaskInformation(SEXP arg0,SEXP arg1);
SEXP r_so_SOBlock_create_TaskInformation(SEXP arg0);
SEXP r_so_SOBlock_get_Estimation(SEXP arg0);
SEXP r_so_SOBlock_set_Estimation(SEXP arg0,SEXP arg1);
SEXP r_so_SOBlock_create_Estimation(SEXP arg0);
SEXP r_so_SOBlock_get_Simulation(SEXP arg0);
SEXP r_so_SOBlock_set_Simulation(SEXP arg0,SEXP arg1);
SEXP r_so_SOBlock_create_Simulation(SEXP arg0);
SEXP r_so_SOBlock_get_ModelDiagnostic(SEXP arg0);
SEXP r_so_SOBlock_set_ModelDiagnostic(SEXP arg0,SEXP arg1);
SEXP r_so_SOBlock_create_ModelDiagnostic(SEXP arg0);
SEXP r_so_SOBlock_get_OptimalDesign(SEXP arg0);
SEXP r_so_SOBlock_set_OptimalDesign(SEXP arg0,SEXP arg1);
SEXP r_so_SOBlock_create_OptimalDesign(SEXP arg0);
SEXP r_so_SOBlock_get_blkId(SEXP arg0);
SEXP r_so_SOBlock_set_blkId(SEXP arg0,SEXP arg1);
SEXP r_so_PrecisionPopulationEstimates_new();
SEXP r_so_PrecisionPopulationEstimates_copy(SEXP arg0);
SEXP r_so_PrecisionPopulationEstimates_free(SEXP arg0);
SEXP r_so_PrecisionPopulationEstimates_ref(SEXP arg0);
SEXP r_so_PrecisionPopulationEstimates_unref(SEXP arg0);
SEXP r_so_PrecisionPopulationEstimates_get_MLE(SEXP arg0);
SEXP r_so_PrecisionPopulationEstimates_set_MLE(SEXP arg0,SEXP arg1);
SEXP r_so_PrecisionPopulationEstimates_create_MLE(SEXP arg0);
SEXP r_so_PrecisionPopulationEstimates_get_Bayesian(SEXP arg0);
SEXP r_so_PrecisionPopulationEstimates_set_Bayesian(SEXP arg0,SEXP arg1);
SEXP r_so_PrecisionPopulationEstimates_create_Bayesian(SEXP arg0);
SEXP r_so_PrecisionPopulationEstimates_get_OtherMethod(SEXP arg0);
SEXP r_so_PrecisionPopulationEstimates_set_OtherMethod(SEXP arg0,SEXP arg1);
SEXP r_so_PrecisionPopulationEstimates_create_OtherMethod(SEXP arg0);
SEXP r_so_DiagnosticStructuralModel_new();
SEXP r_so_DiagnosticStructuralModel_copy(SEXP arg0);
SEXP r_so_DiagnosticStructuralModel_free(SEXP arg0);
SEXP r_so_DiagnosticStructuralModel_ref(SEXP arg0);
SEXP r_so_DiagnosticStructuralModel_unref(SEXP arg0);
SEXP r_so_DiagnosticStructuralModel_get_IndivObservationPrediction(SEXP arg0);
SEXP r_so_DiagnosticStructuralModel_set_IndivObservationPrediction(SEXP arg0,SEXP arg1);
SEXP r_so_DiagnosticStructuralModel_create_IndivObservationPrediction(SEXP arg0);
SEXP r_so_DiagnosticStructuralModel_get_VPC(SEXP arg0);
SEXP r_so_DiagnosticStructuralModel_set_VPC(SEXP arg0,SEXP arg1);
SEXP r_so_DiagnosticStructuralModel_create_VPC(SEXP arg0);

static const R_CallMethodDef c_symbols[] = {
	{ "r_so_RawResults_new", (DL_FUNC) &r_so_RawResults_new, 0 },
	{ "r_so_RawResults_copy", (DL_FUNC) &r_so_RawResults_copy, 1 },
	{ "r_so_RawResults_free", (DL_FUNC) &r_so_RawResults_free, 1 },
	{ "r_so_RawResults_ref", (DL_FUNC) &r_so_RawResults_ref, 1 },
	{ "r_so_RawResults_unref", (DL_FUNC) &r_so_RawResults_unref, 1 },
	{ "r_so_RawResults_get_DataFile", (DL_FUNC) &r_so_RawResults_get_DataFile, 2 },
	{ "r_so_RawResults_get_number_of_DataFile", (DL_FUNC) &r_so_RawResults_get_number_of_DataFile, 1 },
	{ "r_so_RawResults_add_DataFile", (DL_FUNC) &r_so_RawResults_add_DataFile, 2 },
	{ "r_so_RawResults_remove_DataFile", (DL_FUNC) &r_so_RawResults_remove_DataFile, 2 },
	{ "r_so_RawResults_create_DataFile", (DL_FUNC) &r_so_RawResults_create_DataFile, 1 },
	{ "r_so_RawResults_get_GraphicsFile", (DL_FUNC) &r_so_RawResults_get_GraphicsFile, 2 },
	{ "r_so_RawResults_get_number_of_GraphicsFile", (DL_FUNC) &r_so_RawResults_get_number_of_GraphicsFile, 1 },
	{ "r_so_RawResults_add_GraphicsFile", (DL_FUNC) &r_so_RawResults_add_GraphicsFile, 2 },
	{ "r_so_RawResults_remove_GraphicsFile", (DL_FUNC) &r_so_RawResults_remove_GraphicsFile, 2 },
	{ "r_so_RawResults_create_GraphicsFile", (DL_FUNC) &r_so_RawResults_create_GraphicsFile, 1 },
	{ "r_so_MLE_new", (DL_FUNC) &r_so_MLE_new, 0 },
	{ "r_so_MLE_copy", (DL_FUNC) &r_so_MLE_copy, 1 },
	{ "r_so_MLE_free", (DL_FUNC) &r_so_MLE_free, 1 },
	{ "r_so_MLE_ref", (DL_FUNC) &r_so_MLE_ref, 1 },
	{ "r_so_MLE_unref", (DL_FUNC) &r_so_MLE_unref, 1 },
	{ "r_so_MLE_get_FIM", (DL_FUNC) &r_so_MLE_get_FIM, 1 },
	{ "r_so_MLE_set_FIM", (DL_FUNC) &r_so_MLE_set_FIM, 2 },
	{ "r_so_MLE_create_FIM", (DL_FUNC) &r_so_MLE_create_FIM, 1 },
	{ "r_so_MLE_get_CovarianceMatrix", (DL_FUNC) &r_so_MLE_get_CovarianceMatrix, 1 },
	{ "r_so_MLE_set_CovarianceMatrix", (DL_FUNC) &r_so_MLE_set_CovarianceMatrix, 2 },
	{ "r_so_MLE_create_CovarianceMatrix", (DL_FUNC) &r_so_MLE_create_CovarianceMatrix, 1 },
	{ "r_so_MLE_get_CorrelationMatrix", (DL_FUNC) &r_so_MLE_get_CorrelationMatrix, 1 },
	{ "r_so_MLE_set_CorrelationMatrix", (DL_FUNC) &r_so_MLE_set_CorrelationMatrix, 2 },
	{ "r_so_MLE_create_CorrelationMatrix", (DL_FUNC) &r_so_MLE_create_CorrelationMatrix, 1 },
	{ "r_so_MLE_get_StandardError", (DL_FUNC) &r_so_MLE_get_StandardError, 1 },
	{ "r_so_MLE_set_StandardError", (DL_FUNC) &r_so_MLE_set_StandardError, 2 },
	{ "r_so_MLE_create_StandardError", (DL_FUNC) &r_so_MLE_create_StandardError, 1 },
	{ "r_so_MLE_get_RelativeStandardError", (DL_FUNC) &r_so_MLE_get_RelativeStandardError, 1 },
	{ "r_so_MLE_set_RelativeStandardError", (DL_FUNC) &r_so_MLE_set_RelativeStandardError, 2 },
	{ "r_so_MLE_create_RelativeStandardError", (DL_FUNC) &r_so_MLE_create_RelativeStandardError, 1 },
	{ "r_so_MLE_get_AsymptoticCI", (DL_FUNC) &r_so_MLE_get_AsymptoticCI, 1 },
	{ "r_so_MLE_set_AsymptoticCI", (DL_FUNC) &r_so_MLE_set_AsymptoticCI, 2 },
	{ "r_so_MLE_create_AsymptoticCI", (DL_FUNC) &r_so_MLE_create_AsymptoticCI, 1 },
	{ "r_so_MLE_get_ConditionNumber", (DL_FUNC) &r_so_MLE_get_ConditionNumber, 1 },
	{ "r_so_MLE_set_ConditionNumber", (DL_FUNC) &r_so_MLE_set_ConditionNumber, 2 },
	{ "r_so_Estimates_new", (DL_FUNC) &r_so_Estimates_new, 0 },
	{ "r_so_Estimates_copy", (DL_FUNC) &r_so_Estimates_copy, 1 },
	{ "r_so_Estimates_free", (DL_FUNC) &r_so_Estimates_free, 1 },
	{ "r_so_Estimates_ref", (DL_FUNC) &r_so_Estimates_ref, 1 },
	{ "r_so_Estimates_unref", (DL_FUNC) &r_so_Estimates_unref, 1 },
	{ "r_so_Estimates_get_Mean", (DL_FUNC) &r_so_Estimates_get_Mean, 1 },
	{ "r_so_Estimates_set_Mean", (DL_FUNC) &r_so_Estimates_set_Mean, 2 },
	{ "r_so_Estimates_create_Mean", (DL_FUNC) &r_so_Estimates_create_Mean, 1 },
	{ "r_so_Estimates_get_Median", (DL_FUNC) &r_so_Estimates_get_Median, 1 },
	{ "r_so_Estimates_set_Median", (DL_FUNC) &r_so_Estimates_set_Median, 2 },
	{ "r_so_Estimates_create_Median", (DL_FUNC) &r_so_Estimates_create_Median, 1 },
	{ "r_so_Estimates_get_Mode", (DL_FUNC) &r_so_Estimates_get_Mode, 1 },
	{ "r_so_Estimates_set_Mode", (DL_FUNC) &r_so_Estimates_set_Mode, 2 },
	{ "r_so_Estimates_create_Mode", (DL_FUNC) &r_so_Estimates_create_Mode, 1 },
	{ "r_so_Estimates_get_Samples", (DL_FUNC) &r_so_Estimates_get_Samples, 1 },
	{ "r_so_Estimates_set_Samples", (DL_FUNC) &r_so_Estimates_set_Samples, 2 },
	{ "r_so_Estimates_create_Samples", (DL_FUNC) &r_so_Estimates_create_Samples, 1 },
	{ "r_so_TargetToolMessages_new", (DL_FUNC) &r_so_TargetToolMessages_new, 0 },
	{ "r_so_TargetToolMessages_copy", (DL_FUNC) &r_so_TargetToolMessages_copy, 1 },
	{ "r_so_TargetToolMessages_free", (DL_FUNC) &r_so_TargetToolMessages_free, 1 },
	{ "r_so_TargetToolMessages_ref", (DL_FUNC) &r_so_TargetToolMessages_ref, 1 },
	{ "r_so_TargetToolMessages_unref", (DL_FUNC) &r_so_TargetToolMessages_unref, 1 },
	{ "r_so_TargetToolMessages_get_Termination", (DL_FUNC) &r_so_TargetToolMessages_get_Termination, 1 },
	{ "r_so_TargetToolMessages_set_Termination", (DL_FUNC) &r_so_TargetToolMessages_set_Termination, 2 },
	{ "r_so_TargetToolMessages_get_Warnings", (DL_FUNC) &r_so_TargetToolMessages_get_Warnings, 1 },
	{ "r_so_TargetToolMessages_set_Warnings", (DL_FUNC) &r_so_TargetToolMessages_set_Warnings, 2 },
	{ "r_so_TargetToolMessages_get_Errors", (DL_FUNC) &r_so_TargetToolMessages_get_Errors, 1 },
	{ "r_so_TargetToolMessages_set_Errors", (DL_FUNC) &r_so_TargetToolMessages_set_Errors, 2 },
	{ "r_so_TargetToolMessages_get_ElapsedTime", (DL_FUNC) &r_so_TargetToolMessages_get_ElapsedTime, 1 },
	{ "r_so_TargetToolMessages_set_ElapsedTime", (DL_FUNC) &r_so_TargetToolMessages_set_ElapsedTime, 2 },
	{ "r_so_TargetToolMessages_get_OutputFilePath", (DL_FUNC) &r_so_TargetToolMessages_get_OutputFilePath, 1 },
	{ "r_so_TargetToolMessages_set_OutputFilePath", (DL_FUNC) &r_so_TargetToolMessages_set_OutputFilePath, 2 },
	{ "r_so_TargetToolMessages_create_OutputFilePath", (DL_FUNC) &r_so_TargetToolMessages_create_OutputFilePath, 1 },
	{ "r_so_TargetToolMessages_get_ChainsNumber", (DL_FUNC) &r_so_TargetToolMessages_get_ChainsNumber, 1 },
	{ "r_so_TargetToolMessages_set_ChainsNumber", (DL_FUNC) &r_so_TargetToolMessages_set_ChainsNumber, 2 },
	{ "r_so_TargetToolMessages_get_IterationNumber", (DL_FUNC) &r_so_TargetToolMessages_get_IterationNumber, 1 },
	{ "r_so_TargetToolMessages_set_IterationNumber", (DL_FUNC) &r_so_TargetToolMessages_set_IterationNumber, 2 },
	{ "r_so_SO_new", (DL_FUNC) &r_so_SO_new, 0 },
	{ "r_so_SO_copy", (DL_FUNC) &r_so_SO_copy, 1 },
	{ "r_so_SO_free", (DL_FUNC) &r_so_SO_free, 1 },
	{ "r_so_SO_ref", (DL_FUNC) &r_so_SO_ref, 1 },
	{ "r_so_SO_unref", (DL_FUNC) &r_so_SO_unref, 1 },
	{ "r_so_SO_get_Description", (DL_FUNC) &r_so_SO_get_Description, 1 },
	{ "r_so_SO_set_Description", (DL_FUNC) &r_so_SO_set_Description, 2 },
	{ "r_so_SO_get_PharmMLRef", (DL_FUNC) &r_so_SO_get_PharmMLRef, 1 },
	{ "r_so_SO_set_PharmMLRef", (DL_FUNC) &r_so_SO_set_PharmMLRef, 2 },
	{ "r_so_SO_create_PharmMLRef", (DL_FUNC) &r_so_SO_create_PharmMLRef, 1 },
	{ "r_so_SO_get_SOBlock", (DL_FUNC) &r_so_SO_get_SOBlock, 2 },
	{ "r_so_SO_get_number_of_SOBlock", (DL_FUNC) &r_so_SO_get_number_of_SOBlock, 1 },
	{ "r_so_SO_add_SOBlock", (DL_FUNC) &r_so_SO_add_SOBlock, 2 },
	{ "r_so_SO_remove_SOBlock", (DL_FUNC) &r_so_SO_remove_SOBlock, 2 },
	{ "r_so_SO_create_SOBlock", (DL_FUNC) &r_so_SO_create_SOBlock, 1 },
	{ "r_so_SO_get_id", (DL_FUNC) &r_so_SO_get_id, 1 },
	{ "r_so_SO_set_id", (DL_FUNC) &r_so_SO_set_id, 2 },
	{ "r_so_SO_get_metadataFile", (DL_FUNC) &r_so_SO_get_metadataFile, 1 },
	{ "r_so_SO_set_metadataFile", (DL_FUNC) &r_so_SO_set_metadataFile, 2 },
	{ "r_so_Bayesian_new", (DL_FUNC) &r_so_Bayesian_new, 0 },
	{ "r_so_Bayesian_copy", (DL_FUNC) &r_so_Bayesian_copy, 1 },
	{ "r_so_Bayesian_free", (DL_FUNC) &r_so_Bayesian_free, 1 },
	{ "r_so_Bayesian_ref", (DL_FUNC) &r_so_Bayesian_ref, 1 },
	{ "r_so_Bayesian_unref", (DL_FUNC) &r_so_Bayesian_unref, 1 },
	{ "r_so_Bayesian_get_PosteriorMean", (DL_FUNC) &r_so_Bayesian_get_PosteriorMean, 1 },
	{ "r_so_Bayesian_set_PosteriorMean", (DL_FUNC) &r_so_Bayesian_set_PosteriorMean, 2 },
	{ "r_so_Bayesian_create_PosteriorMean", (DL_FUNC) &r_so_Bayesian_create_PosteriorMean, 1 },
	{ "r_so_Bayesian_get_PosteriorMedian", (DL_FUNC) &r_so_Bayesian_get_PosteriorMedian, 1 },
	{ "r_so_Bayesian_set_PosteriorMedian", (DL_FUNC) &r_so_Bayesian_set_PosteriorMedian, 2 },
	{ "r_so_Bayesian_create_PosteriorMedian", (DL_FUNC) &r_so_Bayesian_create_PosteriorMedian, 1 },
	{ "r_so_Bayesian_get_PosteriorMode", (DL_FUNC) &r_so_Bayesian_get_PosteriorMode, 1 },
	{ "r_so_Bayesian_set_PosteriorMode", (DL_FUNC) &r_so_Bayesian_set_PosteriorMode, 2 },
	{ "r_so_Bayesian_create_PosteriorMode", (DL_FUNC) &r_so_Bayesian_create_PosteriorMode, 1 },
	{ "r_so_IndividualEstimates_new", (DL_FUNC) &r_so_IndividualEstimates_new, 0 },
	{ "r_so_IndividualEstimates_copy", (DL_FUNC) &r_so_IndividualEstimates_copy, 1 },
	{ "r_so_IndividualEstimates_free", (DL_FUNC) &r_so_IndividualEstimates_free, 1 },
	{ "r_so_IndividualEstimates_ref", (DL_FUNC) &r_so_IndividualEstimates_ref, 1 },
	{ "r_so_IndividualEstimates_unref", (DL_FUNC) &r_so_IndividualEstimates_unref, 1 },
	{ "r_so_IndividualEstimates_get_Estimates", (DL_FUNC) &r_so_IndividualEstimates_get_Estimates, 1 },
	{ "r_so_IndividualEstimates_set_Estimates", (DL_FUNC) &r_so_IndividualEstimates_set_Estimates, 2 },
	{ "r_so_IndividualEstimates_create_Estimates", (DL_FUNC) &r_so_IndividualEstimates_create_Estimates, 1 },
	{ "r_so_IndividualEstimates_get_RandomEffects", (DL_FUNC) &r_so_IndividualEstimates_get_RandomEffects, 1 },
	{ "r_so_IndividualEstimates_set_RandomEffects", (DL_FUNC) &r_so_IndividualEstimates_set_RandomEffects, 2 },
	{ "r_so_IndividualEstimates_create_RandomEffects", (DL_FUNC) &r_so_IndividualEstimates_create_RandomEffects, 1 },
	{ "r_so_IndividualEstimates_get_EtaShrinkage", (DL_FUNC) &r_so_IndividualEstimates_get_EtaShrinkage, 1 },
	{ "r_so_IndividualEstimates_set_EtaShrinkage", (DL_FUNC) &r_so_IndividualEstimates_set_EtaShrinkage, 2 },
	{ "r_so_IndividualEstimates_create_EtaShrinkage", (DL_FUNC) &r_so_IndividualEstimates_create_EtaShrinkage, 1 },
	{ "r_so_OptimalDesign_new", (DL_FUNC) &r_so_OptimalDesign_new, 0 },
	{ "r_so_OptimalDesign_copy", (DL_FUNC) &r_so_OptimalDesign_copy, 1 },
	{ "r_so_OptimalDesign_free", (DL_FUNC) &r_so_OptimalDesign_free, 1 },
	{ "r_so_OptimalDesign_ref", (DL_FUNC) &r_so_OptimalDesign_ref, 1 },
	{ "r_so_OptimalDesign_unref", (DL_FUNC) &r_so_OptimalDesign_unref, 1 },
	{ "r_so_OptimalDesign_get_OptimalDesignBlock", (DL_FUNC) &r_so_OptimalDesign_get_OptimalDesignBlock, 2 },
	{ "r_so_OptimalDesign_get_number_of_OptimalDesignBlock", (DL_FUNC) &r_so_OptimalDesign_get_number_of_OptimalDesignBlock, 1 },
	{ "r_so_OptimalDesign_add_OptimalDesignBlock", (DL_FUNC) &r_so_OptimalDesign_add_OptimalDesignBlock, 2 },
	{ "r_so_OptimalDesign_remove_OptimalDesignBlock", (DL_FUNC) &r_so_OptimalDesign_remove_OptimalDesignBlock, 2 },
	{ "r_so_OptimalDesign_create_OptimalDesignBlock", (DL_FUNC) &r_so_OptimalDesign_create_OptimalDesignBlock, 1 },
	{ "r_so_OptimalDesign_get_type", (DL_FUNC) &r_so_OptimalDesign_get_type, 1 },
	{ "r_so_OptimalDesign_set_type", (DL_FUNC) &r_so_OptimalDesign_set_type, 2 },
	{ "r_so_ToolSettings_new", (DL_FUNC) &r_so_ToolSettings_new, 0 },
	{ "r_so_ToolSettings_copy", (DL_FUNC) &r_so_ToolSettings_copy, 1 },
	{ "r_so_ToolSettings_free", (DL_FUNC) &r_so_ToolSettings_free, 1 },
	{ "r_so_ToolSettings_ref", (DL_FUNC) &r_so_ToolSettings_ref, 1 },
	{ "r_so_ToolSettings_unref", (DL_FUNC) &r_so_ToolSettings_unref, 1 },
	{ "r_so_ToolSettings_get_File", (DL_FUNC) &r_so_ToolSettings_get_File, 2 },
	{ "r_so_ToolSettings_get_number_of_File", (DL_FUNC) &r_so_ToolSettings_get_number_of_File, 1 },
	{ "r_so_ToolSettings_add_File", (DL_FUNC) &r_so_ToolSettings_add_File, 2 },
	{ "r_so_ToolSettings_remove_File", (DL_FUNC) &r_so_ToolSettings_remove_File, 2 },
	{ "r_so_ToolSettings_create_File", (DL_FUNC) &r_so_ToolSettings_create_File, 1 },
	{ "r_so_Estimation_new", (DL_FUNC) &r_so_Estimation_new, 0 },
	{ "r_so_Estimation_copy", (DL_FUNC) &r_so_Estimation_copy, 1 },
	{ "r_so_Estimation_free", (DL_FUNC) &r_so_Estimation_free, 1 },
	{ "r_so_Estimation_ref", (DL_FUNC) &r_so_Estimation_ref, 1 },
	{ "r_so_Estimation_unref", (DL_FUNC) &r_so_Estimation_unref, 1 },
	{ "r_so_Estimation_get_PopulationEstimates", (DL_FUNC) &r_so_Estimation_get_PopulationEstimates, 1 },
	{ "r_so_Estimation_set_PopulationEstimates", (DL_FUNC) &r_so_Estimation_set_PopulationEstimates, 2 },
	{ "r_so_Estimation_create_PopulationEstimates", (DL_FUNC) &r_so_Estimation_create_PopulationEstimates, 1 },
	{ "r_so_Estimation_get_PrecisionPopulationEstimates", (DL_FUNC) &r_so_Estimation_get_PrecisionPopulationEstimates, 1 },
	{ "r_so_Estimation_set_PrecisionPopulationEstimates", (DL_FUNC) &r_so_Estimation_set_PrecisionPopulationEstimates, 2 },
	{ "r_so_Estimation_create_PrecisionPopulationEstimates", (DL_FUNC) &r_so_Estimation_create_PrecisionPopulationEstimates, 1 },
	{ "r_so_Estimation_get_IndividualEstimates", (DL_FUNC) &r_so_Estimation_get_IndividualEstimates, 1 },
	{ "r_so_Estimation_set_IndividualEstimates", (DL_FUNC) &r_so_Estimation_set_IndividualEstimates, 2 },
	{ "r_so_Estimation_create_IndividualEstimates", (DL_FUNC) &r_so_Estimation_create_IndividualEstimates, 1 },
	{ "r_so_Estimation_get_PrecisionIndividualEstimates", (DL_FUNC) &r_so_Estimation_get_PrecisionIndividualEstimates, 1 },
	{ "r_so_Estimation_set_PrecisionIndividualEstimates", (DL_FUNC) &r_so_Estimation_set_PrecisionIndividualEstimates, 2 },
	{ "r_so_Estimation_create_PrecisionIndividualEstimates", (DL_FUNC) &r_so_Estimation_create_PrecisionIndividualEstimates, 1 },
	{ "r_so_Estimation_get_Residuals", (DL_FUNC) &r_so_Estimation_get_Residuals, 1 },
	{ "r_so_Estimation_set_Residuals", (DL_FUNC) &r_so_Estimation_set_Residuals, 2 },
	{ "r_so_Estimation_create_Residuals", (DL_FUNC) &r_so_Estimation_create_Residuals, 1 },
	{ "r_so_Estimation_get_Predictions", (DL_FUNC) &r_so_Estimation_get_Predictions, 1 },
	{ "r_so_Estimation_set_Predictions", (DL_FUNC) &r_so_Estimation_set_Predictions, 2 },
	{ "r_so_Estimation_create_Predictions", (DL_FUNC) &r_so_Estimation_create_Predictions, 1 },
	{ "r_so_Estimation_get_OFMeasures", (DL_FUNC) &r_so_Estimation_get_OFMeasures, 1 },
	{ "r_so_Estimation_set_OFMeasures", (DL_FUNC) &r_so_Estimation_set_OFMeasures, 2 },
	{ "r_so_Estimation_create_OFMeasures", (DL_FUNC) &r_so_Estimation_create_OFMeasures, 1 },
	{ "r_so_Estimation_get_TargetToolMessages", (DL_FUNC) &r_so_Estimation_get_TargetToolMessages, 1 },
	{ "r_so_Estimation_set_TargetToolMessages", (DL_FUNC) &r_so_Estimation_set_TargetToolMessages, 2 },
	{ "r_so_Estimation_create_TargetToolMessages", (DL_FUNC) &r_so_Estimation_create_TargetToolMessages, 1 },
	{ "r_so_OptimalDesignBlock_new", (DL_FUNC) &r_so_OptimalDesignBlock_new, 0 },
	{ "r_so_OptimalDesignBlock_copy", (DL_FUNC) &r_so_OptimalDesignBlock_copy, 1 },
	{ "r_so_OptimalDesignBlock_free", (DL_FUNC) &r_so_OptimalDesignBlock_free, 1 },
	{ "r_so_OptimalDesignBlock_ref", (DL_FUNC) &r_so_OptimalDesignBlock_ref, 1 },
	{ "r_so_OptimalDesignBlock_unref", (DL_FUNC) &r_so_OptimalDesignBlock_unref, 1 },
	{ "r_so_OptimalDesignBlock_get_FIM", (DL_FUNC) &r_so_OptimalDesignBlock_get_FIM, 1 },
	{ "r_so_OptimalDesignBlock_set_FIM", (DL_FUNC) &r_so_OptimalDesignBlock_set_FIM, 2 },
	{ "r_so_OptimalDesignBlock_create_FIM", (DL_FUNC) &r_so_OptimalDesignBlock_create_FIM, 1 },
	{ "r_so_OptimalDesignBlock_get_CovarianceMatrix", (DL_FUNC) &r_so_OptimalDesignBlock_get_CovarianceMatrix, 1 },
	{ "r_so_OptimalDesignBlock_set_CovarianceMatrix", (DL_FUNC) &r_so_OptimalDesignBlock_set_CovarianceMatrix, 2 },
	{ "r_so_OptimalDesignBlock_create_CovarianceMatrix", (DL_FUNC) &r_so_OptimalDesignBlock_create_CovarianceMatrix, 1 },
	{ "r_so_OptimalDesignBlock_get_ParameterPrecision", (DL_FUNC) &r_so_OptimalDesignBlock_get_ParameterPrecision, 1 },
	{ "r_so_OptimalDesignBlock_set_ParameterPrecision", (DL_FUNC) &r_so_OptimalDesignBlock_set_ParameterPrecision, 2 },
	{ "r_so_OptimalDesignBlock_create_ParameterPrecision", (DL_FUNC) &r_so_OptimalDesignBlock_create_ParameterPrecision, 1 },
	{ "r_so_OptimalDesignBlock_get_Criteria", (DL_FUNC) &r_so_OptimalDesignBlock_get_Criteria, 1 },
	{ "r_so_OptimalDesignBlock_set_Criteria", (DL_FUNC) &r_so_OptimalDesignBlock_set_Criteria, 2 },
	{ "r_so_OptimalDesignBlock_create_Criteria", (DL_FUNC) &r_so_OptimalDesignBlock_create_Criteria, 1 },
	{ "r_so_OptimalDesignBlock_get_Tests", (DL_FUNC) &r_so_OptimalDesignBlock_get_Tests, 1 },
	{ "r_so_OptimalDesignBlock_set_Tests", (DL_FUNC) &r_so_OptimalDesignBlock_set_Tests, 2 },
	{ "r_so_OptimalDesignBlock_create_Tests", (DL_FUNC) &r_so_OptimalDesignBlock_create_Tests, 1 },
	{ "r_so_OptimalDesignBlock_get_SimulatedData", (DL_FUNC) &r_so_OptimalDesignBlock_get_SimulatedData, 1 },
	{ "r_so_OptimalDesignBlock_set_SimulatedData", (DL_FUNC) &r_so_OptimalDesignBlock_set_SimulatedData, 2 },
	{ "r_so_OptimalDesignBlock_create_SimulatedData", (DL_FUNC) &r_so_OptimalDesignBlock_create_SimulatedData, 1 },
	{ "r_so_OptimalDesignBlock_get_Design", (DL_FUNC) &r_so_OptimalDesignBlock_get_Design, 1 },
	{ "r_so_OptimalDesignBlock_set_Design", (DL_FUNC) &r_so_OptimalDesignBlock_set_Design, 2 },
	{ "r_so_OptimalDesignBlock_create_Design", (DL_FUNC) &r_so_OptimalDesignBlock_create_Design, 1 },
	{ "r_so_OptimalDesignBlock_get_blockNumber", (DL_FUNC) &r_so_OptimalDesignBlock_get_blockNumber, 1 },
	{ "r_so_OptimalDesignBlock_set_blockNumber", (DL_FUNC) &r_so_OptimalDesignBlock_set_blockNumber, 2 },
	{ "r_so_OFMeasures_new", (DL_FUNC) &r_so_OFMeasures_new, 0 },
	{ "r_so_OFMeasures_copy", (DL_FUNC) &r_so_OFMeasures_copy, 1 },
	{ "r_so_OFMeasures_free", (DL_FUNC) &r_so_OFMeasures_free, 1 },
	{ "r_so_OFMeasures_ref", (DL_FUNC) &r_so_OFMeasures_ref, 1 },
	{ "r_so_OFMeasures_unref", (DL_FUNC) &r_so_OFMeasures_unref, 1 },
	{ "r_so_OFMeasures_get_Likelihood", (DL_FUNC) &r_so_OFMeasures_get_Likelihood, 1 },
	{ "r_so_OFMeasures_set_Likelihood", (DL_FUNC) &r_so_OFMeasures_set_Likelihood, 2 },
	{ "r_so_OFMeasures_get_LogLikelihood", (DL_FUNC) &r_so_OFMeasures_get_LogLikelihood, 1 },
	{ "r_so_OFMeasures_set_LogLikelihood", (DL_FUNC) &r_so_OFMeasures_set_LogLikelihood, 2 },
	{ "r_so_OFMeasures_get_Deviance", (DL_FUNC) &r_so_OFMeasures_get_Deviance, 1 },
	{ "r_so_OFMeasures_set_Deviance", (DL_FUNC) &r_so_OFMeasures_set_Deviance, 2 },
	{ "r_so_OFMeasures_get_ToolObjFunction", (DL_FUNC) &r_so_OFMeasures_get_ToolObjFunction, 1 },
	{ "r_so_OFMeasures_set_ToolObjFunction", (DL_FUNC) &r_so_OFMeasures_set_ToolObjFunction, 2 },
	{ "r_so_OFMeasures_get_IndividualContribToLL", (DL_FUNC) &r_so_OFMeasures_get_IndividualContribToLL, 1 },
	{ "r_so_OFMeasures_set_IndividualContribToLL", (DL_FUNC) &r_so_OFMeasures_set_IndividualContribToLL, 2 },
	{ "r_so_OFMeasures_create_IndividualContribToLL", (DL_FUNC) &r_so_OFMeasures_create_IndividualContribToLL, 1 },
	{ "r_so_OFMeasures_get_InformationCriteria", (DL_FUNC) &r_so_OFMeasures_get_InformationCriteria, 1 },
	{ "r_so_OFMeasures_set_InformationCriteria", (DL_FUNC) &r_so_OFMeasures_set_InformationCriteria, 2 },
	{ "r_so_OFMeasures_create_InformationCriteria", (DL_FUNC) &r_so_OFMeasures_create_InformationCriteria, 1 },
	{ "r_so_PrecisionIndividualEstimates_new", (DL_FUNC) &r_so_PrecisionIndividualEstimates_new, 0 },
	{ "r_so_PrecisionIndividualEstimates_copy", (DL_FUNC) &r_so_PrecisionIndividualEstimates_copy, 1 },
	{ "r_so_PrecisionIndividualEstimates_free", (DL_FUNC) &r_so_PrecisionIndividualEstimates_free, 1 },
	{ "r_so_PrecisionIndividualEstimates_ref", (DL_FUNC) &r_so_PrecisionIndividualEstimates_ref, 1 },
	{ "r_so_PrecisionIndividualEstimates_unref", (DL_FUNC) &r_so_PrecisionIndividualEstimates_unref, 1 },
	{ "r_so_PrecisionIndividualEstimates_get_StandardDeviation", (DL_FUNC) &r_so_PrecisionIndividualEstimates_get_StandardDeviation, 1 },
	{ "r_so_PrecisionIndividualEstimates_set_StandardDeviation", (DL_FUNC) &r_so_PrecisionIndividualEstimates_set_StandardDeviation, 2 },
	{ "r_so_PrecisionIndividualEstimates_create_StandardDeviation", (DL_FUNC) &r_so_PrecisionIndividualEstimates_create_StandardDeviation, 1 },
	{ "r_so_PrecisionIndividualEstimates_get_PercentilesCI", (DL_FUNC) &r_so_PrecisionIndividualEstimates_get_PercentilesCI, 1 },
	{ "r_so_PrecisionIndividualEstimates_set_PercentilesCI", (DL_FUNC) &r_so_PrecisionIndividualEstimates_set_PercentilesCI, 2 },
	{ "r_so_PrecisionIndividualEstimates_create_PercentilesCI", (DL_FUNC) &r_so_PrecisionIndividualEstimates_create_PercentilesCI, 1 },
	{ "r_so_SimulationSubType_new", (DL_FUNC) &r_so_SimulationSubType_new, 0 },
	{ "r_so_SimulationSubType_copy", (DL_FUNC) &r_so_SimulationSubType_copy, 1 },
	{ "r_so_SimulationSubType_free", (DL_FUNC) &r_so_SimulationSubType_free, 1 },
	{ "r_so_SimulationSubType_ref", (DL_FUNC) &r_so_SimulationSubType_ref, 1 },
	{ "r_so_SimulationSubType_unref", (DL_FUNC) &r_so_SimulationSubType_unref, 1 },
	{ "r_so_SimulationSubType_get_base", (DL_FUNC) &r_so_SimulationSubType_get_base, 1 },
	{ "r_so_SimulationSubType_set_base", (DL_FUNC) &r_so_SimulationSubType_set_base, 2 },
	{ "r_so_SimulationSubType_get_name", (DL_FUNC) &r_so_SimulationSubType_get_name, 1 },
	{ "r_so_SimulationSubType_set_name", (DL_FUNC) &r_so_SimulationSubType_set_name, 2 },
	{ "r_so_SimulationSubType_get_extFileNo", (DL_FUNC) &r_so_SimulationSubType_get_extFileNo, 1 },
	{ "r_so_SimulationSubType_set_extFileNo", (DL_FUNC) &r_so_SimulationSubType_set_extFileNo, 2 },
	{ "r_so_Simulation_new", (DL_FUNC) &r_so_Simulation_new, 0 },
	{ "r_so_Simulation_copy", (DL_FUNC) &r_so_Simulation_copy, 1 },
	{ "r_so_Simulation_free", (DL_FUNC) &r_so_Simulation_free, 1 },
	{ "r_so_Simulation_ref", (DL_FUNC) &r_so_Simulation_ref, 1 },
	{ "r_so_Simulation_unref", (DL_FUNC) &r_so_Simulation_unref, 1 },
	{ "r_so_Simulation_get_SimulationBlock", (DL_FUNC) &r_so_Simulation_get_SimulationBlock, 2 },
	{ "r_so_Simulation_get_number_of_SimulationBlock", (DL_FUNC) &r_so_Simulation_get_number_of_SimulationBlock, 1 },
	{ "r_so_Simulation_add_SimulationBlock", (DL_FUNC) &r_so_Simulation_add_SimulationBlock, 2 },
	{ "r_so_Simulation_remove_SimulationBlock", (DL_FUNC) &r_so_Simulation_remove_SimulationBlock, 2 },
	{ "r_so_Simulation_create_SimulationBlock", (DL_FUNC) &r_so_Simulation_create_SimulationBlock, 1 },
	{ "r_so_MissingData_new", (DL_FUNC) &r_so_MissingData_new, 0 },
	{ "r_so_MissingData_copy", (DL_FUNC) &r_so_MissingData_copy, 1 },
	{ "r_so_MissingData_free", (DL_FUNC) &r_so_MissingData_free, 1 },
	{ "r_so_MissingData_ref", (DL_FUNC) &r_so_MissingData_ref, 1 },
	{ "r_so_MissingData_unref", (DL_FUNC) &r_so_MissingData_unref, 1 },
	{ "r_so_MissingData_get_dataCode", (DL_FUNC) &r_so_MissingData_get_dataCode, 1 },
	{ "r_so_MissingData_set_dataCode", (DL_FUNC) &r_so_MissingData_set_dataCode, 2 },
	{ "r_so_MissingData_get_missingDataType", (DL_FUNC) &r_so_MissingData_get_missingDataType, 1 },
	{ "r_so_MissingData_set_missingDataType", (DL_FUNC) &r_so_MissingData_set_missingDataType, 2 },
	{ "r_so_PharmMLRef_new", (DL_FUNC) &r_so_PharmMLRef_new, 0 },
	{ "r_so_PharmMLRef_copy", (DL_FUNC) &r_so_PharmMLRef_copy, 1 },
	{ "r_so_PharmMLRef_free", (DL_FUNC) &r_so_PharmMLRef_free, 1 },
	{ "r_so_PharmMLRef_ref", (DL_FUNC) &r_so_PharmMLRef_ref, 1 },
	{ "r_so_PharmMLRef_unref", (DL_FUNC) &r_so_PharmMLRef_unref, 1 },
	{ "r_so_PharmMLRef_get_Description", (DL_FUNC) &r_so_PharmMLRef_get_Description, 1 },
	{ "r_so_PharmMLRef_set_Description", (DL_FUNC) &r_so_PharmMLRef_set_Description, 2 },
	{ "r_so_PharmMLRef_get_name", (DL_FUNC) &r_so_PharmMLRef_get_name, 1 },
	{ "r_so_PharmMLRef_set_name", (DL_FUNC) &r_so_PharmMLRef_set_name, 2 },
	{ "r_so_PharmMLRef_get_id", (DL_FUNC) &r_so_PharmMLRef_get_id, 1 },
	{ "r_so_PharmMLRef_set_id", (DL_FUNC) &r_so_PharmMLRef_set_id, 2 },
	{ "r_so_Bayesian_PPE_new", (DL_FUNC) &r_so_Bayesian_PPE_new, 0 },
	{ "r_so_Bayesian_PPE_copy", (DL_FUNC) &r_so_Bayesian_PPE_copy, 1 },
	{ "r_so_Bayesian_PPE_free", (DL_FUNC) &r_so_Bayesian_PPE_free, 1 },
	{ "r_so_Bayesian_PPE_ref", (DL_FUNC) &r_so_Bayesian_PPE_ref, 1 },
	{ "r_so_Bayesian_PPE_unref", (DL_FUNC) &r_so_Bayesian_PPE_unref, 1 },
	{ "r_so_Bayesian_PPE_get_StandardDeviationPosterior", (DL_FUNC) &r_so_Bayesian_PPE_get_StandardDeviationPosterior, 1 },
	{ "r_so_Bayesian_PPE_set_StandardDeviationPosterior", (DL_FUNC) &r_so_Bayesian_PPE_set_StandardDeviationPosterior, 2 },
	{ "r_so_Bayesian_PPE_create_StandardDeviationPosterior", (DL_FUNC) &r_so_Bayesian_PPE_create_StandardDeviationPosterior, 1 },
	{ "r_so_Bayesian_PPE_get_PercentilesCI", (DL_FUNC) &r_so_Bayesian_PPE_get_PercentilesCI, 1 },
	{ "r_so_Bayesian_PPE_set_PercentilesCI", (DL_FUNC) &r_so_Bayesian_PPE_set_PercentilesCI, 2 },
	{ "r_so_Bayesian_PPE_create_PercentilesCI", (DL_FUNC) &r_so_Bayesian_PPE_create_PercentilesCI, 1 },
	{ "r_so_PopulationEstimates_new", (DL_FUNC) &r_so_PopulationEstimates_new, 0 },
	{ "r_so_PopulationEstimates_copy", (DL_FUNC) &r_so_PopulationEstimates_copy, 1 },
	{ "r_so_PopulationEstimates_free", (DL_FUNC) &r_so_PopulationEstimates_free, 1 },
	{ "r_so_PopulationEstimates_ref", (DL_FUNC) &r_so_PopulationEstimates_ref, 1 },
	{ "r_so_PopulationEstimates_unref", (DL_FUNC) &r_so_PopulationEstimates_unref, 1 },
	{ "r_so_PopulationEstimates_get_MLE", (DL_FUNC) &r_so_PopulationEstimates_get_MLE, 1 },
	{ "r_so_PopulationEstimates_set_MLE", (DL_FUNC) &r_so_PopulationEstimates_set_MLE, 2 },
	{ "r_so_PopulationEstimates_create_MLE", (DL_FUNC) &r_so_PopulationEstimates_create_MLE, 1 },
	{ "r_so_PopulationEstimates_get_Bayesian", (DL_FUNC) &r_so_PopulationEstimates_get_Bayesian, 1 },
	{ "r_so_PopulationEstimates_set_Bayesian", (DL_FUNC) &r_so_PopulationEstimates_set_Bayesian, 2 },
	{ "r_so_PopulationEstimates_create_Bayesian", (DL_FUNC) &r_so_PopulationEstimates_create_Bayesian, 1 },
	{ "r_so_PopulationEstimates_get_OtherMethod", (DL_FUNC) &r_so_PopulationEstimates_get_OtherMethod, 1 },
	{ "r_so_PopulationEstimates_set_OtherMethod", (DL_FUNC) &r_so_PopulationEstimates_set_OtherMethod, 2 },
	{ "r_so_PopulationEstimates_create_OtherMethod", (DL_FUNC) &r_so_PopulationEstimates_create_OtherMethod, 1 },
	{ "r_so_ModelDiagnostic_new", (DL_FUNC) &r_so_ModelDiagnostic_new, 0 },
	{ "r_so_ModelDiagnostic_copy", (DL_FUNC) &r_so_ModelDiagnostic_copy, 1 },
	{ "r_so_ModelDiagnostic_free", (DL_FUNC) &r_so_ModelDiagnostic_free, 1 },
	{ "r_so_ModelDiagnostic_ref", (DL_FUNC) &r_so_ModelDiagnostic_ref, 1 },
	{ "r_so_ModelDiagnostic_unref", (DL_FUNC) &r_so_ModelDiagnostic_unref, 1 },
	{ "r_so_ModelDiagnostic_get_DiagnosticStructuralModel", (DL_FUNC) &r_so_ModelDiagnostic_get_DiagnosticStructuralModel, 1 },
	{ "r_so_ModelDiagnostic_set_DiagnosticStructuralModel", (DL_FUNC) &r_so_ModelDiagnostic_set_DiagnosticStructuralModel, 2 },
	{ "r_so_ModelDiagnostic_create_DiagnosticStructuralModel", (DL_FUNC) &r_so_ModelDiagnostic_create_DiagnosticStructuralModel, 1 },
	{ "r_so_ModelDiagnostic_get_DiagnosticIndividualParams", (DL_FUNC) &r_so_ModelDiagnostic_get_DiagnosticIndividualParams, 1 },
	{ "r_so_ModelDiagnostic_set_DiagnosticIndividualParams", (DL_FUNC) &r_so_ModelDiagnostic_set_DiagnosticIndividualParams, 2 },
	{ "r_so_ModelDiagnostic_create_DiagnosticIndividualParams", (DL_FUNC) &r_so_ModelDiagnostic_create_DiagnosticIndividualParams, 1 },
	{ "r_so_OtherMethod_PPE_new", (DL_FUNC) &r_so_OtherMethod_PPE_new, 0 },
	{ "r_so_OtherMethod_PPE_copy", (DL_FUNC) &r_so_OtherMethod_PPE_copy, 1 },
	{ "r_so_OtherMethod_PPE_free", (DL_FUNC) &r_so_OtherMethod_PPE_free, 1 },
	{ "r_so_OtherMethod_PPE_ref", (DL_FUNC) &r_so_OtherMethod_PPE_ref, 1 },
	{ "r_so_OtherMethod_PPE_unref", (DL_FUNC) &r_so_OtherMethod_PPE_unref, 1 },
	{ "r_so_OtherMethod_PPE_get_CovarianceMatrix", (DL_FUNC) &r_so_OtherMethod_PPE_get_CovarianceMatrix, 1 },
	{ "r_so_OtherMethod_PPE_set_CovarianceMatrix", (DL_FUNC) &r_so_OtherMethod_PPE_set_CovarianceMatrix, 2 },
	{ "r_so_OtherMethod_PPE_create_CovarianceMatrix", (DL_FUNC) &r_so_OtherMethod_PPE_create_CovarianceMatrix, 1 },
	{ "r_so_OtherMethod_PPE_get_CorrelationMatrix", (DL_FUNC) &r_so_OtherMethod_PPE_get_CorrelationMatrix, 1 },
	{ "r_so_OtherMethod_PPE_set_CorrelationMatrix", (DL_FUNC) &r_so_OtherMethod_PPE_set_CorrelationMatrix, 2 },
	{ "r_so_OtherMethod_PPE_create_CorrelationMatrix", (DL_FUNC) &r_so_OtherMethod_PPE_create_CorrelationMatrix, 1 },
	{ "r_so_OtherMethod_PPE_get_StandardDeviation", (DL_FUNC) &r_so_OtherMethod_PPE_get_StandardDeviation, 1 },
	{ "r_so_OtherMethod_PPE_set_StandardDeviation", (DL_FUNC) &r_so_OtherMethod_PPE_set_StandardDeviation, 2 },
	{ "r_so_OtherMethod_PPE_create_StandardDeviation", (DL_FUNC) &r_so_OtherMethod_PPE_create_StandardDeviation, 1 },
	{ "r_so_OtherMethod_PPE_get_StandardError", (DL_FUNC) &r_so_OtherMethod_PPE_get_StandardError, 1 },
	{ "r_so_OtherMethod_PPE_set_StandardError", (DL_FUNC) &r_so_OtherMethod_PPE_set_StandardError, 2 },
	{ "r_so_OtherMethod_PPE_create_StandardError", (DL_FUNC) &r_so_OtherMethod_PPE_create_StandardError, 1 },
	{ "r_so_OtherMethod_PPE_get_AsymptoticCI", (DL_FUNC) &r_so_OtherMethod_PPE_get_AsymptoticCI, 1 },
	{ "r_so_OtherMethod_PPE_set_AsymptoticCI", (DL_FUNC) &r_so_OtherMethod_PPE_set_AsymptoticCI, 2 },
	{ "r_so_OtherMethod_PPE_create_AsymptoticCI", (DL_FUNC) &r_so_OtherMethod_PPE_create_AsymptoticCI, 1 },
	{ "r_so_OtherMethod_PPE_get_PercentilesCI", (DL_FUNC) &r_so_OtherMethod_PPE_get_PercentilesCI, 1 },
	{ "r_so_OtherMethod_PPE_set_PercentilesCI", (DL_FUNC) &r_so_OtherMethod_PPE_set_PercentilesCI, 2 },
	{ "r_so_OtherMethod_PPE_create_PercentilesCI", (DL_FUNC) &r_so_OtherMethod_PPE_create_PercentilesCI, 1 },
	{ "r_so_ExternalFile_new", (DL_FUNC) &r_so_ExternalFile_new, 0 },
	{ "r_so_ExternalFile_copy", (DL_FUNC) &r_so_ExternalFile_copy, 1 },
	{ "r_so_ExternalFile_free", (DL_FUNC) &r_so_ExternalFile_free, 1 },
	{ "r_so_ExternalFile_ref", (DL_FUNC) &r_so_ExternalFile_ref, 1 },
	{ "r_so_ExternalFile_unref", (DL_FUNC) &r_so_ExternalFile_unref, 1 },
	{ "r_so_ExternalFile_get_Description", (DL_FUNC) &r_so_ExternalFile_get_Description, 1 },
	{ "r_so_ExternalFile_set_Description", (DL_FUNC) &r_so_ExternalFile_set_Description, 2 },
	{ "r_so_ExternalFile_get_path", (DL_FUNC) &r_so_ExternalFile_get_path, 1 },
	{ "r_so_ExternalFile_set_path", (DL_FUNC) &r_so_ExternalFile_set_path, 2 },
	{ "r_so_ExternalFile_get_format", (DL_FUNC) &r_so_ExternalFile_get_format, 1 },
	{ "r_so_ExternalFile_set_format", (DL_FUNC) &r_so_ExternalFile_set_format, 2 },
	{ "r_so_ExternalFile_get_delimiter", (DL_FUNC) &r_so_ExternalFile_get_delimiter, 1 },
	{ "r_so_ExternalFile_set_delimiter", (DL_FUNC) &r_so_ExternalFile_set_delimiter, 2 },
	{ "r_so_ExternalFile_get_MissingData", (DL_FUNC) &r_so_ExternalFile_get_MissingData, 2 },
	{ "r_so_ExternalFile_get_number_of_MissingData", (DL_FUNC) &r_so_ExternalFile_get_number_of_MissingData, 1 },
	{ "r_so_ExternalFile_add_MissingData", (DL_FUNC) &r_so_ExternalFile_add_MissingData, 2 },
	{ "r_so_ExternalFile_remove_MissingData", (DL_FUNC) &r_so_ExternalFile_remove_MissingData, 2 },
	{ "r_so_ExternalFile_create_MissingData", (DL_FUNC) &r_so_ExternalFile_create_MissingData, 1 },
	{ "r_so_ExternalFile_get_oid", (DL_FUNC) &r_so_ExternalFile_get_oid, 1 },
	{ "r_so_ExternalFile_set_oid", (DL_FUNC) &r_so_ExternalFile_set_oid, 2 },
	{ "r_so_OtherMethod_new", (DL_FUNC) &r_so_OtherMethod_new, 0 },
	{ "r_so_OtherMethod_copy", (DL_FUNC) &r_so_OtherMethod_copy, 1 },
	{ "r_so_OtherMethod_free", (DL_FUNC) &r_so_OtherMethod_free, 1 },
	{ "r_so_OtherMethod_ref", (DL_FUNC) &r_so_OtherMethod_ref, 1 },
	{ "r_so_OtherMethod_unref", (DL_FUNC) &r_so_OtherMethod_unref, 1 },
	{ "r_so_OtherMethod_get_Mean", (DL_FUNC) &r_so_OtherMethod_get_Mean, 1 },
	{ "r_so_OtherMethod_set_Mean", (DL_FUNC) &r_so_OtherMethod_set_Mean, 2 },
	{ "r_so_OtherMethod_create_Mean", (DL_FUNC) &r_so_OtherMethod_create_Mean, 1 },
	{ "r_so_OtherMethod_get_Median", (DL_FUNC) &r_so_OtherMethod_get_Median, 1 },
	{ "r_so_OtherMethod_set_Median", (DL_FUNC) &r_so_OtherMethod_set_Median, 2 },
	{ "r_so_OtherMethod_create_Median", (DL_FUNC) &r_so_OtherMethod_create_Median, 1 },
	{ "r_so_OtherMethod_get_method", (DL_FUNC) &r_so_OtherMethod_get_method, 1 },
	{ "r_so_OtherMethod_set_method", (DL_FUNC) &r_so_OtherMethod_set_method, 2 },
	{ "r_so_RandomEffects_IE_new", (DL_FUNC) &r_so_RandomEffects_IE_new, 0 },
	{ "r_so_RandomEffects_IE_copy", (DL_FUNC) &r_so_RandomEffects_IE_copy, 1 },
	{ "r_so_RandomEffects_IE_free", (DL_FUNC) &r_so_RandomEffects_IE_free, 1 },
	{ "r_so_RandomEffects_IE_ref", (DL_FUNC) &r_so_RandomEffects_IE_ref, 1 },
	{ "r_so_RandomEffects_IE_unref", (DL_FUNC) &r_so_RandomEffects_IE_unref, 1 },
	{ "r_so_RandomEffects_IE_get_EffectMean", (DL_FUNC) &r_so_RandomEffects_IE_get_EffectMean, 1 },
	{ "r_so_RandomEffects_IE_set_EffectMean", (DL_FUNC) &r_so_RandomEffects_IE_set_EffectMean, 2 },
	{ "r_so_RandomEffects_IE_create_EffectMean", (DL_FUNC) &r_so_RandomEffects_IE_create_EffectMean, 1 },
	{ "r_so_RandomEffects_IE_get_EffectMedian", (DL_FUNC) &r_so_RandomEffects_IE_get_EffectMedian, 1 },
	{ "r_so_RandomEffects_IE_set_EffectMedian", (DL_FUNC) &r_so_RandomEffects_IE_set_EffectMedian, 2 },
	{ "r_so_RandomEffects_IE_create_EffectMedian", (DL_FUNC) &r_so_RandomEffects_IE_create_EffectMedian, 1 },
	{ "r_so_RandomEffects_IE_get_EffectMode", (DL_FUNC) &r_so_RandomEffects_IE_get_EffectMode, 1 },
	{ "r_so_RandomEffects_IE_set_EffectMode", (DL_FUNC) &r_so_RandomEffects_IE_set_EffectMode, 2 },
	{ "r_so_RandomEffects_IE_create_EffectMode", (DL_FUNC) &r_so_RandomEffects_IE_create_EffectMode, 1 },
	{ "r_so_RandomEffects_IE_get_Samples", (DL_FUNC) &r_so_RandomEffects_IE_get_Samples, 1 },
	{ "r_so_RandomEffects_IE_set_Samples", (DL_FUNC) &r_so_RandomEffects_IE_set_Samples, 2 },
	{ "r_so_RandomEffects_IE_create_Samples", (DL_FUNC) &r_so_RandomEffects_IE_create_Samples, 1 },
	{ "r_so_Message_new", (DL_FUNC) &r_so_Message_new, 0 },
	{ "r_so_Message_copy", (DL_FUNC) &r_so_Message_copy, 1 },
	{ "r_so_Message_free", (DL_FUNC) &r_so_Message_free, 1 },
	{ "r_so_Message_ref", (DL_FUNC) &r_so_Message_ref, 1 },
	{ "r_so_Message_unref", (DL_FUNC) &r_so_Message_unref, 1 },
	{ "r_so_Message_get_Toolname", (DL_FUNC) &r_so_Message_get_Toolname, 1 },
	{ "r_so_Message_set_Toolname", (DL_FUNC) &r_so_Message_set_Toolname, 2 },
	{ "r_so_Message_get_Name", (DL_FUNC) &r_so_Message_get_Name, 1 },
	{ "r_so_Message_set_Name", (DL_FUNC) &r_so_Message_set_Name, 2 },
	{ "r_so_Message_get_Content", (DL_FUNC) &r_so_Message_get_Content, 1 },
	{ "r_so_Message_set_Content", (DL_FUNC) &r_so_Message_set_Content, 2 },
	{ "r_so_Message_get_Severity", (DL_FUNC) &r_so_Message_get_Severity, 1 },
	{ "r_so_Message_set_Severity", (DL_FUNC) &r_so_Message_set_Severity, 2 },
	{ "r_so_Message_get_type", (DL_FUNC) &r_so_Message_get_type, 1 },
	{ "r_so_Message_set_type", (DL_FUNC) &r_so_Message_set_type, 2 },
	{ "r_so_SimulationBlock_new", (DL_FUNC) &r_so_SimulationBlock_new, 0 },
	{ "r_so_SimulationBlock_copy", (DL_FUNC) &r_so_SimulationBlock_copy, 1 },
	{ "r_so_SimulationBlock_free", (DL_FUNC) &r_so_SimulationBlock_free, 1 },
	{ "r_so_SimulationBlock_ref", (DL_FUNC) &r_so_SimulationBlock_ref, 1 },
	{ "r_so_SimulationBlock_unref", (DL_FUNC) &r_so_SimulationBlock_unref, 1 },
	{ "r_so_SimulationBlock_get_SimulatedProfiles", (DL_FUNC) &r_so_SimulationBlock_get_SimulatedProfiles, 2 },
	{ "r_so_SimulationBlock_get_number_of_SimulatedProfiles", (DL_FUNC) &r_so_SimulationBlock_get_number_of_SimulatedProfiles, 1 },
	{ "r_so_SimulationBlock_add_SimulatedProfiles", (DL_FUNC) &r_so_SimulationBlock_add_SimulatedProfiles, 2 },
	{ "r_so_SimulationBlock_remove_SimulatedProfiles", (DL_FUNC) &r_so_SimulationBlock_remove_SimulatedProfiles, 2 },
	{ "r_so_SimulationBlock_create_SimulatedProfiles", (DL_FUNC) &r_so_SimulationBlock_create_SimulatedProfiles, 1 },
	{ "r_so_SimulationBlock_get_IndivParameters", (DL_FUNC) &r_so_SimulationBlock_get_IndivParameters, 2 },
	{ "r_so_SimulationBlock_get_number_of_IndivParameters", (DL_FUNC) &r_so_SimulationBlock_get_number_of_IndivParameters, 1 },
	{ "r_so_SimulationBlock_add_IndivParameters", (DL_FUNC) &r_so_SimulationBlock_add_IndivParameters, 2 },
	{ "r_so_SimulationBlock_remove_IndivParameters", (DL_FUNC) &r_so_SimulationBlock_remove_IndivParameters, 2 },
	{ "r_so_SimulationBlock_create_IndivParameters", (DL_FUNC) &r_so_SimulationBlock_create_IndivParameters, 1 },
	{ "r_so_SimulationBlock_get_RandomEffects", (DL_FUNC) &r_so_SimulationBlock_get_RandomEffects, 2 },
	{ "r_so_SimulationBlock_get_number_of_RandomEffects", (DL_FUNC) &r_so_SimulationBlock_get_number_of_RandomEffects, 1 },
	{ "r_so_SimulationBlock_add_RandomEffects", (DL_FUNC) &r_so_SimulationBlock_add_RandomEffects, 2 },
	{ "r_so_SimulationBlock_remove_RandomEffects", (DL_FUNC) &r_so_SimulationBlock_remove_RandomEffects, 2 },
	{ "r_so_SimulationBlock_create_RandomEffects", (DL_FUNC) &r_so_SimulationBlock_create_RandomEffects, 1 },
	{ "r_so_SimulationBlock_get_Covariates", (DL_FUNC) &r_so_SimulationBlock_get_Covariates, 2 },
	{ "r_so_SimulationBlock_get_number_of_Covariates", (DL_FUNC) &r_so_SimulationBlock_get_number_of_Covariates, 1 },
	{ "r_so_SimulationBlock_add_Covariates", (DL_FUNC) &r_so_SimulationBlock_add_Covariates, 2 },
	{ "r_so_SimulationBlock_remove_Covariates", (DL_FUNC) &r_so_SimulationBlock_remove_Covariates, 2 },
	{ "r_so_SimulationBlock_create_Covariates", (DL_FUNC) &r_so_SimulationBlock_create_Covariates, 1 },
	{ "r_so_SimulationBlock_get_Regressors", (DL_FUNC) &r_so_SimulationBlock_get_Regressors, 2 },
	{ "r_so_SimulationBlock_get_number_of_Regressors", (DL_FUNC) &r_so_SimulationBlock_get_number_of_Regressors, 1 },
	{ "r_so_SimulationBlock_add_Regressors", (DL_FUNC) &r_so_SimulationBlock_add_Regressors, 2 },
	{ "r_so_SimulationBlock_remove_Regressors", (DL_FUNC) &r_so_SimulationBlock_remove_Regressors, 2 },
	{ "r_so_SimulationBlock_create_Regressors", (DL_FUNC) &r_so_SimulationBlock_create_Regressors, 1 },
	{ "r_so_SimulationBlock_get_PopulationParameters", (DL_FUNC) &r_so_SimulationBlock_get_PopulationParameters, 2 },
	{ "r_so_SimulationBlock_get_number_of_PopulationParameters", (DL_FUNC) &r_so_SimulationBlock_get_number_of_PopulationParameters, 1 },
	{ "r_so_SimulationBlock_add_PopulationParameters", (DL_FUNC) &r_so_SimulationBlock_add_PopulationParameters, 2 },
	{ "r_so_SimulationBlock_remove_PopulationParameters", (DL_FUNC) &r_so_SimulationBlock_remove_PopulationParameters, 2 },
	{ "r_so_SimulationBlock_create_PopulationParameters", (DL_FUNC) &r_so_SimulationBlock_create_PopulationParameters, 1 },
	{ "r_so_SimulationBlock_get_Dosing", (DL_FUNC) &r_so_SimulationBlock_get_Dosing, 2 },
	{ "r_so_SimulationBlock_get_number_of_Dosing", (DL_FUNC) &r_so_SimulationBlock_get_number_of_Dosing, 1 },
	{ "r_so_SimulationBlock_add_Dosing", (DL_FUNC) &r_so_SimulationBlock_add_Dosing, 2 },
	{ "r_so_SimulationBlock_remove_Dosing", (DL_FUNC) &r_so_SimulationBlock_remove_Dosing, 2 },
	{ "r_so_SimulationBlock_create_Dosing", (DL_FUNC) &r_so_SimulationBlock_create_Dosing, 1 },
	{ "r_so_SimulationBlock_get_RawResultsFile", (DL_FUNC) &r_so_SimulationBlock_get_RawResultsFile, 1 },
	{ "r_so_SimulationBlock_set_RawResultsFile", (DL_FUNC) &r_so_SimulationBlock_set_RawResultsFile, 2 },
	{ "r_so_SimulationBlock_create_RawResultsFile", (DL_FUNC) &r_so_SimulationBlock_create_RawResultsFile, 1 },
	{ "r_so_SimulationBlock_get_replicate", (DL_FUNC) &r_so_SimulationBlock_get_replicate, 1 },
	{ "r_so_SimulationBlock_set_replicate", (DL_FUNC) &r_so_SimulationBlock_set_replicate, 2 },
	{ "r_so_Residuals_new", (DL_FUNC) &r_so_Residuals_new, 0 },
	{ "r_so_Residuals_copy", (DL_FUNC) &r_so_Residuals_copy, 1 },
	{ "r_so_Residuals_free", (DL_FUNC) &r_so_Residuals_free, 1 },
	{ "r_so_Residuals_ref", (DL_FUNC) &r_so_Residuals_ref, 1 },
	{ "r_so_Residuals_unref", (DL_FUNC) &r_so_Residuals_unref, 1 },
	{ "r_so_Residuals_get_ResidualTable", (DL_FUNC) &r_so_Residuals_get_ResidualTable, 1 },
	{ "r_so_Residuals_set_ResidualTable", (DL_FUNC) &r_so_Residuals_set_ResidualTable, 2 },
	{ "r_so_Residuals_create_ResidualTable", (DL_FUNC) &r_so_Residuals_create_ResidualTable, 1 },
	{ "r_so_Residuals_get_EpsShrinkage", (DL_FUNC) &r_so_Residuals_get_EpsShrinkage, 1 },
	{ "r_so_Residuals_set_EpsShrinkage", (DL_FUNC) &r_so_Residuals_set_EpsShrinkage, 2 },
	{ "r_so_Residuals_create_EpsShrinkage", (DL_FUNC) &r_so_Residuals_create_EpsShrinkage, 1 },
	{ "r_so_InformationCriteria_new", (DL_FUNC) &r_so_InformationCriteria_new, 0 },
	{ "r_so_InformationCriteria_copy", (DL_FUNC) &r_so_InformationCriteria_copy, 1 },
	{ "r_so_InformationCriteria_free", (DL_FUNC) &r_so_InformationCriteria_free, 1 },
	{ "r_so_InformationCriteria_ref", (DL_FUNC) &r_so_InformationCriteria_ref, 1 },
	{ "r_so_InformationCriteria_unref", (DL_FUNC) &r_so_InformationCriteria_unref, 1 },
	{ "r_so_InformationCriteria_get_AIC", (DL_FUNC) &r_so_InformationCriteria_get_AIC, 1 },
	{ "r_so_InformationCriteria_set_AIC", (DL_FUNC) &r_so_InformationCriteria_set_AIC, 2 },
	{ "r_so_InformationCriteria_get_BIC", (DL_FUNC) &r_so_InformationCriteria_get_BIC, 1 },
	{ "r_so_InformationCriteria_set_BIC", (DL_FUNC) &r_so_InformationCriteria_set_BIC, 2 },
	{ "r_so_InformationCriteria_get_DIC", (DL_FUNC) &r_so_InformationCriteria_get_DIC, 1 },
	{ "r_so_InformationCriteria_set_DIC", (DL_FUNC) &r_so_InformationCriteria_set_DIC, 2 },
	{ "r_so_DiagnosticIndividualParams_new", (DL_FUNC) &r_so_DiagnosticIndividualParams_new, 0 },
	{ "r_so_DiagnosticIndividualParams_copy", (DL_FUNC) &r_so_DiagnosticIndividualParams_copy, 1 },
	{ "r_so_DiagnosticIndividualParams_free", (DL_FUNC) &r_so_DiagnosticIndividualParams_free, 1 },
	{ "r_so_DiagnosticIndividualParams_ref", (DL_FUNC) &r_so_DiagnosticIndividualParams_ref, 1 },
	{ "r_so_DiagnosticIndividualParams_unref", (DL_FUNC) &r_so_DiagnosticIndividualParams_unref, 1 },
	{ "r_so_DiagnosticIndividualParams_get_RandomEffects", (DL_FUNC) &r_so_DiagnosticIndividualParams_get_RandomEffects, 1 },
	{ "r_so_DiagnosticIndividualParams_set_RandomEffects", (DL_FUNC) &r_so_DiagnosticIndividualParams_set_RandomEffects, 2 },
	{ "r_so_DiagnosticIndividualParams_create_RandomEffects", (DL_FUNC) &r_so_DiagnosticIndividualParams_create_RandomEffects, 1 },
	{ "r_so_DiagnosticIndividualParams_get_IndivParamsCovariates", (DL_FUNC) &r_so_DiagnosticIndividualParams_get_IndivParamsCovariates, 1 },
	{ "r_so_DiagnosticIndividualParams_set_IndivParamsCovariates", (DL_FUNC) &r_so_DiagnosticIndividualParams_set_IndivParamsCovariates, 2 },
	{ "r_so_DiagnosticIndividualParams_create_IndivParamsCovariates", (DL_FUNC) &r_so_DiagnosticIndividualParams_create_IndivParamsCovariates, 1 },
	{ "r_so_DiagnosticIndividualParams_get_DistributionIndivParams", (DL_FUNC) &r_so_DiagnosticIndividualParams_get_DistributionIndivParams, 1 },
	{ "r_so_DiagnosticIndividualParams_set_DistributionIndivParams", (DL_FUNC) &r_so_DiagnosticIndividualParams_set_DistributionIndivParams, 2 },
	{ "r_so_DiagnosticIndividualParams_create_DistributionIndivParams", (DL_FUNC) &r_so_DiagnosticIndividualParams_create_DistributionIndivParams, 1 },
	{ "r_so_TaskInformation_new", (DL_FUNC) &r_so_TaskInformation_new, 0 },
	{ "r_so_TaskInformation_copy", (DL_FUNC) &r_so_TaskInformation_copy, 1 },
	{ "r_so_TaskInformation_free", (DL_FUNC) &r_so_TaskInformation_free, 1 },
	{ "r_so_TaskInformation_ref", (DL_FUNC) &r_so_TaskInformation_ref, 1 },
	{ "r_so_TaskInformation_unref", (DL_FUNC) &r_so_TaskInformation_unref, 1 },
	{ "r_so_TaskInformation_get_Message", (DL_FUNC) &r_so_TaskInformation_get_Message, 2 },
	{ "r_so_TaskInformation_get_number_of_Message", (DL_FUNC) &r_so_TaskInformation_get_number_of_Message, 1 },
	{ "r_so_TaskInformation_add_Message", (DL_FUNC) &r_so_TaskInformation_add_Message, 2 },
	{ "r_so_TaskInformation_remove_Message", (DL_FUNC) &r_so_TaskInformation_remove_Message, 2 },
	{ "r_so_TaskInformation_create_Message", (DL_FUNC) &r_so_TaskInformation_create_Message, 1 },
	{ "r_so_TaskInformation_get_OutputFilePath", (DL_FUNC) &r_so_TaskInformation_get_OutputFilePath, 2 },
	{ "r_so_TaskInformation_get_number_of_OutputFilePath", (DL_FUNC) &r_so_TaskInformation_get_number_of_OutputFilePath, 1 },
	{ "r_so_TaskInformation_add_OutputFilePath", (DL_FUNC) &r_so_TaskInformation_add_OutputFilePath, 2 },
	{ "r_so_TaskInformation_remove_OutputFilePath", (DL_FUNC) &r_so_TaskInformation_remove_OutputFilePath, 2 },
	{ "r_so_TaskInformation_create_OutputFilePath", (DL_FUNC) &r_so_TaskInformation_create_OutputFilePath, 1 },
	{ "r_so_TaskInformation_get_RunTime", (DL_FUNC) &r_so_TaskInformation_get_RunTime, 1 },
	{ "r_so_TaskInformation_set_RunTime", (DL_FUNC) &r_so_TaskInformation_set_RunTime, 2 },
	{ "r_so_TaskInformation_get_NumberChains", (DL_FUNC) &r_so_TaskInformation_get_NumberChains, 1 },
	{ "r_so_TaskInformation_set_NumberChains", (DL_FUNC) &r_so_TaskInformation_set_NumberChains, 2 },
	{ "r_so_TaskInformation_get_NumberIterations", (DL_FUNC) &r_so_TaskInformation_get_NumberIterations, 1 },
	{ "r_so_TaskInformation_set_NumberIterations", (DL_FUNC) &r_so_TaskInformation_set_NumberIterations, 2 },
	{ "r_so_SOBlock_new", (DL_FUNC) &r_so_SOBlock_new, 0 },
	{ "r_so_SOBlock_copy", (DL_FUNC) &r_so_SOBlock_copy, 1 },
	{ "r_so_SOBlock_free", (DL_FUNC) &r_so_SOBlock_free, 1 },
	{ "r_so_SOBlock_ref", (DL_FUNC) &r_so_SOBlock_ref, 1 },
	{ "r_so_SOBlock_unref", (DL_FUNC) &r_so_SOBlock_unref, 1 },
	{ "r_so_SOBlock_get_ToolSettings", (DL_FUNC) &r_so_SOBlock_get_ToolSettings, 1 },
	{ "r_so_SOBlock_set_ToolSettings", (DL_FUNC) &r_so_SOBlock_set_ToolSettings, 2 },
	{ "r_so_SOBlock_create_ToolSettings", (DL_FUNC) &r_so_SOBlock_create_ToolSettings, 1 },
	{ "r_so_SOBlock_get_RawResults", (DL_FUNC) &r_so_SOBlock_get_RawResults, 1 },
	{ "r_so_SOBlock_set_RawResults", (DL_FUNC) &r_so_SOBlock_set_RawResults, 2 },
	{ "r_so_SOBlock_create_RawResults", (DL_FUNC) &r_so_SOBlock_create_RawResults, 1 },
	{ "r_so_SOBlock_get_TaskInformation", (DL_FUNC) &r_so_SOBlock_get_TaskInformation, 1 },
	{ "r_so_SOBlock_set_TaskInformation", (DL_FUNC) &r_so_SOBlock_set_TaskInformation, 2 },
	{ "r_so_SOBlock_create_TaskInformation", (DL_FUNC) &r_so_SOBlock_create_TaskInformation, 1 },
	{ "r_so_SOBlock_get_Estimation", (DL_FUNC) &r_so_SOBlock_get_Estimation, 1 },
	{ "r_so_SOBlock_set_Estimation", (DL_FUNC) &r_so_SOBlock_set_Estimation, 2 },
	{ "r_so_SOBlock_create_Estimation", (DL_FUNC) &r_so_SOBlock_create_Estimation, 1 },
	{ "r_so_SOBlock_get_Simulation", (DL_FUNC) &r_so_SOBlock_get_Simulation, 1 },
	{ "r_so_SOBlock_set_Simulation", (DL_FUNC) &r_so_SOBlock_set_Simulation, 2 },
	{ "r_so_SOBlock_create_Simulation", (DL_FUNC) &r_so_SOBlock_create_Simulation, 1 },
	{ "r_so_SOBlock_get_ModelDiagnostic", (DL_FUNC) &r_so_SOBlock_get_ModelDiagnostic, 1 },
	{ "r_so_SOBlock_set_ModelDiagnostic", (DL_FUNC) &r_so_SOBlock_set_ModelDiagnostic, 2 },
	{ "r_so_SOBlock_create_ModelDiagnostic", (DL_FUNC) &r_so_SOBlock_create_ModelDiagnostic, 1 },
	{ "r_so_SOBlock_get_OptimalDesign", (DL_FUNC) &r_so_SOBlock_get_OptimalDesign, 1 },
	{ "r_so_SOBlock_set_OptimalDesign", (DL_FUNC) &r_so_SOBlock_set_OptimalDesign, 2 },
	{ "r_so_SOBlock_create_OptimalDesign", (DL_FUNC) &r_so_SOBlock_create_OptimalDesign, 1 },
	{ "r_so_SOBlock_get_blkId", (DL_FUNC) &r_so_SOBlock_get_blkId, 1 },
	{ "r_so_SOBlock_set_blkId", (DL_FUNC) &r_so_SOBlock_set_blkId, 2 },
	{ "r_so_PrecisionPopulationEstimates_new", (DL_FUNC) &r_so_PrecisionPopulationEstimates_new, 0 },
	{ "r_so_PrecisionPopulationEstimates_copy", (DL_FUNC) &r_so_PrecisionPopulationEstimates_copy, 1 },
	{ "r_so_PrecisionPopulationEstimates_free", (DL_FUNC) &r_so_PrecisionPopulationEstimates_free, 1 },
	{ "r_so_PrecisionPopulationEstimates_ref", (DL_FUNC) &r_so_PrecisionPopulationEstimates_ref, 1 },
	{ "r_so_PrecisionPopulationEstimates_unref", (DL_FUNC) &r_so_PrecisionPopulationEstimates_unref, 1 },
	{ "r_so_PrecisionPopulationEstimates_get_MLE", (DL_FUNC) &r_so_PrecisionPopulationEstimates_get_MLE, 1 },
	{ "r_so_PrecisionPopulationEstimates_set_MLE", (DL_FUNC) &r_so_PrecisionPopulationEstimates_set_MLE, 2 },
	{ "r_so_PrecisionPopulationEstimates_create_MLE", (DL_FUNC) &r_so_PrecisionPopulationEstimates_create_MLE, 1 },
	{ "r_so_PrecisionPopulationEstimates_get_Bayesian", (DL_FUNC) &r_so_PrecisionPopulationEstimates_get_Bayesian, 1 },
	{ "r_so_PrecisionPopulationEstimates_set_Bayesian", (DL_FUNC) &r_so_PrecisionPopulationEstimates_set_Bayesian, 2 },
	{ "r_so_PrecisionPopulationEstimates_create_Bayesian", (DL_FUNC) &r_so_PrecisionPopulationEstimates_create_Bayesian, 1 },
	{ "r_so_PrecisionPopulationEstimates_get_OtherMethod", (DL_FUNC) &r_so_PrecisionPopulationEstimates_get_OtherMethod, 1 },
	{ "r_so_PrecisionPopulationEstimates_set_OtherMethod", (DL_FUNC) &r_so_PrecisionPopulationEstimates_set_OtherMethod, 2 },
	{ "r_so_PrecisionPopulationEstimates_create_OtherMethod", (DL_FUNC) &r_so_PrecisionPopulationEstimates_create_OtherMethod, 1 },
	{ "r_so_DiagnosticStructuralModel_new", (DL_FUNC) &r_so_DiagnosticStructuralModel_new, 0 },
	{ "r_so_DiagnosticStructuralModel_copy", (DL_FUNC) &r_so_DiagnosticStructuralModel_copy, 1 },
	{ "r_so_DiagnosticStructuralModel_free", (DL_FUNC) &r_so_DiagnosticStructuralModel_free, 1 },
	{ "r_so_DiagnosticStructuralModel_ref", (DL_FUNC) &r_so_DiagnosticStructuralModel_ref, 1 },
	{ "r_so_DiagnosticStructuralModel_unref", (DL_FUNC) &r_so_DiagnosticStructuralModel_unref, 1 },
	{ "r_so_DiagnosticStructuralModel_get_IndivObservationPrediction", (DL_FUNC) &r_so_DiagnosticStructuralModel_get_IndivObservationPrediction, 1 },
	{ "r_so_DiagnosticStructuralModel_set_IndivObservationPrediction", (DL_FUNC) &r_so_DiagnosticStructuralModel_set_IndivObservationPrediction, 2 },
	{ "r_so_DiagnosticStructuralModel_create_IndivObservationPrediction", (DL_FUNC) &r_so_DiagnosticStructuralModel_create_IndivObservationPrediction, 1 },
	{ "r_so_DiagnosticStructuralModel_get_VPC", (DL_FUNC) &r_so_DiagnosticStructuralModel_get_VPC, 1 },
	{ "r_so_DiagnosticStructuralModel_set_VPC", (DL_FUNC) &r_so_DiagnosticStructuralModel_set_VPC, 2 },
	{ "r_so_DiagnosticStructuralModel_create_VPC", (DL_FUNC) &r_so_DiagnosticStructuralModel_create_VPC, 1 },
	{ NULL, NULL, 0 }
};

void R_init_libsoc(DllInfo *info)
{
	R_registerRoutines(info, NULL, c_symbols, NULL, NULL);
	R_useDynamicSymbols(info, TRUE);
}
