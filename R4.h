/*!
 * \file R4.h
 */

#ifndef R4_H
#define R4_H

typedef struct Alarm{
	char msg[50];
	int hour;
	int min;
	int sec;

	struct Alarm* next;
	struct Alarm* prev;

}ala;

typedef struct AlarmList{
    int count;
    ala* head;
    ala* tail;
}alist;

///Check's status of any current alarms
void checkAlarm();

///Check's remaining time of alarm
int checkTime();

///Adds an alarm to the system
void addAla();

///Creates an alarm for the system
void createAlarm();

///Removes the current alarm
void removeAla();
alist list;

#endif
