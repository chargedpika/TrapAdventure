#include "inst_screen.h"
#include "../draw/draw.h"

InstScreen::InstScreen() {
    width = 1366.0;
    height = 768.0;
    inst1 = "1. Press left arrow to go back";
    inst2 = "2. Press right arrow to go front";
    inst3 = "3. Press up arrow to jump";
    inst4 = "4. Press down arrow to duck";
}

void InstScreen::drawScreen() {
    glColor3f(1.000, 0.871, 0.678);
    Draw draw = Draw();
    draw.drawBox(0.0, 0.0, -2.0, width, height);
    glColor3f(1.0, 0.0, 0.0);
    draw.drawString(width/2-150.0, height-150.0, 0.0, 0.5, 0.5, 0.0, 2.0, "Instruction");
    glColor3f(0.416, 0.353, 0.804);     //SlateBlue
    draw.drawString(100.0, height-200.0, 0.0, 0.3, 0.3, 0.0, 1.0, inst1);
    draw.drawString(100.0, height-240.0, 0.0, 0.3, 0.3, 0.0, 1.0, inst2);
    draw.drawString(100.0, height-280.0, 0.0, 0.3, 0.3, 0.0, 1.0, inst3);
    draw.drawString(100.0, height-320.0, 0.0, 0.3, 0.3, 0.0, 1.0, inst4);
}