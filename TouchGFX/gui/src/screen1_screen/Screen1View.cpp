#include <gui/screen1_screen/Screen1View.hpp>
#include <typeinfo>
#include <string>
#include <gui/containers/CustomContainer1.hpp>


Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
    //scrollList1.removeAll();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::startBtnClicked()
{
    presenter->startTimer();
    startButton.setAlpha(100);
    startButton.invalidate();
    stopButton.setAlpha(255);
    stopButton.invalidate();
}

void Screen1View::stopBtnClicked()
{
    presenter->stopTimer();
    startButton.setAlpha(255);
    startButton.invalidate();
    stopButton.setAlpha(100);
    stopButton.invalidate();
}

void Screen1View::textCurDirUpdated(const char* dir)
{
    // Unicode::UnicodeChar buffer[20];
    // Unicode::snprintfFloat(buffer, 20, "%6.4f", 3.14159f);
    Unicode::strncpy(textCurDirBuffer, dir, TEXTCURDIR_SIZE);
    //textCurDir.setWildcard((touchgfx::Unicode::UnicodeChar*)textAreaBuffer);
    textCurDir.invalidate();
}

void Screen1View::textCurTimerUpdated(float time)
{
    //Unicode::UnicodeChar buffer[20];
    Unicode::snprintfFloat(textCurTimerBuffer, 20, "%2.6f", time);
    //textCurTimer.setWildcard(buffer);
    textCurTimer.invalidate();
}

void Screen1View::addToList(const char* dir, float time)
{
    static int cnt = 0;
  
    scrollList1ListItems[cnt % scrollList1ListItems.getNumberOfDrawables()].setupListElement(cnt + 1, dir, time);
    scrollList1.invalidate();
    cnt++;
}

void Screen1View::textUpdateStat(float l_min, float l_max, float l_mean, float l_stdev, float r_min, float r_max, float r_mean, float r_stdev)
{
    Unicode::snprintfFloat(textStatLeftMinBuffer, 20, "%2.3f", l_min);
    textStatLeftMin.invalidate();
    
    Unicode::snprintfFloat(textStatLeftMaxBuffer, 20, "%2.3f", l_max);
    textStatLeftMax.invalidate();
    
    Unicode::snprintfFloat(textStatLeftMeanBuffer, 20, "%2.3f", l_mean);
    textStatLeftMean.invalidate();
    
    Unicode::snprintfFloat(textStatLeftStdBuffer, 20, "%2.3f", l_stdev);
    textStatLeftStd.invalidate();
    
    Unicode::snprintfFloat(textStatRightMinBuffer, 20, "%2.3f", r_min);
    textStatRightMin.invalidate();
    
    Unicode::snprintfFloat(textStatRightMaxBuffer, 20, "%2.3f", r_max);
    textStatRightMax.invalidate();
    
    Unicode::snprintfFloat(textStatRightMeanBuffer, 20, "%2.3f", r_mean);
    textStatRightMean.invalidate();
    
    Unicode::snprintfFloat(textStatRightStdBuffer, 20, "%2.3f", r_stdev);
    textStatRightStd.invalidate();
    
}