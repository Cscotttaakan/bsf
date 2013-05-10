#pragma once

#include "BsPrerequisites.h"
#include "BsSprite.h"

namespace BansheeEngine
{
	struct IMAGE_SPRITE_DESC
	{
		IMAGE_SPRITE_DESC()
			:width(0), height(0), anchor(SA_TopLeft), borderLeft(0), borderRight(0), 
			borderTop(0), borderBottom(0)
		{ }

		CM::Int2 offset;
		UINT32 width;
		UINT32 height;
		CM::Rect clipRect;
		SpriteAnchor anchor;

		SpriteTexturePtr texture;
		UINT32 borderLeft, borderRight, borderTop, borderBottom;
	};

	class BS_EXPORT ImageSprite : public Sprite
	{
	public:
		ImageSprite();

		void update(const IMAGE_SPRITE_DESC& desc);
	};
}