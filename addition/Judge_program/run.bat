start /w /B %1\\test.exe <%1\\problem_case\\%2.in >%1\\test.out
echo %errorlevel% >%1\\judgement_log.txt