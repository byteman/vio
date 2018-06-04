TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH+= /home/byteman/work/facego-3559a/h5live/src
INCLUDEPATH+= ../vio
LIBS+=-L/home/byteman/work/facego-3559a/h5live/sdk
LIBS+=-L.
LIBS+=-L../vio
LIBS+=-lvss -lh5live
LIBS+=-lpthread -ldl
SOURCES += \
    main.cpp
