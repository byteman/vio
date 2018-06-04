#-------------------------------------------------
#
# Project created by QtCreator 2018-03-22T19:51:44
#
#-------------------------------------------------

QT       -= core gui

TARGET = vio
TEMPLATE = lib
CONFIG += staticlib

INCLUDEPATH+=./include
SOURCES += \
    sample_comm_venc.c \
    sample_comm_vi.c \
    sample_comm_vo.c \
    sample_comm_vpss.c \
    sample_venc.c \
    vio.c \
    sample_comm_sys.c \
    sample_comm_isp.c

HEADERS += vio.h \
    sample_comm.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
QMAKE_POST_LINK="./buildstatic.sh"
