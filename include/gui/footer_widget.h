//
// Created by JMendyk on 18.12.17.
//

#ifndef LOGICON_FOOTERWIDGET_H
#define LOGICON_FOOTERWIDGET_H

#include "gui/gUtils.h"

namespace Logicon {

    class FooterWidget {
        std::string strings[5];

//-----------------------------------------------------------------------------
    private:
        FooterWidget() = default;

    public:
        static FooterWidget &getInstance();

        FooterWidget(const FooterWidget &) = delete;

        void operator=(FooterWidget const &) = delete;

//-----------------------------------------------------------------------------
    public:
        bool init();

        void render(const UI::Vec2 &window_pos, const UI::Vec2 &window_size);

        bool close();

        void setStr(int idx, std::string str);
    };

};

#endif //LOGICON_FOOTERWIDGET_H
