# System-wide Design Decisions #

  1. Client-server application
  1. Using Microsoft SQL server
  1. Using Visual C++ 6.0 SDI GUI
  1. Top-level design consists of:
  * Client Application - AppWin, AppModel and AppPrint
  * Database - ScheduleDB

# Modules #

| **Module** | **Purpose** | **Notes** |
|:-----------|:------------|:----------|
| AppWin     | Set of Client Application windows to enter/view data |           |
| AppModel   | Class in Client Application to get/set data items |           |
| AppPrint   | Windows/algorithms in Client Application to print final sheets |           |
| ScheduleDB | SQL Server database for schedule data |           |

# Detailed Design Pages #

  * AppWin: http://code.google.com/p/schsch/wiki/AppWin
  * AppModel API: http://code.google.com/p/schsch/wiki/AppModelAPI
  * AppModel: http://code.google.com/p/schsch/wiki/AppModel
  * ScheduleDB: http://code.google.com/p/schsch/wiki/ScheduleDB
  * AppPrint: http://code.google.com/p/schsch/wiki/AppPrint