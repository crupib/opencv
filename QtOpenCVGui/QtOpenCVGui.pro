#-------------------------------------------------
#
# Project created by QtCreator 2014-11-27T10:46:11
#
#-------------------------------------------------

QT       += core gui widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtOpenCVGui
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
INCLUDEPATH += C:\opencv\build\include
LIBS += -LC:\opencv\build\x86\vc12\lib \
-lopencv_core2410d \
-lopencv_highgui2410d \
-lopencv_imgproc2410d \
-lopencv_features2d2410d \
-lopencv_calib3d2410d
