#pragma once

#include "../../Hook.h"
#include "../../Basic/Texthook/Texthook.h"

namespace Drawing {
	class Checkhook : public Hook {
		private:
			bool* state;//Holds if the checkbox is checked.
			TextColor color, hoverColor;//Holds text color/hover color.
			std::wstring text;//The text beside the checkhook.
		public:
			EXPORT Checkhook(HookVisibility visibility, unsigned int x, unsigned int y, bool* checked, std::wstring formatString, ...);
			EXPORT Checkhook(HookGroup* group, unsigned int x, unsigned int y, bool* checked, std::wstring formatString, ...);

			//Returns if the check is checked.
			EXPORT bool IsChecked();

			//Sets if it is checked or not.
			EXPORT void SetState(bool checked);

			//Returns the text color.
			EXPORT TextColor GetTextColor();

			//Returns the hover color
			EXPORT TextColor GetHoverColor();

			//Sets the text color
			EXPORT void SetTextColor(TextColor newColor);

			//Sets the hover color
			EXPORT void SetHoverColor(TextColor newColor);

			//Gets the text
			EXPORT std::wstring GetText();

			//Sets the text
			EXPORT void SetText(std::wstring formatString, ...);

			//Returns the total width of the check hook
			EXPORT unsigned int GetXSize();

			//Returns the total hright of the check hook
			EXPORT unsigned int GetYSize();

			//Draw the text.
			void OnDraw();

			//Checks if we've been clicked on and calls the handler if so.
			bool OnLeftClick(bool up, unsigned int x, unsigned int y);

			//Checks if we've been clicked on and calls the handler if so.
			bool OnRightClick(bool up, unsigned int x, unsigned int y);
	};
};