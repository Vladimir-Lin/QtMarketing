/****************************************************************************
 *                                                                          *
 * Copyright (C) 2015 Neutrino International Inc.                           *
 *                                                                          *
 * Author : Brian Lin <lin.foxman@gmail.com>, Skype: wolfram_lin            *
 *                                                                          *
 ****************************************************************************/

#ifndef QT_MARKETING_H
#define QT_MARKETING_H

#include <QtManagers>

QT_BEGIN_NAMESPACE

#ifndef QT_STATIC
#    if defined(QT_BUILD_MARKETING_LIB)
#      define Q_MARKETING_EXPORT Q_DECL_EXPORT
#    else
#      define Q_MARKETING_EXPORT Q_DECL_IMPORT
#    endif
#else
#    define Q_MARKETING_EXPORT
#endif

namespace N
{

class Q_MARKETING_EXPORT Marketing ;

class Q_MARKETING_EXPORT Marketing
{
  public:

    explicit Marketing (void);
    virtual ~Marketing (void);

  protected:

  private:

};

}

QT_END_NAMESPACE

#endif
