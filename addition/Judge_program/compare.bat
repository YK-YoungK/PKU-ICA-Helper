fc %1\\test.out %1\\problem_case\\%2.out
echo %errorlevel% >%1\\judgement_log.txt
fc /W %1\\test.out %1\\problem_case\\%2.out
echo %errorlevel% >>%1\\judgement_log.txt