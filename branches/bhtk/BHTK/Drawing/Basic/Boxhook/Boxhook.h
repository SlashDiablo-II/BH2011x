#pragma once

#include "../../Hook.h"

namespace Drawing {
	class Boxhook : public Hook {
		private:
			unsigned int color;//Color of the box hook 0-255.
			unsigned int xSize, ySize;//Size of the box hook.
			BoxTrans transparency;//Type of transparency.

		public:
			//Boxhook Initaliztors, one for basic hooks and one for groups.
			EXPORT Boxhook(HookVisibility visiblity, unsigned int x, unsigned int y, unsigned int xSize, unsigned int ySize);
			EXPORT Boxhook(HookGroup* group, unsigned int x, unsigned int y, unsigned int xSize, unsigned int ySize);

			//Returns the color of the box hook.
			EXPORT unsigned int GetColor();

			//Sets the color of the box hook.
			EXPORT void SetColor(unsigned int newColor);


			//Get the size of the box hook.
			EXPORT unsigned int GetXSize();

			//Set the size of the x hook.
			EXPORT void SetXSize(unsigned int newX);


			//Get the height of the box hook.
			EXPORT unsigned int GetYSize();

			//Set the height of the box hook.
			EXPORT void SetYSize(unsigned int newY);


			//Returns the type of transparency used.
			EXPORT BoxTrans GetTransparency();

			//Set the box transparency.
			EXPORT void SetTransparency(BoxTrans trans);

			//Draw the text.
			void OnDraw();

			//Checks if we've been clicked on and calls the handler if so.
			bool OnLeftClick(bool up, unsigned int x, unsigned int y);

			//Checks if we've been clicked on and calls the handler if so.
			bool OnRightClick(bool up, unsigned int x, unsigned int y);

			//Static box draw
			EXPORT static bool Draw(unsigned int x, unsigned int y, unsigned int xSize, unsigned int ySize, unsigned int color, BoxTrans trans);
	};
};