/*
 * Copyright (C) 2021-2021 QuasarApp.
 * Distributed under the lgplv3 software license, see the accompanying
 * Everyone is permitted to copy and distribute verbatim copies
 * of this license document, but changing it is not allowed.
*/


#ifndef SETTINGS_H
#define SETTINGS_H

#include "quasarapp_global.h"
#include "isettings.h"

namespace QuasarAppUtils {

class QUASARAPPSHARED_EXPORT Settings: public ISettings
{
public:
    Settings();

    // ISettings interface
protected:
    void syncImplementation();
    QVariant getValueImplementation(const QString &key, const QVariant &def);
    void setValueImplementation(const QString key, const QVariant &value);


private:
    QSettings *_settings = nullptr;
};

}

#endif // SETTINGS_H
