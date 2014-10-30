// albert - a simple application launcher for linux
// Copyright (C) 2014 Manuel Schneider
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef WEBSEARCHWIDGET_H
#define WEBSEARCHWIDGET_H

#include "ui_websearchwidget.h"
#include "websearch.h"
#include <QWidget>

class WebSearchWidget : public QWidget
{
	Q_OBJECT
	Ui::WebSearchWidget ui;

public:
	explicit WebSearchWidget(WebSearch*, QWidget *parent = 0);

protected:
	WebSearch *_ref;
    void updateWebsearchListWidget();

protected slots:
	void onButton_new();
	void onButton_remove();
	void onButton_setIcon();
	void onChange(int,int);
	void onReset();
};

#endif // WEBSEARCHWIDGET_H
