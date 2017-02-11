\name{so_SimulationBlock}
\alias{so_SimulationBlock}
\title{so_SimulationBlock reference class}
\description{
	Reference Class for the SO/SOBlock/Simulation/SimulationBlock element of a PharmML-SO data structure
}
\section{Methods}{
so_SimulationBlock$new() - Create a new empty so_SimulationBlock object\cr
so_SimulationBlock$add_SimulatedProfiles(object) - Add a SimulatedProfiles\cr
so_SimulationBlock$remove_SimulatedProfiles(object, i) - Remove the SimulatedProfiles having index i\cr
so_SimulationBlock$add_IndivParameters(object) - Add a IndivParameters\cr
so_SimulationBlock$remove_IndivParameters(object, i) - Remove the IndivParameters having index i\cr
so_SimulationBlock$add_RandomEffects(object) - Add a RandomEffects\cr
so_SimulationBlock$remove_RandomEffects(object, i) - Remove the RandomEffects having index i\cr
so_SimulationBlock$add_Covariates(object) - Add a Covariates\cr
so_SimulationBlock$remove_Covariates(object, i) - Remove the Covariates having index i\cr
so_SimulationBlock$add_Regressors(object) - Add a Regressors\cr
so_SimulationBlock$remove_Regressors(object, i) - Remove the Regressors having index i\cr
so_SimulationBlock$add_PopulationParameters(object) - Add a PopulationParameters\cr
so_SimulationBlock$remove_PopulationParameters(object, i) - Remove the PopulationParameters having index i\cr
so_SimulationBlock$add_Dosing(object) - Add a Dosing\cr
so_SimulationBlock$remove_Dosing(object, i) - Remove the Dosing having index i\cr
}
\section{Fields}{
$SimulatedProfiles - A list of \link{so_SimulationSubType} objects\cr
$IndivParameters - A list of \link{so_SimulationSubType} objects\cr
$RandomEffects - A list of \link{so_SimulationSubType} objects\cr
$Covariates - A list of \link{so_SimulationSubType} objects\cr
$Regressors - A list of \link{so_SimulationSubType} objects\cr
$PopulationParameters - A list of \link{so_SimulationSubType} objects\cr
$Dosing - A list of \link{so_SimulationSubType} objects\cr
$RawResultsFile - A \link{so_ExternalFile} object\cr
$replicate - An integer attribute\cr
}
\keyword{so_SimulationBlock}
