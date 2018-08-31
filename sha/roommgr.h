#ifndef __SANGUOSHA_ROOMMGR_H
#define __SANGUOSHA_ROOMMGR_H
#include <map>
#include "room.h"
class RoomManager
{
public:
	static RoomManager * GetInstance();
	std::shared_ptr<Room> GetRoom(int id);
private:
	RoomManager();
	~RoomManager();
	std::map<int, std::shared_ptr<Room> > _room_map;
};

#endif