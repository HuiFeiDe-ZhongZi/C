#pragma once
#include<windows.h>
#include<list>
#include<algorithm>
#include"resource.h"
using namespace std;


#define BACK_MOVE_TIMER_ID  1    //控制背景
#define PLANE_MOVE_TIMER_ID  2   //控制玩家飞机
#define SEND_GUNNER_TIMER_ID  3    //控制背景
#define GUNNER_MOVE_TIMER_ID  4   //控制玩家飞机
#define CREATE_FOEPLANE_TIMER_ID  5    //创建敌人飞机
#define FOEPLANE_MOVE_TIMER_ID  6   //敌人飞机移动