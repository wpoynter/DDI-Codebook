#-------------------------------------------------
#
# Project created by QtCreator 2014-05-16T16:11:01
#
#-------------------------------------------------

QT       -= core gui

TARGET = DDI-Codebook
TEMPLATE = lib
CONFIG += staticlib c++11
INCLUDEPATH +=  N:\CLOSER\Code\lib

SOURCES += \
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
    datakind.cpp \
    method.cpp \
    datacoll.cpp \
    timemeth.cpp \
    datacollector.cpp \
    sampproc.cpp \
    collmode.cpp \
    sources.cpp \
    weight.cpp \
    cleanops.cpp \
    dataaccs.cpp \
    setavail.cpp \
    collsize.cpp \
    fileqnty.cpp \
    usestmt.cpp \
    restrctn.cpp \
    filedscr.cpp \
    codebook.cpp \
    filetxt.cpp \
    filename.cpp \
    dimensns.cpp \
    caseqnty.cpp \
    varqnty.cpp \
    logrecl.cpp \
    recprcas.cpp \
    filetype.cpp \
    datadscr.cpp \
    vargrp.cpp \
    labl.cpp \
    var.cpp \
    location.cpp \
    qstn.cpp \
    qstnlit.cpp \
    invalrng.cpp \
    range.cpp \
    item.cpp \
    sumstat.cpp \
    txt.cpp \
    catgrygrp.cpp \
    catstat.cpp \
    catgry.cpp \
    catvalu.cpp \
    concept.cpp \
    derivation.cpp \
    drvdesc.cpp \
    varformat.cpp \
    othermat.cpp \
    table.cpp \
    reader.cpp \
    ddientity.cpp \
    date.cpp \
    utils.cpp \
    pipe.cpp

HEADERS += \
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
    datakind.h \
    method.h \
    datacoll.h \
    timemeth.h \
    datacollector.h \
    sampproc.h \
    collmode.h \
    sources.h \
    weight.h \
    cleanops.h \
    dataaccs.h \
    setavail.h \
    collsize.h \
    fileqnty.h \
    usestmt.h \
    restrctn.h \
    filedscr.h \
    codebook.h \
    filetxt.h \
    filename.h \
    dimensns.h \
    caseqnty.h \
    varqnty.h \
    logrecl.h \
    recprcas.h \
    filetype.h \
    datadscr.h \
    vargrp.h \
    labl.h \
    var.h \
    location.h \
    qstn.h \
    qstnlit.h \
    invalrng.h \
    range.h \
    item.h \
    sumstat.h \
    txt.h \
    catgrygrp.h \
    catstat.h \
    catgry.h \
    catvalu.h \
    concept.h \
    derivation.h \
    drvdesc.h \
    varformat.h \
    othermat.h \
    table.h \
    N:/CLOSER/Code/lib/rapidxml-1.13/rapidxml.hpp \
    N:/CLOSER/Code/lib/rapidxml-1.13/rapidxml_utils.hpp \
    reader.h \
    date.h \
    utils.h \
    pipe.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
