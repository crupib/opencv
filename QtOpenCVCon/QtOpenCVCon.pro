#-------------------------------------------------
#
# Project created by QtCreator 2014-11-26T13:19:55
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = QtOpenCVCon
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp
INCLUDEPATH += C:\opencv\build\include
LIBS += -LC:\opencv\build\x86\vc12\lib \
-lopencv_core2410d \
-lopencv_highgui2410d \
-lopencv_imgproc2410d \
-lopencv_features2d2410d \
-lopencv_calib3d2410d

