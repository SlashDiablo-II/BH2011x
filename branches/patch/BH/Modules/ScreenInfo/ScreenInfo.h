#pragma once
#include "../../D2Structs.h"
#include "../Module.h"
#include "../../Config.h"
#include "../../Drawing.h"


struct AutomapReplace {
	std::string key;
	std::string value;
};

class ScreenInfo : public Module {
	private:
		std::vector<std::string> automapInfo;
		Drawing::Texthook* bhText;
		DWORD gameTimer;

	public:
		ScreenInfo() : Module("Screen Info") {};

		void OnLoad();
		void OnGameEnter(std::string name, std::string password, int diff);

		void OnAutomapDraw();
};