#ifndef RAKNETMANAGER_ADDRESSES_H_
#define RAKNETMANAGER_ADDRESSES_H_

class Addresses
{
public:

	static bool Init(urmem::address_t rakserver);

	static urmem::address_t
		RAKSERVER,
		FUNC_RAKSERVER__SEND,
		FUNC_RAKSERVER__RPC,
		FUNC_RAKSERVER__RECEIVE,
		FUNC_RAKSERVER__REGISTER_AS_REMOTE_PROCEDURE_CALL,
		FUNC_RAKSERVER__DEALLOCATE_PACKET,
		FUNC_RAKSERVER__GET_INDEX_FROM_PLAYER_ID,
		FUNC_RAKSERVER__GET_PLAYER_ID_FROM_INDEX;
};

#endif // RAKNETMANAGER_ADDRESSES_H_