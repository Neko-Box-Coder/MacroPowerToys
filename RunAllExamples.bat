@ECHO OFF

SETLOCAL ENABLEEXTENSIONS

.\AppendListsItemsC.exe || goto :error
.\ArgsCountC.exe || goto :error
.\ConcatListsItemsC.exe || goto :error
.\GetLastArgC.exe || goto :error
.\MiscellaneousC.exe || goto :error
.\PersistentCounterC.exe || goto :error
.\PrependAppendArgsC.exe || goto :error
.\AreArgsEmptyC.exe || goto :error
.\ArgsOptC.exe || goto :error
.\CountToC.exe || goto :error
.\OverloadC.exe || goto :error
.\PrefixSuffixArgsC.exe || goto :error
.\RemoveParenthesisInListC.exe || goto :error
.\AppendListsItemsCpp.exe || goto :error
.\ArgsCountCpp.exe || goto :error
.\ConcatListsItemsCpp.exe || goto :error
.\GetLastArgCpp.exe || goto :error
.\MiscellaneousCpp.exe || goto :error
.\PersistentCounterCpp.exe || goto :error
.\PrependAppendArgsCpp.exe || goto :error
.\AreArgsEmptyCpp.exe || goto :error
.\ArgsOptCpp.exe || goto :error
.\CountToCpp.exe || goto :error
.\OverloadCpp.exe || goto :error
.\PrefixSuffixArgsCpp.exe || goto :error
.\RemoveParenthesisInListCpp.exe || goto :error

goto :EOF

:error
echo Failed with error #%errorlevel%.
exit /b %errorlevel%
