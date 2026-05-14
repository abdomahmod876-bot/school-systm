@echo off
REM Compile the School Management System
REM Assuming g++ is installed in PATH

g++ -o school_system.exe ^
    "School Management System.cpp" ^
    class/Person.cpp ^
    class/Student.cpp ^
    class/Teacher.cpp ^
    class/Staff.cpp ^
    class/Course.cpp ^
    class/Classroom.cpp ^
    class/Exam.cpp ^
    class/School.cpp

echo Build completed!
pause
