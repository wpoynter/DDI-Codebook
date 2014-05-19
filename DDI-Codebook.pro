#-------------------------------------------------
#
# Project created by QtCreator 2014-05-16T16:11:01
#
#-------------------------------------------------

QT       -= core gui

TARGET = DDI-Codebook
TEMPLATE = lib
CONFIG += staticlib

SOURCES += ddicodebook.cpp \
    docdscr.cpp \
    citation.cpp \
    titlestmt.cpp \
    titl.cpp \
    idno.cpp \
    prodstmt.cpp \
    producer.cpp \
    copyright.cpp \
    proddate.cpp \
    software.cpp \
    verstmt.cpp \
    version.cpp \
    notes.cpp \
    stdydscr.cpp \
    rspstmt.cpp \
    authentry.cpp \
    othid.cpp \
    fundag.cpp \
    diststmt.cpp \
    distrbtr.cpp \
    distdate.cpp \
    serstmt.cpp \
    sername.cpp \
    biblcit.cpp \
    stdyinfo.cpp \
    subject.cpp \
    keyword.cpp \
    abstract.cpp \
    sumdscr.cpp \
    timeprd.cpp \
    colldate.cpp \
    nation.cpp \
    geogcover.cpp \
    anlyunit.cpp \
    universe.cpp \
    datakind.cpp

HEADERS += ddicodebook.h \
    docdscr.h \
    ddientity.h \
    citation.h \
    titlestmt.h \
    titl.h \
    idno.h \
    prodstmt.h \
    producer.h \
    copyright.h \
    proddate.h \
    software.h \
    verstmt.h \
    version.h \
    notes.h \
    stdydscr.h \
    rspstmt.h \
    authentry.h \
    othid.h \
    fundag.h \
    diststmt.h \
    distrbtr.h \
    distdate.h \
    serstmt.h \
    sername.h \
    biblcit.h \
    stdyinfo.h \
    subject.h \
    keyword.h \
    abstract.h \
    sumdscr.h \
    timeprd.h \
    colldate.h \
    nation.h \
    geogcover.h \
    anlyunit.h \
    universe.h \
    datakind.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
