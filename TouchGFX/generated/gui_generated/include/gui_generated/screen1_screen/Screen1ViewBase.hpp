/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN1VIEWBASE_HPP
#define SCREEN1VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TiledImage.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/scrollers/ScrollList.hpp>
#include <gui/containers/CustomContainer1.hpp>
#include <touchgfx/mixins/ClickListener.hpp>

class Screen1ViewBase : public touchgfx::View<Screen1Presenter>
{
public:
    Screen1ViewBase();
    virtual ~Screen1ViewBase() {}
    virtual void setupScreen();

    virtual void scrollList1UpdateItem(CustomContainer1& item, int16_t itemIndex)
    {
        // Override and implement this function in Screen1
    }

    /*
     * Virtual Action Handlers
     */
    virtual void startBtnClicked()
    {
        // Override and implement this function in Screen1
    }

    virtual void stopBtnClicked()
    {
        // Override and implement this function in Screen1
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::TiledImage tiledImage1;
    touchgfx::ClickListener< touchgfx::ButtonWithLabel > startButton;
    touchgfx::ButtonWithLabel stopButton;
    touchgfx::TextAreaWithOneWildcard textCurDir;
    touchgfx::TextAreaWithOneWildcard textCurTimer;
    touchgfx::TextArea textStatistic;
    touchgfx::TextArea textArea1;
    touchgfx::TextArea textArea1_1;
    touchgfx::TextArea textArea1_2;
    touchgfx::TextArea textArea1_3;
    touchgfx::TextAreaWithOneWildcard textStatLeftMin;
    touchgfx::TextAreaWithOneWildcard textStatLeftMax;
    touchgfx::TextAreaWithOneWildcard textStatLeftMean;
    touchgfx::TextAreaWithOneWildcard textStatLeftStd;
    touchgfx::TextAreaWithOneWildcard textStatRightMin;
    touchgfx::TextAreaWithOneWildcard textStatRightMax;
    touchgfx::TextAreaWithOneWildcard textStatRightMean;
    touchgfx::TextAreaWithOneWildcard textStatRightStd;
    touchgfx::ScrollList scrollList1;
    touchgfx::DrawableListItems<CustomContainer1, 12> scrollList1ListItems;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTCURDIR_SIZE = 4;
    touchgfx::Unicode::UnicodeChar textCurDirBuffer[TEXTCURDIR_SIZE];
    static const uint16_t TEXTCURTIMER_SIZE = 10;
    touchgfx::Unicode::UnicodeChar textCurTimerBuffer[TEXTCURTIMER_SIZE];
    static const uint16_t TEXTSTATLEFTMIN_SIZE = 10;
    touchgfx::Unicode::UnicodeChar textStatLeftMinBuffer[TEXTSTATLEFTMIN_SIZE];
    static const uint16_t TEXTSTATLEFTMAX_SIZE = 10;
    touchgfx::Unicode::UnicodeChar textStatLeftMaxBuffer[TEXTSTATLEFTMAX_SIZE];
    static const uint16_t TEXTSTATLEFTMEAN_SIZE = 10;
    touchgfx::Unicode::UnicodeChar textStatLeftMeanBuffer[TEXTSTATLEFTMEAN_SIZE];
    static const uint16_t TEXTSTATLEFTSTD_SIZE = 10;
    touchgfx::Unicode::UnicodeChar textStatLeftStdBuffer[TEXTSTATLEFTSTD_SIZE];
    static const uint16_t TEXTSTATRIGHTMIN_SIZE = 10;
    touchgfx::Unicode::UnicodeChar textStatRightMinBuffer[TEXTSTATRIGHTMIN_SIZE];
    static const uint16_t TEXTSTATRIGHTMAX_SIZE = 10;
    touchgfx::Unicode::UnicodeChar textStatRightMaxBuffer[TEXTSTATRIGHTMAX_SIZE];
    static const uint16_t TEXTSTATRIGHTMEAN_SIZE = 10;
    touchgfx::Unicode::UnicodeChar textStatRightMeanBuffer[TEXTSTATRIGHTMEAN_SIZE];
    static const uint16_t TEXTSTATRIGHTSTD_SIZE = 10;
    touchgfx::Unicode::UnicodeChar textStatRightStdBuffer[TEXTSTATRIGHTSTD_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Screen1ViewBase, const touchgfx::AbstractButton&> buttonCallback;
    touchgfx::Callback<Screen1ViewBase, touchgfx::DrawableListItemsInterface*, int16_t, int16_t> updateItemCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);
    void updateItemCallbackHandler(touchgfx::DrawableListItemsInterface* items, int16_t containerIndex, int16_t itemIndex);

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 7200;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];
};

#endif // SCREEN1VIEWBASE_HPP
