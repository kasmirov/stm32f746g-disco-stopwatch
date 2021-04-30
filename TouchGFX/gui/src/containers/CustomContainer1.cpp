#include <gui/containers/CustomContainer1.hpp>
#include <gui_generated/containers/CustomContainer1Base.hpp>

CustomContainer1::CustomContainer1()
{

}

void CustomContainer1::initialize()
{
    CustomContainer1Base::initialize();
}

void CustomContainer1::setupListElement(int ctr, const char *dir, float time)
{
    //textNum
    Unicode::snprintf(textNumBuffer, TEXTNUM_SIZE, "%d", ctr);
    //textDir
    Unicode::strncpy(textDirBuffer, dir, TEXTDIR_SIZE);
    //textTime
    Unicode::snprintfFloat(textTimeBuffer, TEXTTIME_SIZE, "%2.6f", time);
    
    invalidate();
}