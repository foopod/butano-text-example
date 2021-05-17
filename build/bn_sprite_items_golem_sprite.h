#ifndef BN_SPRITE_ITEMS_GOLEM_SPRITE_H
#define BN_SPRITE_ITEMS_GOLEM_SPRITE_H

#include "bn_sprite_item.h"

//{{BLOCK(golem_sprite_bn_graphics)

//======================================================================
//
//	golem_sprite_bn_graphics, 8x64@4, 
//	+ palette 16 entries, not compressed
//	+ 8 tiles not compressed
//	Total size: 32 + 256 = 288
//
//	Time-stamp: 2021-05-17, 19:17:13
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.16
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_GOLEM_SPRITE_BN_GRAPHICS_H
#define GRIT_GOLEM_SPRITE_BN_GRAPHICS_H

#define golem_sprite_bn_graphicsTilesLen 256
extern const bn::tile golem_sprite_bn_graphicsTiles[bn::max(64 / 8, 1)];

#define golem_sprite_bn_graphicsPalLen 32
extern const bn::color golem_sprite_bn_graphicsPal[16];

#endif // GRIT_GOLEM_SPRITE_BN_GRAPHICS_H

//}}BLOCK(golem_sprite_bn_graphics)

namespace bn::sprite_items
{
    constexpr const sprite_item golem_sprite(sprite_shape_size(sprite_shape::TALL, sprite_size::SMALL), 
            sprite_tiles_item(span<const tile>(golem_sprite_bn_graphicsTiles, 8), bpp_mode::BPP_4, compression_type::NONE, 4), 
            sprite_palette_item(span<const color>(golem_sprite_bn_graphicsPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

