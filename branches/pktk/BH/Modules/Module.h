#pragma once
#include <string>
#include "ModuleManager.h"

using namespace std;

class Module {
	private:
		friend class ModuleManager;

		string name;
		bool active;

		void Load();
		void Unload();

	public:
		Module(string name);
		~Module();

		string GetName() { return name; };
		bool IsActive() { return active; };

		// Module Events
		virtual void OnLoad() {};
		virtual void OnUnload() {};

		virtual void OnLoop() {};

		// Game Events
		virtual void OnGameJoin(const string& name, const string& pass, int diff) {}
		virtual void OnGameExit() {};

		// Drawing Events
		virtual void OnDraw() {};
		virtual void OnAutomapDraw() {};
		virtual void OnOOGDraw() {};

		virtual void OnLeftClick(bool up, int x, int y, bool* block) {};
		virtual void OnRightClick(bool up, int x, int y, bool* block) {};
		virtual void OnKey(bool up, BYTE key, LPARAM lParam, bool* block) {};

		virtual void OnChatPacketRecv(BYTE* packet, bool* block) {};
		virtual void OnRealmPacketRecv(BYTE* packet, bool* block) {};
		virtual void OnGamePacketRecv(BYTE* packet, bool* block) {};
};