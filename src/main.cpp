#include "bn_core.h"
#include "bn_fixed.h"
#include "bn_span.h"
#include "bn_keypad.h"
#include "bn_string_view.h"
#include "bn_sprite_ptr.h"
#include "bn_camera_ptr.h"
#include "bn_regular_bg_ptr.h"
#include "bn_sprite_text_generator.h"

#include "bn_regular_bg_items_dungeon_bg.h"
#include "bn_sprite_items_golem_sprite.h"
#include "variable_8x8_sprite_font.h"

void first_scene(){
    bool finished = false;

    // text generator and text sprites
    bn::sprite_text_generator text_generator(variable_8x8_sprite_font);
    bn::vector<bn::sprite_ptr, 32> text_sprites;
    text_generator.set_center_alignment();
    // text_generator.set_bg_priority(0);

    //map
    bn::regular_bg_ptr map_bg = bn::regular_bg_items::dungeon_bg.create_bg(0, 0);

    //sprite
    bn::sprite_ptr sprite = bn::sprite_items::golem_sprite.create_sprite(0, 0);
    sprite.set_horizontal_scale(2);
    sprite.set_vertical_scale(2);
    
    bn::string_view text_lines[14] = {
        ". . .",
        "* groans *",
        "S o m e o n e  t h e r e  ?",
        "Hello young one.",
        "* cough *",
        "Something troubles you?",
        ". . .",
        "Oh.",
        "Thats no good.",
        "I am gravely sorry.",
        "I don't know if they came passed me.",
        "I haven't awoken for many centuries now.",
        "You see..",
        "*he motions towards the sprawling cobwebs*"
    };

    int currentLine = 0;
    bn::span<bn::string_view> text = bn::span(text_lines);


    while(!finished){
        text_sprites.clear();
        text_generator.generate(0, 60, text[currentLine], text_sprites);

        if(currentLine < text.size() - 1){
            if(bn::keypad::a_pressed())
            {
                ++currentLine;
            }
        } else {
            finished = true;
        }

        bn::core::update();
    }
}

int main()
{
    bn::core::init();

    while(true)
    {
        first_scene();
        bn::core::update();
    }
}
