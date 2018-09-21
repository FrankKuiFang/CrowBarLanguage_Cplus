cmake_minimum_required(VERSION 3.10)

project(CrowBarCPlus)

set(CMAKE_CXX_STANDARD 11)
#####
include_directories(
        ./
        )

    #set(CMAKE_C_STANDARD 99)

    set(SRC
        CRB.cpp
        crowbar.cpp
        eval_visitor.cpp
        interface.cpp
        error.cpp
        interpreter.cpp
        
        lexer_util.cpp
        native.cpp
        parser.tab.cpp
	#y.tab_new.cpp

        string.cpp
        #lexer.cpp
	#lexer.flex.cpp
	lex.yy_new.cpp

        )

    set(INC
        CRB.h
        crowbar.h
        error.h
        eval_visitor.h
        interpreter.h
        parser.tab.h
	#y.tab_new.h
        vistor.h
        #test.crb
    )

source_group(include FILES ${INC})
source_group(source  FILES ${SRC})

add_executable(CrowBarCPlus main.cpp ${SRC} ${INC})

#target_link_libraries(${PROJECT_NAME} m)
target_link_libraries(CrowBarCPlus ${CMAKE_THREAD_LIBS_INIT})
