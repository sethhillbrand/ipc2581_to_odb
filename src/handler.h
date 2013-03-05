#ifndef __HANDLER_H__
#define __HANDLER_H__

#include <QtCore>

class Handler
{
public:
  Handler() {};
  virtual ~Handler() = 0;
  virtual void run(QString& elementText) = 0;
};

#endif
