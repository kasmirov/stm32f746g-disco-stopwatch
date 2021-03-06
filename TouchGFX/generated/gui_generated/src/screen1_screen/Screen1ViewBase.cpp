/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

Screen1ViewBase::Screen1ViewBase() :
    buttonCallback(this, &Screen1ViewBase::buttonCallbackHandler),
    updateItemCallback(this, &Screen1ViewBase::updateItemCallbackHandler)
{

    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    tiledImage1.setBitmap(touchgfx::Bitmap(BITMAP_BLUE_TEXTURES_IRONGRIP_ID));
    tiledImage1.setPosition(0, 0, 480, 272);
    tiledImage1.setOffset(0, 0);

    startButton.setXY(29, 0);
    startButton.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    startButton.setLabelText(touchgfx::TypedText(T_SINGLEUSEID1));
    startButton.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(41, 237, 1));
    startButton.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(252, 167, 0));
    startButton.setAction(buttonCallback);

    stopButton.setXY(29, 60);
    stopButton.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    stopButton.setLabelText(touchgfx::TypedText(T_SINGLEUSEID2));
    stopButton.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(237, 14, 14));
    stopButton.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 169, 0));
    stopButton.setAlpha(100);
    stopButton.setAction(buttonCallback);

    textCurDir.setPosition(36, 124, 35, 25);
    textCurDir.setColor(touchgfx::Color::getColorFrom24BitRGB(64, 119, 255));
    textCurDir.setLinespacing(0);
    Unicode::snprintf(textCurDirBuffer, TEXTCURDIR_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID31).getText());
    textCurDir.setWildcard(textCurDirBuffer);
    textCurDir.setTypedText(touchgfx::TypedText(T_SINGLEUSEID21));

    textCurTimer.setPosition(82, 124, 110, 25);
    textCurTimer.setColor(touchgfx::Color::getColorFrom24BitRGB(64, 119, 255));
    textCurTimer.setLinespacing(0);
    Unicode::snprintf(textCurTimerBuffer, TEXTCURTIMER_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID30).getText());
    textCurTimer.setWildcard(textCurTimerBuffer);
    textCurTimer.setTypedText(touchgfx::TypedText(T_SINGLEUSEID7));

    textStatistic.setXY(82, 155);
    textStatistic.setColor(touchgfx::Color::getColorFrom24BitRGB(252, 252, 252));
    textStatistic.setLinespacing(0);
    textStatistic.setTypedText(touchgfx::TypedText(T_SINGLEUSEID8));

    textArea1.setXY(12, 182);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID9));

    textArea1_1.setXY(12, 202);
    textArea1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea1_1.setLinespacing(0);
    textArea1_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID10));

    textArea1_2.setXY(12, 222);
    textArea1_2.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea1_2.setLinespacing(0);
    textArea1_2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID11));

    textArea1_3.setXY(12, 242);
    textArea1_3.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea1_3.setLinespacing(0);
    textArea1_3.setTypedText(touchgfx::TypedText(T_SINGLEUSEID12));

    textStatLeftMin.setPosition(67, 182, 65, 20);
    textStatLeftMin.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textStatLeftMin.setLinespacing(0);
    Unicode::snprintf(textStatLeftMinBuffer, TEXTSTATLEFTMIN_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID26).getText());
    textStatLeftMin.setWildcard(textStatLeftMinBuffer);
    textStatLeftMin.setTypedText(touchgfx::TypedText(T_SINGLEUSEID13));

    textStatLeftMax.setPosition(67, 202, 65, 20);
    textStatLeftMax.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textStatLeftMax.setLinespacing(0);
    Unicode::snprintf(textStatLeftMaxBuffer, TEXTSTATLEFTMAX_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID27).getText());
    textStatLeftMax.setWildcard(textStatLeftMaxBuffer);
    textStatLeftMax.setTypedText(touchgfx::TypedText(T_SINGLEUSEID14));

    textStatLeftMean.setPosition(67, 222, 65, 20);
    textStatLeftMean.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textStatLeftMean.setLinespacing(0);
    Unicode::snprintf(textStatLeftMeanBuffer, TEXTSTATLEFTMEAN_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID28).getText());
    textStatLeftMean.setWildcard(textStatLeftMeanBuffer);
    textStatLeftMean.setTypedText(touchgfx::TypedText(T_SINGLEUSEID15));

    textStatLeftStd.setPosition(67, 242, 65, 20);
    textStatLeftStd.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textStatLeftStd.setLinespacing(0);
    Unicode::snprintf(textStatLeftStdBuffer, TEXTSTATLEFTSTD_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID29).getText());
    textStatLeftStd.setWildcard(textStatLeftStdBuffer);
    textStatLeftStd.setTypedText(touchgfx::TypedText(T_SINGLEUSEID16));

    textStatRightMin.setPosition(142, 182, 65, 20);
    textStatRightMin.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textStatRightMin.setLinespacing(0);
    Unicode::snprintf(textStatRightMinBuffer, TEXTSTATRIGHTMIN_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID25).getText());
    textStatRightMin.setWildcard(textStatRightMinBuffer);
    textStatRightMin.setTypedText(touchgfx::TypedText(T_SINGLEUSEID17));

    textStatRightMax.setPosition(142, 202, 65, 20);
    textStatRightMax.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textStatRightMax.setLinespacing(0);
    Unicode::snprintf(textStatRightMaxBuffer, TEXTSTATRIGHTMAX_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID24).getText());
    textStatRightMax.setWildcard(textStatRightMaxBuffer);
    textStatRightMax.setTypedText(touchgfx::TypedText(T_SINGLEUSEID18));

    textStatRightMean.setPosition(142, 222, 65, 20);
    textStatRightMean.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textStatRightMean.setLinespacing(0);
    Unicode::snprintf(textStatRightMeanBuffer, TEXTSTATRIGHTMEAN_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID23).getText());
    textStatRightMean.setWildcard(textStatRightMeanBuffer);
    textStatRightMean.setTypedText(touchgfx::TypedText(T_SINGLEUSEID19));

    textStatRightStd.setPosition(142, 242, 65, 20);
    textStatRightStd.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textStatRightStd.setLinespacing(0);
    Unicode::snprintf(textStatRightStdBuffer, TEXTSTATRIGHTSTD_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID22).getText());
    textStatRightStd.setWildcard(textStatRightStdBuffer);
    textStatRightStd.setTypedText(touchgfx::TypedText(T_SINGLEUSEID20));

    scrollList1.setPosition(230, 0, 250, 272);
    scrollList1.setHorizontal(false);
    scrollList1.setCircular(false);
    scrollList1.setEasingEquation(touchgfx::EasingEquations::backEaseOut);
    scrollList1.setSwipeAcceleration(10);
    scrollList1.setDragAcceleration(10);
    scrollList1.setNumberOfItems(12);
    scrollList1.setPadding(0, 0);
    scrollList1.setSnapping(false);
    scrollList1.setDrawableSize(25, 0);
    scrollList1.setDrawables(scrollList1ListItems, updateItemCallback);

    add(__background);
    add(tiledImage1);
    add(startButton);
    add(stopButton);
    add(textCurDir);
    add(textCurTimer);
    add(textStatistic);
    add(textArea1);
    add(textArea1_1);
    add(textArea1_2);
    add(textArea1_3);
    add(textStatLeftMin);
    add(textStatLeftMax);
    add(textStatLeftMean);
    add(textStatLeftStd);
    add(textStatRightMin);
    add(textStatRightMax);
    add(textStatRightMean);
    add(textStatRightStd);
    add(scrollList1);
}

void Screen1ViewBase::setupScreen()
{
    scrollList1.initialize();
    for (int i = 0; i < scrollList1ListItems.getNumberOfDrawables(); i++)
    {
        scrollList1ListItems[i].initialize();
    }
}

void Screen1ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &startButton)
    {
        //startBtnClickedIter
        //When startButton clicked call virtual function
        //Call startBtnClicked
        startBtnClicked();
    }
    else if (&src == &stopButton)
    {
        //stopBtnClickedIter
        //When stopButton clicked call virtual function
        //Call stopBtnClicked
        stopBtnClicked();
    }
}

void Screen1ViewBase::updateItemCallbackHandler(touchgfx::DrawableListItemsInterface* items, int16_t containerIndex, int16_t itemIndex)
{
    if (items == &scrollList1ListItems)
    {
        touchgfx::Drawable* d = items->getDrawable(containerIndex);
        CustomContainer1* cc = (CustomContainer1*)d;
        scrollList1UpdateItem(*cc, itemIndex);
    }
}
