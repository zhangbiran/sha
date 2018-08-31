#include "roommgr.h"

RoomManager * RoomManager::GetInstance()
{
	static RoomManager ins;
	return &ins;
}


RoomManager::RoomManager()
{

}

RoomManager::~RoomManager()
{

}

std::shared_ptr<Room> RoomManager::GetRoom(int id)
{
	auto it = _room_map.find(id);
	if (it != _room_map.end())
		return it->second;
	return nullptr;

}