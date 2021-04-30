#ifndef SCREEN1VIEW_HPP
#define SCREEN1VIEW_HPP

#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>
#include <gui/containers/CustomContainer1.hpp>

class Screen1View : public Screen1ViewBase
{
public:
    Screen1View();
    virtual ~Screen1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void startBtnClicked();
    virtual void stopBtnClicked();

    virtual void textCurDirUpdated(const char* dir);
    virtual void textCurTimerUpdated(float time);
    virtual void addToList(const char* dir, float time);
    virtual void textUpdateStat(float l_min, float l_max, float l_mean, float l_stdev, float r_min, float r_max, float r_mean, float r_stdev);

protected:

};

#endif // SCREEN1VIEW_HPP
