/***************************************************************************
 *   copyright       : (C) 2003-2009 by Pascal Brachet                     *
 *   http://www.xm1math.net/texmaker/                                      *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef FILECHOOSER_H
#define FILECHOOSER_H

#include "ui_filechooser.h"

class FileChooser : public QDialog {
    Q_OBJECT

public:
    FileChooser( QWidget *parent = 0, QString name="");
    Ui::FileChooser ui;
    QString fileName() const;
    QString filter,dir;

public slots:
    void setDir( const QString &di );
    void setFilter( const QString &fil );

signals:
    void fileNameChanged( const QString & );

private slots:
    void chooseFile();

};

#endif
