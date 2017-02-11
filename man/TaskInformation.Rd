\name{so_TaskInformation}
\alias{so_TaskInformation}
\title{so_TaskInformation reference class}
\description{
	Reference Class for the SO/SOBlock/TaskInformation element of a PharmML-SO data structure
}
\section{Methods}{
so_TaskInformation$new() - Create a new empty so_TaskInformation object\cr
so_TaskInformation$add_Message(object) - Add a Message\cr
so_TaskInformation$remove_Message(object, i) - Remove the Message having index i\cr
so_TaskInformation$add_OutputFilePath(object) - Add a OutputFilePath\cr
so_TaskInformation$remove_OutputFilePath(object, i) - Remove the OutputFilePath having index i\cr
}
\section{Fields}{
$Message - A list of \link{so_Message} objects\cr
$OutputFilePath - A list of \link{so_ExternalFile} objects\cr
$RunTime - A numeric\cr
$NumberChains - An integer\cr
$NumberIterations - An integer\cr
}
\keyword{so_TaskInformation}
